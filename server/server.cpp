#include "server.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QTextStream>
#include <QJsonArray>
#include <QFile>
#include <QtConcurrent>
#include <QCryptographicHash>

Server::Server(QObject *parent) : QObject(parent)
{
    server = new QTcpServer(this);
    connect(server, &QTcpServer::newConnection, this, &Server::newConnection);
}

void Server::startServer(quint16 port)
{
    if (server->listen(QHostAddress::Any, port)) {
        qDebug() << "Server started on port" << port;
    } else {
        qDebug() << "Failed to start server:" << server->errorString();
    }
}

void Server::newConnection()
{
    QTcpSocket *newClient = server->nextPendingConnection();
    clientSockets.append(newClient);

    qDebug() << "New client connected. Total clients:" << clientSockets.size();

    connect(newClient, &QTcpSocket::readyRead, this, &Server::readClientMessage);
    connect(newClient, &QTcpSocket::disconnected, this, &Server::clientDisconnected);
}

void Server::readClientMessage()
{
    QTcpSocket *senderClient = qobject_cast<QTcpSocket*>(sender());
    if (!senderClient)
        return;

    QByteArray data = senderClient->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isObject()) {
        senderClient->write("Invalid data format");
        return;
    }
    QJsonObject json = doc.object();
    QString email = json["email"].toString();
    QString password = json["password"].toString();
    QString name = json["name"].toString();
    QString phone = json["phone"].toString();
    QString walletName= json["walletName"].toString() ;
    QString type =json["type"].toString() ;
    QString addresswal = json["address"].toString() ;

    qDebug() << "44444:" <<json ;

    qDebug() << "Received email:" << email;
    qDebug() << "Received password:" << password;
    qDebug() << "Received name:" << name;
    qDebug() << "Received phone:" << phone;
    qDebug() << "walletName"<< walletName;
    qDebug() << "type" << type;
    qDebug() << "address"<< addresswal;

    if (json["type"].toString() == "forgot_password") {
        QString email = json["email"].toString();
        QString username = json["username"].toString();
        QJsonObject user = loadUserData(email);
        if (user["name"].toString() == username) {
            senderClient->write("Password forgotten confirmed");
        } else {
            senderClient->write("Incorrect email or username.");
        }
        return;
    }
    else if(json["type"].toString() == "userprofile"){
        QString email = json["email"].toString();
        qDebug() << "1a";
        getUserProfileByEmail(email,senderClient);
        return;
    }
    else if(json["type"].toString() == "userprofiletoserver"){
        QString email = json["email"].toString();
        QString password = json["password"].toString();
        QString name = json["name"].toString();
        QString phone = json["phone"].toString();
        QString address = json["addresshome"].toString() ;
        QString firstname= json["fname"].toString();
        QString lastname= json["lname"].toString();
        QString user_level = json["userlevel"].toString();

        saveProfileToFile(email,password,name,phone,address,firstname,lastname,user_level,senderClient);
        return;
    }
    else if(json["type"].toString()=="deposit"){
        QString email = json["email"].toString();
        QString coin = json["coin"].toString();
        QString addresswal = json["address"].toString() ;
        QString amounth = json["amounth"].toString() ;
        checkdeposit(email,coin,addresswal,amounth,senderClient);
        return;
    }
    else if(json["type"].toString()=="checkkeys"){
        QString email = json["email"].toString();
        QString coin = json["coin"].toString();
        QString amounth = json["amounth"].toString() ;
        QString addresswal = json["address"].toString() ;
        QJsonArray wordsArray = json["selectedWords"].toArray();

        checkKeysandwithdrawal(email,addresswal,wordsArray,coin,amounth,senderClient);
        return;
    }
    else if(json["type"].toString()=="getsupply"){
        QString email = json["email"].toString();
        QString addresswal = json["address"].toString() ;
        getsupply(email,addresswal,senderClient);
        return;
    }
    else if(json["type"].toString()=="buycoin"){
        QString email = json["email"].toString();
        QString coin = json["coin"].toString();
        QString amounth = json["amounth"].toString() ;
        QString addresswal = json["address"].toString() ;
        buycoin(email,coin,addresswal,amounth,senderClient);
        return;
    }
    else if(json["type"].toString()=="sellcoin"){
        QString email = json["email"].toString();
        QString coin = json["coin"].toString();
        QString amounth = json["amounth"].toString() ;
        QString addresswal = json["address"].toString() ;
        sellcoin(email,coin,addresswal,amounth,senderClient);
        return;
    }
    else if(json["type"].toString()=="exchange"){
    QString email =json["email"].toString();
    QString addresswal =json["address"].toString();
    QString coin1 =json["coin1"].toString();
    QString coin2 =json["coin2"].toString();
    QString amount1 =json["amount1"].toString();
    QString amount2 =json["amount2"].toString();
    exchangeCoins(email,coin1,coin2,addresswal,amount1,amount2,senderClient);
    return;
    }
    else if (json["type"].toString() == "createwallet") {

        QString email = json["email"].toString();
        QString walletName= json["walletName"].toString() ;
        QString address =json["address"].toString();
        QJsonArray words = json["words"].toArray();

        if (email.isEmpty() || words.isEmpty() || walletName.isEmpty() || address.isEmpty()) {
            senderClient->write("Missing data");
            return;
        }
        saveWalletData(email,walletName,address, words,senderClient);
        return;
    }
    else if(json["type"].toString() =="walletInfo"){
        QString email = json["email"].toString();

        sendWalletInfoToClient(email,senderClient);
         return;
    }
    else if(json["type"].toString() =="walletCurrencies"){

        QString email = json["email"].toString();
        QString walletName = json["walletName"].toString();

        sendWalletCurrenciesToClient(email,walletName,senderClient);
        return;
    }
    else if (json["type"].toString() == "RecoveryRequest") {
        handleRecoveryRequest(json, senderClient);
        return;
    }
    else if(json["type"].toString()=="signup"){
        if (isEmailRegistered(email)) {
            senderClient->write("repeatemail");
        }
        else if (isNameRegistered(name)) {
            senderClient->write("repeatuser");
        }
        else {
            saveCredentials(email, password, name, phone);
            saveProfileToFile2(email, password, name, phone,"","","","0");
            qDebug() <<"qq";
            senderClient->write("ready");
        }
        return;
    }
    else if(json["type"].toString()=="signin"){
    if (isValidCredentials(email, password)) {
        senderClient->write("Login successful");
         return;
    }
    else {
        senderClient->write("error: The username or password is incorrect.");
         return;
    }
    return;
    }

    else {
        senderClient->write("No data sent");
    return;
    }
}

