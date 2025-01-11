#include "server.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QTextStream>
#include <QJsonArray>
#include <QFile>

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
    QString address = json["address"].toString();
    QString phone = json["phone"].toString();
    QString walletName= json["walletName"].toString() ;
    QString type =json["type"].toString() ;
    qDebug() << "Received email:" << email;
    qDebug() << "Received password:" << password;
    qDebug() << "Received name:" << name;
    qDebug() << "Received address:" << address;
    qDebug() << "Received phone:" << phone;
    qDebug() << "walletName"<< walletName;
    qDebug() << "type" << type;
    if (json["type"].toString() == "forgot_password") {
        QString email = json["email"].toString();
        QString username = json["username"].toString();

        QJsonObject user = loadUserData(email);
        if (user["name"].toString() == username) {
            senderClient->write("Password forgotten confirmed");
        } else {
            senderClient->write("ایمیل یا نام کاربری نادرست است");
        }
        return;
    }
    else if (json["type"].toString() == "createwallet") {
        qDebug()<< json["type"];

        QString email = json["email"].toString();
        QString walletName= json["walletName"].toString() ;

        QJsonArray words = json["words"].toArray();

        if (email.isEmpty() || words.isEmpty() || walletName.isEmpty()) {
            senderClient->write("Missing data");
            return;
        }

        // ذخیره اطلاعات در فایل
        saveWalletData(email,walletName, words,senderClient);

        return;
    }
    else if (json["type"]  == "RecoveryRequest") {
        handleRecoveryRequest(json, senderClient);
        return;
    }
    else if (json["type"]  == "checkwordswallet") {
        checkWalletWords(json, senderClient);
        return;
    }

    if (!email.isEmpty() && !password.isEmpty()) {
        if (name.isEmpty() && address.isEmpty() && phone.isEmpty()) {

            if (isValidCredentials(email, password)) {
                senderClient->write("Login successful");
            }
            else {
                senderClient->write("خطا: نام کاربری یا رمز عبور اشتباه است");

            }
        }
        else{
            if (isEmailRegistered(email)) {
                senderClient->write("این ایمیل قبلاً ثبت شده است");
            }else if (isNameRegistered(name)) {
                senderClient->write("این نام کاربری قبلاً ثبت شده است");
            }
            else {

                saveCredentials(email, password, name, address, phone);
                senderClient->write("ready");
            }
        }
    }
    else if (!email.isEmpty()) {
        getUserDataByEmail(email, senderClient);
    } else {
        senderClient->write("ایمیل ارسال نشده است");
    }
}

void Server::clientDisconnected()
{
    QTcpSocket *disconnectedClient = qobject_cast<QTcpSocket*>(sender());
    if (!disconnectedClient)
        return;

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

void Server::saveCredentials(const QString &email, const QString &password, const QString &name, const QString &address, const QString &phone)
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
    newUser["address"] = address;
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
    response["address"] = userData["address"];
    response["phone"] = userData["phone"];
    response["status"] = "success";

    QJsonDocument doc(response);
    client->write(doc.toJson());
    qDebug() << "User data sent to client.";
}

