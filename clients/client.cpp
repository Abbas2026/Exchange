#include "client.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "form.h"
#include "dashboard.h"
#include <QMessageBox>
#include "signin.h"
#include "mywallet.h"
#include "walldetails.h"
#include <QtConcurrent>
#include "priceupdater.h"
int Client::bb=0;
int Client::warname=0;
QString Client::password_creator="Abbas1383";
QString Client::user_level="0";
QString Client::globalEmail = "jpdnsjhhdsj@gmail.com";

Client::Client(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);
    if (!socket) {
        qDebug() << "Failed to create socket!";
    } else {
        qDebug() << "Socket created successfully!";
    }

    connect(socket, &QTcpSocket::readyRead, this, &Client::readServerResponse);
}

void Client::connectToServer(const QString &host, quint16 port)
{
    connect(socket, &QTcpSocket::connected, this, &Client::onConnected);
    socket->connectToHost(host, port);
}
void Client::onConnected()
{
    qDebug() << "Connected to the server";

}


void Client::sendMessage(const QString &message)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        socket->write(message.toUtf8());
    }
}


void Client::sendCredentials(const QString &email, const QString &password, const QString &name, const QString &phone)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["email"] = email;
        json["password"] = password;
        json["name"] = name;
        json["phone"] = phone;
        QJsonDocument doc(json);
        QByteArray data = doc.toJson();

        socket->write(data);
    }
}
void Client::sendservertologin(const QString &email, const QString &password)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["email"] = email;
        json["password"] = password;
        QJsonDocument doc(json);
        QByteArray data = doc.toJson();

        socket->write(data);
    }
}
void Client::readServerResponse() {
    static QByteArray buffer;
    static int expectedLength = 0;

    buffer.append(socket->readAll());

    while (!buffer.isEmpty()) {
        if (expectedLength == 0) {
            if (!buffer.contains("\r\n") && !buffer.trimmed().startsWith("{")) {
                QString responseStr = QString::fromUtf8(buffer.trimmed());
                buffer.clear();
                processSimpleResponse(responseStr);
                return;
            }


            if (buffer.trimmed().startsWith("{") && buffer.trimmed().endsWith("}")) {
                processResponse(buffer);
                buffer.clear();
                return;
            }

            int index = buffer.indexOf("\r\n");
            if (index == -1) {
                return;
            }

            QByteArray lengthBytes = buffer.left(index);
            expectedLength = lengthBytes.toInt();
            buffer.remove(0, index + 2);
        }


        if (buffer.size() >= expectedLength) {
            QByteArray message = buffer.left(expectedLength);
            buffer.remove(0, expectedLength);
            //qDebug() << "Structured message: " << message;
            processResponse(message);
            expectedLength = 0;
        } else {
            return;
        }
    }
}