void Server::clientDisconnected()
{
    QTcpSocket *disconnectedClient = qobject_cast<QTcpSocket*>(sender());
    if (!disconnectedClient){
        return;
    }
    clientSockets.removeAll(disconnectedClient);
    disconnectedClient->deleteLater();

    qDebug() << "Client disconnected. Remaining clients:" << clientSockets.size();
}

bool Server::isEmailRegistered(const QString &email)
{
    QFile file("users.json");
    if (!file.exists()) {
        qDebug() << "File users.json does not exist. Creating new file.";
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            qDebug() << "Unable to create users.json file.";
            return false;
        }
        QJsonObject rootObject;
        QJsonArray usersArray;
        rootObject["users"] = usersArray;
        QJsonDocument doc(rootObject);
        file.write(doc.toJson());
        file.close();
        return false;
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open users file for reading.";
        return false;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonArray usersArray = doc.object()["users"].toArray();

    for (const QJsonValue &userValue : usersArray) {
        QJsonObject userObj = userValue.toObject();
        if (userObj["email"].toString() == email) {
            return true;
        }
    }
    return false;
}

void Server::saveCredentials(const QString &email, const QString &password, const QString &name, const QString &phone)
{
    QFile file("users.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open users file for writing.";
        return;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonObject rootObject = doc.object();
    QJsonArray usersArray = rootObject["users"].toArray();
    QJsonObject newUser;
    newUser["email"] = email;
    newUser["password"] = password;
    newUser["name"] = name;
    newUser["phone"] = phone;
    usersArray.append(newUser);
    rootObject["users"] = usersArray;
    doc.setObject(rootObject);
    file.resize(0);
    QTextStream out(&file);
    out << doc.toJson(QJsonDocument::Indented);
    file.close();
    qDebug() << "User credentials saved to file.";
}

QJsonObject Server::loadUserData(const QString &email)
{
    QFile file("users.json");


    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open users file for reading.";
        return QJsonObject();
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    if (doc.isNull()) {
        qDebug() << "Failed to parse the JSON file.";
        return QJsonObject();
    }
    QJsonArray usersArray = doc.object()["users"].toArray();

    if (usersArray.isEmpty()) {
        qDebug() << "No users found in the file.";
        return QJsonObject();
    }
    for (const QJsonValue &userValue : usersArray) {
        QJsonObject userObj = userValue.toObject();
        if (userObj["email"].toString() == email) {
            qDebug() << "User found: " << userObj;
            return userObj;
        }
    }
    qDebug() << "User with email" << email << "not found.";
    return QJsonObject();
}

void Server::sendUserData(QTcpSocket *client, const QString &email)
{
    QJsonObject userData = loadUserData(email);

    if (userData.isEmpty()) {
        client->write("User data not found");
        return;
    }
    QJsonObject response;
    response["email"] = userData["email"];
    response["name"] = userData["name"];
    response["password"] = userData["password"];
    response["phone"] = userData["phone"];

    QJsonDocument doc(response);
    client->write(doc.toJson());
    qDebug() << "User data sent to client.";
    return;
}

bool Server::isValidCredentials(const QString &email, const QString &password)
{
    QFile file("users.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open users file for reading.";
        return false;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    if (doc.isNull()) {
        qDebug() << "Failed to parse the JSON file.";
        return false;
    }
    QJsonArray usersArray = doc.object()["users"].toArray();
    for (const QJsonValue &userValue : usersArray) {
        QJsonObject userObj = userValue.toObject();
        if (userObj["email"].toString() == email &&
            userObj["password"].toString() == password) {
            return true;
        }
    }
    return false;
}

bool Server::isNameRegistered(const QString &name) {
    QFile file("users.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open users file for reading.";
        return false;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonArray usersArray = doc.object()["users"].toArray();
    for (const QJsonValue &userValue : usersArray) {
        QJsonObject userObj = userValue.toObject();
        if (userObj["name"].toString() == name) {
            return true;
        }
    }
    return false;
}

void Server::saveWalletData(const QString &email, const QString &walletName, const QString &address, const QJsonArray &words, QTcpSocket *clientSocket) {
    QFile file("wallets.json");
    QJsonDocument doc;
    QJsonObject rootObject;
    if (file.exists()) {
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QByteArray fileData = file.readAll();
            doc = QJsonDocument::fromJson(fileData);
            rootObject = doc.object();
            file.close();
        }
    }
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open wallets file for writing.";
        return;
    }
    QJsonObject wallets = rootObject["wallets"].toObject();
    if (wallets.contains(email)) {
        QJsonArray walletsArray = wallets[email].toArray();
        for (const QJsonValue &walletValue : walletsArray) {
            QJsonObject walletObj = walletValue.toObject();
            if (walletObj["walletName"].toString() == walletName) {
                QJsonObject response;
                response["type"] = "WalletExists";
                QJsonDocument responseDoc(response);
                clientSocket->write(responseDoc.toJson());
                file.close();
                return;
            }
        }
        QJsonObject newWallet;
        newWallet["walletName"] = walletName;
        newWallet["address"] = address;
        newWallet["words"] = words;
        walletsArray.append(newWallet);
        wallets[email] = walletsArray;
        }
    else {
        QJsonObject newWallet;
        newWallet["address"] = address;
        newWallet["walletName"] = walletName;
        newWallet["words"] = words;
        QJsonArray newWalletArray;
        newWalletArray.append(newWallet);
        wallets[email] = newWalletArray;
    }
    rootObject["wallets"] = wallets;
    doc.setObject(rootObject);


    file.resize(0);
    QTextStream out(&file);
    out << doc.toJson(QJsonDocument::Indented);
    file.close();
    QJsonObject response;
    response["type"] = "Wallet created successfully";
    QJsonDocument responseDoc(response);

    clientSocket->write(responseDoc.toJson());

    SaveWalletCurrencies(email,walletName,address);
    qDebug() << "Wallet data saved.";
}

void Server::handleRecoveryRequest(const QJsonObject &request, QTcpSocket *clientSocket)
{
    QString email = request["email"].toString();
    QString walletName = request["walletName"].toString();
    QFile file("wallets.json");
    qDebug() << "walletName";
    if (file.open(QIODevice::ReadOnly)) {
        QByteArray fileData = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(fileData);
        file.close();
        if (doc.isObject()) {
            QJsonObject wallets = doc.object()["wallets"].toObject();
            if (wallets.contains(email)) {
                QJsonArray walletsArray = wallets[email].toArray();
                for (const QJsonValue &walletValue : walletsArray) {
                    QJsonObject walletObj = walletValue.toObject();
                    qDebug() << "walletName1"<<walletObj["walletName"].toString();
                    qDebug() << "walletName2"<<walletName;
                    if (walletObj["walletName"].toString() == walletName) {
                        QJsonArray wordsArray = walletObj["words"].toArray();
                        QJsonArray words;
                        QJsonArray indexes;
                        for (const QJsonValue &wordValue : wordsArray) {
                            QJsonObject wordObj = wordValue.toObject();
                            words.append(wordObj["word"].toString());
                            indexes.append(wordObj["index"].toInt());
                        }
                        QJsonObject response;
                        response["type"] = "RecoveryRequest";
                        response["words"] = words;
                        response["indexes"] = indexes;

                        qDebug() << "Email:" << email;
                        qDebug() << "Wallet Name:" << walletName;
                        qDebug() << "Words Array:" << words;
                        qDebug() << "Indexes Array:" << indexes;
                        QJsonDocument responseDoc(response);
                        clientSocket->write(responseDoc.toJson());
                        return;
                    }
                }
            }
        }
    }
    QJsonObject response;
    response["type"] = "recoverywallet";
    response["error"] = "Email or wallet name not found";
    QJsonDocument responseDoc(response);
    clientSocket->write(responseDoc.toJson());
}

void Server:: SaveWalletCurrencies(const QString &email, const QString &name, const QString &address) {

    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    file.seek(0);
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull()) {
        jsonObj = QJsonObject();
    } else {
        jsonObj = doc.object();
    }
    if (!jsonObj.contains(email)) {
        QJsonObject emailObj;
        QJsonArray walletsArray;
        QJsonObject wallet;
        wallet["name"] = name;
        wallet["address"] = address;
        QJsonObject currencies;
        currencies["Tether"] = 0.0;
        currencies["Bitcoin"] = 0.0;
        currencies["Ethereum"] = 0.0;
        currencies["Tron"] = 0.0;
        currencies["Toman"] = 0.0;
        wallet["currencies"] = currencies;
        walletsArray.append(wallet);
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
    }
    else {
        QJsonObject emailObj = jsonObj[email].toObject();
        QJsonArray walletsArray = emailObj["wallets"].toArray();
        QJsonObject wallet;
        wallet["name"] = name;
        wallet["address"] = address;
        QJsonObject currencies;
        currencies["Tether"] = 0.0;
        currencies["Bitcoin"] = 0.0;
        currencies["Ethereum"] = 0.0;
        currencies["Tron"] = 0.0;
        currencies["Toman"] = 0.0;
        wallet["currencies"] = currencies;
        walletsArray.append(wallet);
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
    }
    QJsonDocument updatedDoc(jsonObj);
    file.write(updatedDoc.toJson());
    file.close();
    qDebug() << "Wallet saved successfully for email: " << email;
}