void Server::getUserDataByEmail(const QString &email, QTcpSocket *client)
{
    QJsonObject userData = loadUserData(email);

    if (userData.isEmpty()) {
        client->write("User data not found");
        return;
    }

    QJsonObject response;
    response["email"] = userData["email"];
    response["name"] = userData["name"];
    response["address"] = userData["address"];
    response["phone"] = userData["phone"];
    response["status"] = "success";

    QJsonDocument doc(response);
    client->write(doc.toJson());
    qDebug() << "User data sent to client.";
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
void Server::saveWalletData(const QString &email, const QString &walletName, const QJsonArray &words, QTcpSocket *clientSocket) {
    QFile file("wallets.json");
    QJsonDocument doc;
    QJsonObject rootObject;

    // اگر فایل وجود دارد، داده‌های آن را می‌خوانیم
    if (file.exists()) {
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QByteArray fileData = file.readAll();
            doc = QJsonDocument::fromJson(fileData);
            rootObject = doc.object();
            file.close();
        }
    }

    // فایل را برای نوشتن باز می‌کنیم
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Unable to open wallets file for writing.";
        return;
    }

    QJsonObject wallets = rootObject["wallets"].toObject();

    // بررسی ایمیل و سپس وجود کیف پول
    if (wallets.contains(email)) {
        QJsonArray walletsArray = wallets[email].toArray();

        // بررسی وجود کیف پول با نام داده‌شده
        for (const QJsonValue &walletValue : walletsArray) {
            QJsonObject walletObj = walletValue.toObject();
            if (walletObj["walletName"].toString() == walletName) {
                // ارسال پیام خطا اگر کیف پول با این نام موجود است
                QJsonObject response;
                response["type"] = "WalletExists";
                QJsonDocument responseDoc(response);
                clientSocket->write(responseDoc.toJson());
                file.close();
                return; // خروج از تابع اگر کیف پول موجود است
            }
        }

        // اگر کیف پول موجود نیست، آن را اضافه می‌کنیم
        QJsonObject newWallet;
        newWallet["walletName"] = walletName;
        newWallet["words"] = words;
        walletsArray.append(newWallet);
        wallets[email] = walletsArray;

    } else {
        // اگر ایمیل موجود نیست، یک آرایه جدید برای کیف پول ایجاد می‌کنیم
        QJsonObject newWallet;
        newWallet["walletName"] = walletName;
        newWallet["words"] = words;

        QJsonArray newWalletArray;
        newWalletArray.append(newWallet);

        wallets[email] = newWalletArray;
    }

    // افزودن یا به‌روزرسانی داده‌ها
    rootObject["wallets"] = wallets;
    doc.setObject(rootObject);

    // نوشتن داده‌های جدید به فایل
    file.resize(0);
    QTextStream out(&file);
    out << doc.toJson(QJsonDocument::Indented);
    file.close();
    QJsonObject response;
    response["type"] = "Wallet created successfully";
    QJsonDocument responseDoc(response);

    clientSocket->write(responseDoc.toJson());

    qDebug() << "Wallet data saved.";
}
void Server::handleRecoveryRequest(const QJsonObject &request, QTcpSocket *clientSocket)
{
    qDebug() << "11";

    QString email = request["email"].toString();
    QString walletName = request["walletName"].toString();
    QFile file("wallets.json");
    qDebug() << "22";
    qDebug() << "walletName";


    if (file.open(QIODevice::ReadOnly)) {
        QByteArray fileData = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(fileData);
        file.close();
        qDebug() << "33";

        if (doc.isObject()) {
            qDebug() << "44";

            QJsonObject wallets = doc.object()["wallets"].toObject();
            if (wallets.contains(email)) {
                QJsonArray walletsArray = wallets[email].toArray();
                for (const QJsonValue &walletValue : walletsArray) {
                    qDebug() << "55";

                    QJsonObject walletObj = walletValue.toObject();
                    qDebug() << "walletName1"<<walletObj["walletName"].toString();
                    qDebug() << "walletName2"<<walletName;

                    if (walletObj["walletName"].toString() == walletName) {
                        qDebug() << "66";

                        QJsonArray wordsArray = walletObj["words"].toArray();

                        QJsonArray words;
                        QJsonArray indexes;

                        for (const QJsonValue &wordValue : wordsArray) {
                            qDebug() << "77";

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
    qDebug() << "88";

    QJsonObject response;
    response["type"] = "recoverywallet";
    response["error"] = "Email or wallet name not found";
    QJsonDocument responseDoc(response);


    clientSocket->write(responseDoc.toJson());
}
void Server::checkWalletWords(const QJsonObject &request, QTcpSocket *clientSocket)
{
    QString email = request["email"].toString();
    QJsonArray wordsToCheck = request["words"].toArray(); // 6 کلمه‌ای که از کاربر می‌خواهیم

    QFile file("wallets.json");

    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Unable to open wallets file for reading.";
        return;
    }

    QByteArray fileData = file.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(fileData);
    file.close();

    if (!doc.isObject()) {
        qDebug() << "Failed to parse the wallets file.";
        return;
    }

    QJsonObject wallets = doc.object()["wallets"].toObject();
    if (wallets.contains(email)) {
        QJsonArray walletsArray = wallets[email].toArray();

        // جستجوی کیف پول‌ها برای کلمات
        for (const QJsonValue &walletValue : walletsArray) {
            QJsonObject walletObj = walletValue.toObject();
            QJsonArray wordsArray = walletObj["words"].toArray();

            bool matchFound = true;
            for (int i = 0; i < wordsToCheck.size(); ++i) {
                bool wordMatched = false;
                QString wordToCheck = wordsToCheck[i].toString();
                for (const QJsonValue &wordValue : wordsArray) {
                    QJsonObject wordObj = wordValue.toObject();
                    if (wordObj["word"].toString() == wordToCheck) {
                        wordMatched = true;
                        break;
                    }
                }
                if (!wordMatched) {
                    matchFound = false;
                    break;
                }
            }

            // اگر تمام کلمات با کلمات موجود در کیف پول مطابقت داشتند، اطلاعات کیف پول را ارسال می‌کنیم
            if (matchFound) {
                QJsonObject response;
                response["type"] = "WordsMatched";
                response["walletName"] = walletObj["walletName"].toString();
                QJsonDocument responseDoc(response);
                clientSocket->write(responseDoc.toJson());
                qDebug() << "Words matched. Wallet name:" << walletObj["walletName"].toString();
                return;
            }
        }
    }

    // اگر هیچ کیف پولی پیدا نشد که کلمات مطابقت داشته باشد
    QJsonObject response;
    response["type"] = "WordsNotMatched";
    response["error"] = "No matching words found in wallet.";
    QJsonDocument responseDoc(response);
    clientSocket->write(responseDoc.toJson());
    qDebug() << "No matching words found.";
}