void Client::requestUserData(const QString &email)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["email"] = email;
        QJsonDocument doc(json);
        QByteArray data = doc.toJson();
        socket->write(data);
    }
}
void Client::processResponse(const QByteArray& message) {
    QJsonDocument doc = QJsonDocument::fromJson(message);

    if (doc.isObject()) {
        QJsonObject response = doc.object();
        QString type = response["type"].toString();
        QString error = response["error"].toString();

        if (type == "RecoveryRequest") {
            QJsonArray wordsArray = response["words"].toArray();
            QJsonArray indexesArray = response["indexes"].toArray();
            QMap<int, QString> recoveryMap;

            for (int i = 0; i < wordsArray.size(); ++i) {
                int index = indexesArray[i].toInt();
                QString word = wordsArray[i].toString();
                recoveryMap.insert(index, word);
            }

            qDebug() << "Recovered words and indexes in map:";
            for (auto it = recoveryMap.begin(); it != recoveryMap.end(); ++it) {
                qDebug() << "Index:" << it.key() << "Word:" << it.value();
            }
        } else if (type == "userprofile") {
            QJsonObject userObject = response["user"].toObject();
            QString email = userObject["email"].toString();
            QString name = userObject["name"].toString();
            QString password = userObject["password"].toString();
            QString phone = userObject["phone"].toString();
            Client::user_level=userObject["userlevel"].toString();
            QString address = userObject["addresshome"].toString() ;
            QString firstname= userObject["fname"].toString();
            QString lastname= userObject["lname"].toString();
            qDebug()<<"1111"<<email<<name<<password<<phone<<user_level<<lastname;
            emit sendusertoprofile(email,name,password,phone,address,firstname,lastname);
        } else if (type == "saveuserprofile") {
            if(response["status"].toString()=="success"){
                dashboard *da = new dashboard();
                da->setAttribute(Qt::WA_DeleteOnClose);
                da->on_Profile_btn_clicked();
            }
            else if(response["status"].toString()=="defeat"){
                Client::warname=1;
                dashboard *da = new dashboard();
                da->setAttribute(Qt::WA_DeleteOnClose);
                da->on_Profile_btn_clicked();
            }

        }

        else if (type == "WalletExists") {
            QtConcurrent::run([=]() {
                emit receivedMessage("خطا: این نام کاربری قبلاً ثبت شده است. لطفاً نام دیگری انتخاب کنید.");
            });
            dashboard *da = new dashboard();
            da->setAttribute(Qt::WA_DeleteOnClose);
            da->on_Mywallets_btn_clicked();
            qDebug() << "Wallet name already exists for this email";
        } else if (type == "Wallet created successfully") {
            dashboard *da = new dashboard();
            da->setAttribute(Qt::WA_DeleteOnClose);
            da->on_Mywallets_btn_clicked();
            qDebug() << "Wallet created successfully";
        } else if (type == "WordsMatched") {
            qDebug() << "Words Matched";
        } else if (type == "walletInfo") {
            QString name = response["name"].toString();
            QString address = response["address"].toString();

            extern Client client;
            client.Walletassets(Client::globalEmail,name);
            emit sendWalletToMywallet(name, address, PriceUpdater::balancetotether);
        } else if (type == "walletCurrencies") {
            QString name = response["name"].toString();
            QString address = response["address"].toString();
            QJsonObject currencies = response["currencies"].toObject();
            for (const QString& key : currencies.keys()) {
                double amount = currencies[key].toDouble();
                double Currentvalue;
                if(key=="Bitcoin"){
                    Currentvalue=amount*PriceUpdater::bitcoinToTether;
                    PriceUpdater::balancetotether+=Currentvalue;
                    emit sendinventorytowalletdetails(key, amount,Currentvalue);
                }
                if(key=="Ethereum"){
                    Currentvalue=amount*PriceUpdater::ethereumToTether;
                    PriceUpdater::balancetotether+=Currentvalue;
                    emit sendinventorytowalletdetails(key, amount,Currentvalue);
                }
                if(key=="Tron"){
                    Currentvalue=amount*PriceUpdater::tronToTether;
                    PriceUpdater::balancetotether+=Currentvalue;
                    emit sendinventorytowalletdetails(key, amount,Currentvalue);
                    Client::bb=1;

                }
                if(key=="Toman"){
                    Currentvalue=amount/PriceUpdater::tetherToToman;
                    PriceUpdater::balancetotether+=Currentvalue;
                    emit sendinventorytowalletdetails(key, amount,Currentvalue);
                }
                if(key=="Tether"){
                    Currentvalue=amount;
                    PriceUpdater::balancetotether+=Currentvalue;
                    emit sendinventorytowalletdetails(key, amount,Currentvalue);
                }
                if(Client::bb==1){
                    emit sendWalletToMywallet(name, address, PriceUpdater::balancetotether);
                    Client::bb=0;
                    PriceUpdater::balancetotether=0;

                }

            }
        } else if(type=="deposit"){
            Client::warname=2;
            if(response["status"].toString()=="success"){
                dashboard *da = new dashboard();
                da->setAttribute(Qt::WA_DeleteOnClose);
                da->on_deposit_btn_clicked();

            }
            else if(response["status"].toString()=="walletnotfound"){
                Client::warname=1;
                dashboard *da = new dashboard();
                da->setAttribute(Qt::WA_DeleteOnClose);
                da->on_deposit_btn_clicked();
            }
        }

        else if (type == "end") {
            qDebug() << "All wallet data received.";
        } else {
            qDebug() << "Unknown type or error: " << error;
        }
    }
}
void Client::processSimpleResponse(const QString& responseStr) {
    if (responseStr == "ready") {
        qDebug() << "Registration successful!";
        emit registrationSuccessful();
    } else if (responseStr == "این نام کاربری قبلاً ثبت شده است") {
        emit receivedMessage("خطا: این نام کاربری قبلاً ثبت شده است. لطفاً نام دیگری انتخاب کنید.");
    } else if (responseStr == "Login successful") {
        qDebug() << "Login successful";
        emit triggerSigninSlot();
        emit loginSuccessful();
    } else if (responseStr == "Password forgotten confirmed") {
        qDebug() << "Password forgotten confirmed";
        emit triggerSigninSlot();
        emit loginSuccessful();
    } else {
        qDebug() << "Unknown response: " << responseStr;
        emit receivedMessagetosign(responseStr);
    }
}