void Server::sendWalletInfoToClient(const QString &email, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open file for reading";
        return;
    }
    QByteArray data = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON data";
        return;
    }
    QJsonObject jsonObj = doc.object();
    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found in the file.";
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();

    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        QtConcurrent::run([=]() {
            QMetaObject::invokeMethod(this, [=]() {
                sendWalletCurrenciesToClient(email, wallet["name"].toString(), clientSocket);
            }, Qt::QueuedConnection);
        });
    }
}

void Server::sendWalletCurrenciesToClient(const QString &email, const QString &walletName, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");

    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open file for reading: " << file.errorString();
        return;
    }
    QByteArray data = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON in walletsdata.json: " << data;
        return;
    }
    QJsonObject jsonObj = doc.object();
    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found in the file: " << email;
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool walletFound = false;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["name"].toString() == walletName) {
            walletFound = true;
            QJsonObject response;
            response["type"] = "walletCurrencies";
            response["name"] = wallet["name"].toString();
            response["address"] = wallet["address"].toString();
            QJsonObject currencies = wallet["currencies"].toObject();
            QJsonObject currenciesResponse;
            for (const QString &currency : currencies.keys()) {
                currenciesResponse[currency] = currencies[currency].toDouble();
            }
            response["currencies"] = currenciesResponse;
            QJsonDocument responseDoc(response);
            QByteArray responseData = responseDoc.toJson();
            QByteArray lengthHeader = QByteArray::number(responseData.size()) + "\r\n";
            if (clientSocket->state() == QAbstractSocket::ConnectedState) {
                clientSocket->write(lengthHeader + responseData);
                if (!clientSocket->waitForBytesWritten(5000)) {
                    qDebug() << "Failed to send wallet currencies to client.";
                } else {
                    qDebug() << "Wallet currencies sent: " << responseData;
                }
            } else {
                qDebug() << "Client socket is not connected.";
            }
            break;
        }
    }
    if (!walletFound) {
        qDebug() << "Wallet not found: " << walletName;
    }
    QByteArray endMessage = "{\"type\": \"end\"}\n";
    QByteArray lengthEndMessage = QByteArray::number(endMessage.size()) + "\r\n";
    if (clientSocket->state() == QAbstractSocket::ConnectedState) {
        clientSocket->write(lengthEndMessage + endMessage);
        if (!clientSocket->waitForBytesWritten(5000)) {
            qDebug() << "Failed to send end message to client.";
        } else {
            qDebug() << "End message sent.";
        }
    } else {
        qDebug() << "Client socket is not connected.";
    }
}

void Server::saveProfileToFile(const QString &email, const QString &password, const QString &name,const QString &phone, const QString &address, const QString &firstname,const QString &lastname, const QString &user_level, QTcpSocket *clientSocket) {
    QFile file("usersprofile.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open users file for writing.";
        return;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonObject rootObject = doc.object();
    QJsonArray usersArray = rootObject["users"].toArray();
    bool userExists = false;
    bool nameExistsInOtherUsers = false;
    QString existingUserName;
    for (int i = 0; i < usersArray.size(); ++i) {
        QJsonObject userObject = usersArray[i].toObject();
        if (userObject["email"].toString() == email) {
            userExists = true;
            existingUserName = userObject["name"].toString();
            break;
        }
    }
    for (const QJsonValue &value : usersArray) {
        QJsonObject userObject = value.toObject();
        if (userObject["name"].toString() == name && userObject["email"].toString() != email) {
            nameExistsInOtherUsers = true;
            qDebug() << "Response sent: fffffffffff";

            break;
        }
    }
    if (nameExistsInOtherUsers) {
        QJsonObject response;
        response["status"] = "defeat";
        response["message"] = "Username already exists in another user!";
        response["type"] = "saveuserprofile";
        QByteArray responseData = QJsonDocument(response).toJson();
        clientSocket->write(responseData);
        clientSocket->flush();
        qDebug() << "Response sent: defeat";
    } else {
        bool updated = false;
        for (int i = 0; i < usersArray.size(); ++i) {
            QJsonObject userObject = usersArray[i].toObject();
            if (userObject["email"].toString() == email) {
                if (!password.isEmpty()) {
                    userObject["password"] = password;
                }
                if (!phone.isEmpty()) {
                    userObject["phone"] = phone;
                }
                if (!address.isEmpty()) {
                    userObject["addresshome"] = address;
                }
                if (!firstname.isEmpty()) {
                    userObject["fname"] = firstname;
                }
                if (!lastname.isEmpty()) {
                    userObject["lname"] = lastname;
                }
                if (!user_level.isEmpty()) {
                    userObject["userlevel"] = user_level;
                }
                saveCredentials2(email, password, "", phone);

                if (existingUserName.isEmpty() || existingUserName == name) {
                    userObject["name"] = name;
                    saveCredentials2(email, password, name, phone);

                }
                usersArray[i] = userObject;
                updated = true;
                break;
            }
        }
        if (!updated) {
            QJsonObject newUser;
            newUser["email"] = email;
            newUser["password"] = password;
            newUser["phone"] = phone;
            newUser["addresshome"] = address;
            newUser["fname"] = firstname;
            newUser["lname"] = lastname;
            newUser["userlevel"] = user_level;
            newUser["name"] = name;
            saveCredentials2(email, password, name, phone);
            usersArray.append(newUser);
        }
        rootObject["users"] = usersArray;
        doc.setObject(rootObject);
        file.resize(0);
        QTextStream out(&file);
        out << doc.toJson(QJsonDocument::Indented);
        file.close();
        QJsonObject response;
        response["type"] = "saveuserprofile";
        response["status"] = "success";
        response["message"] = "User profile saved successfully.";
        QByteArray responseData = QJsonDocument(response).toJson();
        clientSocket->write(responseData);
        clientSocket->flush();
        qDebug() << "Response sent: success";
    }
}

void Server::getUserProfileByEmail(const QString &email, QTcpSocket *clientSocket) {
    QFile file("usersprofile.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open users file for reading.";
        QJsonObject response;
        response["error"] = "error getUserProfile";
        QByteArray responseData = QJsonDocument(response).toJson();
        clientSocket->write(responseData);
        clientSocket->flush();
        return;
    }
    QByteArray fileData = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonObject rootObject = doc.object();
    QJsonArray usersArray = rootObject["users"].toArray();
    for (const QJsonValue &value : usersArray) {
        QJsonObject userObject = value.toObject();
        if (userObject["email"].toString() == email) {
            QJsonObject response;
            response["user"] = userObject;
            qDebug() << "2a";
            response["type"] = "userprofile";
            QByteArray responseData = QJsonDocument(response).toJson();
            clientSocket->write(responseData);
            clientSocket->flush();
            qDebug() << "User profile sent to client.";
            return;
        }
    }
    QJsonObject response;
    response["status"] = "not_found";
    response["message"] = "User not found.";
    QByteArray responseData = QJsonDocument(response).toJson();
    clientSocket->write(responseData);
    clientSocket->flush();
    qDebug() << "User not found, response sent.";
}

void Server::saveCredentials2(const QString &email, const QString &password, const QString &name, const QString &phone)
{
    QFile file("users.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open users file for writing.";
        return;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonObject rootObject = doc.object();
    QJsonArray usersArray = rootObject["users"].toArray();
    bool userFound = false;
    for (int i = 0; i < usersArray.size(); ++i) {
        QJsonObject userObject = usersArray[i].toObject();
        if (userObject["email"].toString() == email) {
            userFound = true;
            if (!password.isEmpty()) {
                userObject["password"] = password;
            }
            if (!name.isEmpty()) {
                userObject["name"] = name;
            }
            if (!phone.isEmpty()) {
                userObject["phone"] = phone;
            }
            usersArray[i] = userObject;
            break;
        }
    }
    if (!userFound) {
        QJsonObject newUser;
        newUser["email"] = email;
        if (!password.isEmpty()) {
            newUser["password"] = password;
        }
        if (!name.isEmpty()) {
            newUser["name"] = name;
        }
        if (!phone.isEmpty()) {
            newUser["phone"] = phone;
        }
        usersArray.append(newUser);
    }
    rootObject["users"] = usersArray;
    doc.setObject(rootObject);
    file.resize(0);
    QTextStream out(&file);
    out << doc.toJson(QJsonDocument::Indented);
    file.close();
    qDebug() << "User credentials2 saved to file2.";
}

void Server::checkdeposit(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON format!";
        file.close();
        return;
    }
    jsonObj = doc.object();

    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found!";
        file.close();
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool found = false;
    bool updated = false;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["address"].toString() == addresswal) {
            found = true;
            QJsonObject currencies = wallet["currencies"].toObject();
            if (currencies.contains(coin)) {
                double currentAmount = currencies[coin].toDouble();
                double newAmount = currentAmount + amounth.toDouble();
                currencies[coin] = newAmount;
                wallet["currencies"] = currencies;
                walletsArray[i] = wallet;
                updated = true;
            }
            break;
        }
    }
    QJsonObject response;
    response["type"] = "deposit";
    if (!found) {
        response["status"] = "walletnotfound";
    } else if (!updated) {
        response["status"] = "currencynotfound";
    } else {
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
        file.seek(0);
        file.resize(0);
        file.write(QJsonDocument(jsonObj).toJson());
        response["status"] = "success";
    }
    file.close();
    if (clientSocket && clientSocket->isOpen()) {
        QJsonDocument docResponse(response);
        QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
        clientSocket->write(jsonData);
        clientSocket->flush();
    } else {
        qDebug() << "Client socket is not open!";
    }
}