void Client::sendForgotPasswordRequest(const QString &email, const QString &username)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "forgot_password";
        json["email"] = email;
        json["username"] = username;

        QJsonDocument doc(json);
        socket->write(doc.toJson());
    }
}
void Client::sendWallet(const QStringList &words, const QString &name , const QString &address)
{


    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "createwallet";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        json["walletName"] = name;
        json["address"] = address;

        QJsonArray jsonWords;
        for (int i = 0; i < words.size(); ++i) {
            QJsonObject wordObj;
            wordObj["index"] = i + 1;
            wordObj["word"] = words[i];
            jsonWords.append(wordObj);
        }

        json["words"] = jsonWords;

        QJsonDocument doc(json);
        socket->write(doc.toJson());
    }
}
void Client::sendRecoveryRequest()
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "RecoveryRequest";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        json["walletName"] = "name1";
        QJsonDocument doc(json);
        socket->write(doc.toJson());
        qDebug() << "Recovery request sent for email:" << json["email"] << "and wallet:" << json["walletName"];
    } else {
        qDebug() << "Socket is not connected.";
    }
}
void Client::walletsdata(const QString &email){
    if (socket->state() == QTcpSocket::ConnectedState) {

        QJsonObject json;
        json["type"] = "walletInfo";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        QJsonDocument doc(json);
        socket->write(doc.toJson());
    } else {
        qDebug() << "Socket is not connected.";
    }
}
void Client::Walletassets(const QString &email,const QString &namewallet){
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "walletCurrencies";
         json["walletName"] =namewallet ;
        json["email"] = "jpdnsjhhdsj@gmail.com";
        QJsonDocument doc(json);
        socket->write(doc.toJson());
    } else {
        qDebug() << "Socket is not connected.";
    }
}
void Client::getuserprofile(){
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "userprofile";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        QJsonDocument doc(json);
        socket->write(doc.toJson());
    } else {
        qDebug() << "Socket is not connected.";
    }
}
void Client::senduserprofiletoserver(const QString &name,const QString &address,const QString &phone,const QString &firstname,const QString &lastname,const QString &password,const QString &user_level){
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "userprofiletoserver";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        json["name"] =name ;
        json["addresshome"] = address;
        json["phone"] = phone;
        json["fname"] = firstname;
        json["lname"] = lastname;
        json["password"] = password;
        json["userlevel"] = user_level;
        QJsonDocument doc(json);
        socket->write(doc.toJson());
    } else {
        qDebug() << "Socket is not connected.";
    }
}
void Client::depositcheckserver(const QString &coin,const QString &address,const QString &amounth){
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "deposit";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        json["coin"] =coin ;
        json["address"] = address;
        json["amounth"] = amounth;
        QJsonDocument doc(json);
        socket->write(doc.toJson());
    } else {
        qDebug() << "Socket is not connected.";
    }
}