void Server::checkWalletKeys(const QString &email, const QString &address, const QJsonArray &wordsArray, QTcpSocket *clientSocket) {
    QFile file("wallets.json");
    if (!file.exists()) {
        qDebug() << "Wallets file does not exist.";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open wallets file.";
        return;
    }
    QByteArray fileData = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    if (!doc.isObject()) {
        qDebug() << "Invalid JSON format.";
        return;
    }
    QJsonObject rootObject = doc.object();
    QJsonObject wallets = rootObject["wallets"].toObject();
    if (!wallets.contains(email)) {
        qDebug() << "Email not found.";
        return;
    }
    QJsonArray walletsArray = wallets[email].toArray();
    for (const QJsonValue &walletValue : walletsArray) {
        QJsonObject walletObj = walletValue.toObject();
        if (walletObj["address"].toString() == address) {
            QJsonArray storedWords = walletObj["words"].toArray();
            QMap<int, QString> storedWordsMap;
            for (const QJsonValue &wordValue : storedWords) {
                QJsonObject wordObj = wordValue.toObject();
                storedWordsMap[wordObj["index"].toInt()] = wordObj["word"].toString();
            }
            QList<QString> sortedStoredWords;
            for (auto key : storedWordsMap.keys()) {
                sortedStoredWords.append(storedWordsMap[key]);
            }
            QMap<int, QString> inputWordsMap;
            for (const QJsonValue &wordValue : wordsArray) {
                QJsonObject wordObj = wordValue.toObject();
                inputWordsMap[wordObj["index"].toInt()] = wordObj["word"].toString();
            }
            QList<QString> sortedInputWords;
            for (auto key : inputWordsMap.keys()) {
                sortedInputWords.append(inputWordsMap[key]);
            }
            if (sortedStoredWords == sortedInputWords) {
                qDebug() << "Words match successfully!";
                QJsonObject response;
                response["type"] = "checkkeys";
                response["status"] = "success";
                QJsonDocument responseDoc(response);
                clientSocket->write(responseDoc.toJson());
                clientSocket->flush();
                return;
            }
            else {
                qDebug() << "Words do not match!";
                QJsonObject response;
                response["type"] = "checkkeys";
                response["status"] = "notmatch";
                QJsonDocument responseDoc(response);
                clientSocket->write(responseDoc.toJson());
                clientSocket->flush();
                return;
            }
        }
    }
    qDebug() << "Wallet not found.";
    QJsonObject response;
    response["type"] = "checkkeys";
    response["status"] = "wrongaddress";
    QJsonDocument responseDoc(response);
    clientSocket->write(responseDoc.toJson());
    clientSocket->flush();
}

void Server::checkKeysandwithdrawal(const QString &email, const QString &address, const QJsonArray &wordsArray, const QString &coin, const QString &amounth, QTcpSocket *clientSocket) {
    QFile file("wallets.json");
    if (!file.exists()) {
        qDebug() << "Wallets file does not exist.";
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open wallets file.";
        return;
    }
    QByteArray fileData = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    if (!doc.isObject()) {
        qDebug() << "Invalid JSON format.";
        return;
    }
    QJsonObject rootObject = doc.object();
    QJsonObject wallets = rootObject["wallets"].toObject();
    if (!wallets.contains(email)) {
        qDebug() << "Email not found.";
        return;
    }
    QJsonArray walletsArray = wallets[email].toArray();
    for (const QJsonValue &walletValue : walletsArray) {
        QJsonObject walletObj = walletValue.toObject();
        if (walletObj["address"].toString() == address) {
            QJsonArray storedWords = walletObj["words"].toArray();
            QMap<int, QString> storedWordsMap;
            for (const QJsonValue &wordValue : storedWords) {
                QJsonObject wordObj = wordValue.toObject();
                storedWordsMap[wordObj["index"].toInt()] = wordObj["word"].toString();
            }
            QList<QString> sortedStoredWords;
            for (auto key : storedWordsMap.keys()) {
                sortedStoredWords.append(storedWordsMap[key]);
            }
            QMap<int, QString> inputWordsMap;
            for (const QJsonValue &wordValue : wordsArray) {
                QJsonObject wordObj = wordValue.toObject();
                inputWordsMap[wordObj["index"].toInt()] = wordObj["word"].toString();
            }
            QList<QString> sortedInputWords;
            for (auto key : inputWordsMap.keys()) {
                sortedInputWords.append(inputWordsMap[key]);
            }
            if (sortedStoredWords == sortedInputWords) {
                qDebug() << "Words match successfully!";
                checkdwithdrawal(email, coin, address, amounth, clientSocket);
                return;
            }
            else {
                qDebug() << "Words do not match!";
                QJsonObject response;
                response["type"] = "checkkeyswith";
                response["status"] = "notmatch";
                QJsonDocument responseDoc(response);
                clientSocket->write(responseDoc.toJson());
                clientSocket->flush();
                return;
            }
        }
    }
    qDebug() << "Wallet not found.";
    QJsonObject response;
    response["type"] = "checkkeyswith";
    response["status"] = "wrongaddress";
    QJsonDocument responseDoc(response);
    clientSocket->write(responseDoc.toJson());
    clientSocket->flush();
}

void Server::checkdwithdrawal(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON format!";
        file.close();
        return;
    }
    jsonObj = doc.object();
    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found!";
        file.close();
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool found = false;
    bool updated = false;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["address"].toString() == addresswal) {
            found = true;
            QJsonObject currencies = wallet["currencies"].toObject();
            if (currencies.contains(coin)) {
                double currentAmount = currencies[coin].toDouble();
                double newAmount = currentAmount - amounth.toDouble();
                if(newAmount<0){
                    QJsonObject response;
                    response["type"] = "withdrawal";
                    response["status"] = "notenough";
                    QJsonDocument docResponse(response);
                    QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
                    clientSocket->write(jsonData);
                    clientSocket->flush();
                    return;
                }
                currencies[coin] = newAmount;
                wallet["currencies"] = currencies;
                walletsArray[i] = wallet;
                updated = true;
            }
            break;
        }
    }
    QJsonObject response;
    response["type"] = "withdrawal";
    if (!found) {
        response["status"] = "walletnotfound";
    } else if (!updated) {
        response["status"] = "currencynotfound";
    } else {
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
        file.seek(0);
        file.resize(0);
        file.write(QJsonDocument(jsonObj).toJson());
        response["status"] = "success";
    }
    file.close();
    if (clientSocket && clientSocket->isOpen()) {
        QJsonDocument docResponse(response);
        QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
        clientSocket->write(jsonData);
        clientSocket->flush();
    } else {
        qDebug() << "Client socket is not open!";
    }
}

void Server::getsupply(const QString &email, const QString &addresswal, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON format!";
        file.close();
        return;
    }
    jsonObj = doc.object();
    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found!";
        file.close();
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool found = false;
    QJsonObject walletResponse;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["address"].toString() == addresswal) {
            found = true;
            QJsonObject currencies = wallet["currencies"].toObject();
            QJsonObject currencyData;
            for (auto it = currencies.begin(); it != currencies.end(); ++it) {
                QString coin = it.key();
                double amount = it.value().toDouble();
                currencyData[coin] = amount;
            }
            walletResponse["currencies"] = currencyData;
            walletResponse["address"] = addresswal;
            break;
        }
    }
    QJsonObject response;
    response["type"] = "getsupply";
    if (!found) {
        response["status"] = "walletnotfound";
    } else {
        response["status"] = "success";
        response["wallet"] = walletResponse;
    }
    file.close();
    if (clientSocket && clientSocket->isOpen()) {
        QJsonDocument docResponse(response);
        QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
        clientSocket->write(jsonData);
        clientSocket->flush();
    } else {
        qDebug() << "Client socket is not open!";
    }
}

void Server::buycoin(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket) {

    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON format!";
        file.close();
        return;
    }
    jsonObj = doc.object();
    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found!";
        file.close();
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool found = false;
    bool updated = false;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["address"].toString() == addresswal) {
            found = true;
            QJsonObject currencies = wallet["currencies"].toObject();
            if (currencies.contains(coin)) {
                double currentAmount = currencies[coin].toDouble();
                double newAmount = currentAmount + amounth.toDouble();
                if(newAmount<0){
                    QJsonObject response;
                    response["type"] = "buycoin";
                    response["status"] = "notenough";
                    QJsonDocument docResponse(response);
                    QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
                    clientSocket->write(jsonData);
                    clientSocket->flush();
                    return;
                }
                currencies[coin] = newAmount;
                wallet["currencies"] = currencies;
                walletsArray[i] = wallet;
                updated = true;
            }
            break;
        }
    }
    QJsonObject response;
    response["type"] = "buycoin";
    if (!found) {
        response["status"] = "walletnotfound";
    } else if (!updated) {
        response["status"] = "currencynotfound";
    } else {
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
        file.seek(0);
        file.resize(0);
        file.write(QJsonDocument(jsonObj).toJson());
        response["status"] = "success";
    }
    file.close();
    if (clientSocket && clientSocket->isOpen()) {
        QJsonDocument docResponse(response);
        QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
        clientSocket->write(jsonData);
        clientSocket->flush();
    } else {
        qDebug() << "Client socket is not open!";
    }
}

void Server::sellcoin(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON format!";
        file.close();
        return;
    }
    jsonObj = doc.object();
    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found!";
        file.close();
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool found = false;
    bool updated = false;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["address"].toString() == addresswal) {
            found = true;
            QJsonObject currencies = wallet["currencies"].toObject();
            if (currencies.contains(coin)) {
                double currentAmount = currencies[coin].toDouble();
                double newAmount = currentAmount - amounth.toDouble();
                if(newAmount<0){
                    QJsonObject response;
                    response["type"] = "sellcoin";
                    response["status"] = "notenough";
                    QJsonDocument docResponse(response);
                    QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
                    clientSocket->write(jsonData);
                    clientSocket->flush();
                    return;
                }
                currencies[coin] = newAmount;
                wallet["currencies"] = currencies;
                walletsArray[i] = wallet;
                updated = true;
            }
            break;
        }
    }
    QJsonObject response;
    response["type"] = "sellcoin";

    if (!found) {
        response["status"] = "walletnotfound";
    } else if (!updated) {
        response["status"] = "currencynotfound";
    } else {
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
        file.seek(0);
        file.resize(0);
        file.write(QJsonDocument(jsonObj).toJson());
        response["status"] = "success";
    }
    file.close();
    if (clientSocket && clientSocket->isOpen()) {
        QJsonDocument docResponse(response);
        QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
        clientSocket->write(jsonData);
        clientSocket->flush();
    } else {
        qDebug() << "Client socket is not open!";
    }

}

void Server::exchangeCoins(const QString &email, const QString &coin1, const QString &coin2, const QString &addresswal, const QString &amount1, const QString &amount2, QTcpSocket *clientSocket) {
    QFile file("walletsdata.json");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading and writing";
        return;
    }
    QByteArray data = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj;
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON format!";
        file.close();
        return;
    }
    jsonObj = doc.object();

    if (!jsonObj.contains(email)) {
        qDebug() << "Email not found!";
        file.close();
        return;
    }
    QJsonObject emailObj = jsonObj[email].toObject();
    QJsonArray walletsArray = emailObj["wallets"].toArray();
    bool found = false;
    bool updated = false;
    for (int i = 0; i < walletsArray.size(); ++i) {
        QJsonObject wallet = walletsArray[i].toObject();
        if (wallet["address"].toString() == addresswal) {
            found = true;
            QJsonObject currencies = wallet["currencies"].toObject();
            if (currencies.contains(coin1) && currencies.contains(coin2)) {
                double currentAmount1 = currencies[coin1].toDouble();
                double currentAmount2 = currencies[coin2].toDouble();
                double amount1Double = amount1.toDouble();
                double amount2Double = amount2.toDouble();
                if (currentAmount1 >= amount1Double) {
                    double newAmount1 = currentAmount1 - amount1Double;
                    currencies[coin1] = newAmount1;
                } else {
                    QJsonObject response;
                    response["type"] = "exchange";
                    response["status"] = "notenough_coin1";
                    QJsonDocument docResponse(response);
                    QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
                    clientSocket->write(jsonData);
                    clientSocket->flush();
                    return;
                }
                double newAmount2 = currentAmount2 + amount2Double;
                currencies[coin2] = newAmount2;
                wallet["currencies"] = currencies;
                walletsArray[i] = wallet;
                updated = true;
            }
            break;
        }
    }
    QJsonObject response;
    response["type"] = "exchange";
    if (!found) {
        response["status"] = "walletnotfound";
    } else if (!updated) {
        response["status"] = "currencynotfound";
    } else {
        emailObj["wallets"] = walletsArray;
        jsonObj[email] = emailObj;
        file.seek(0);
        file.resize(0);
        file.write(QJsonDocument(jsonObj).toJson());
        response["status"] = "success";
    }
    file.close();
    if (clientSocket && clientSocket->isOpen()) {
        QJsonDocument docResponse(response);
        QByteArray jsonData = docResponse.toJson(QJsonDocument::Compact);
        clientSocket->write(jsonData);
        clientSocket->flush();
    } else {
        qDebug() << "Client socket is not open!";
    }
}









































void Server::saveProfileToFile2(const QString &email, const QString &password, const QString &name,const QString &phone, const QString &address, const QString &firstname,const QString &lastname, const QString &user_level) {
    QFile file("usersprofile.json");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open users file for writing.";
        return;
    }
    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    QJsonObject rootObject = doc.object();
    QJsonArray usersArray = rootObject["users"].toArray();
    bool userExists = false;
    bool nameExistsInOtherUsers = false;
    QString existingUserName;
    for (int i = 0; i < usersArray.size(); ++i) {
        QJsonObject userObject = usersArray[i].toObject();
        if (userObject["email"].toString() == email) {
            userExists = true;
            existingUserName = userObject["name"].toString();
            break;
        }
    }
    for (const QJsonValue &value : usersArray) {
        QJsonObject userObject = value.toObject();
        if (userObject["name"].toString() == name && userObject["email"].toString() != email) {
            nameExistsInOtherUsers = true;
            qDebug() << "Response sent: fffffffffff";

            break;
        }
    }
    if (nameExistsInOtherUsers) {
        qDebug() << "Response sent: defeat";
    } else {
        bool updated = false;
        for (int i = 0; i < usersArray.size(); ++i) {
            QJsonObject userObject = usersArray[i].toObject();
            if (userObject["email"].toString() == email) {
                if (!password.isEmpty()) {
                    userObject["password"] = password;
                }
                if (!phone.isEmpty()) {
                    userObject["phone"] = phone;
                }
                if (!address.isEmpty()) {
                    userObject["addresshome"] = address;
                }
                if (!firstname.isEmpty()) {
                    userObject["fname"] = firstname;
                }
                if (!lastname.isEmpty()) {
                    userObject["lname"] = lastname;
                }
                if (!user_level.isEmpty()) {
                    userObject["userlevel"] = user_level;
                }
                saveCredentials2(email, password, "", phone);

                if (existingUserName.isEmpty() || existingUserName == name) {
                    userObject["name"] = name;
                    saveCredentials2(email, password, name, phone);

                }
                usersArray[i] = userObject;
                updated = true;
                break;
            }
        }
        if (!updated) {
            QJsonObject newUser;
            newUser["email"] = email;
            newUser["password"] = password;
            newUser["phone"] = phone;
            newUser["addresshome"] = address;
            newUser["fname"] = firstname;
            newUser["lname"] = lastname;
            newUser["userlevel"] = user_level;
            newUser["name"] = name;
            saveCredentials2(email, password, name, phone);
            usersArray.append(newUser);
        }
        rootObject["users"] = usersArray;
        doc.setObject(rootObject);
        file.resize(0);
        QTextStream out(&file);
        out << doc.toJson(QJsonDocument::Indented);
        file.close();
        qDebug() << "Response sent: success";
    }
}
