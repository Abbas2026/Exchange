#include "client.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "form.h"
#include "dashboard.h"
#include <QMessageBox>
#include "signin.h"
Client::Client(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket(this);
    if (!socket) {
        qDebug() << "Failed to create socket!";
    } else {
        qDebug() << "Socket created successfully!";
    }
    m_email = "";
    m_name = "";
    m_address = "";
    m_phone = "";
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


void Client::sendCredentials(const QString &email, const QString &password, const QString &name, const QString &address, const QString &phone)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["email"] = email;
        json["password"] = password;
        json["name"] = name;
        json["address"] = address;
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

void Client::readServerResponse()
{
    QByteArray data = socket->readAll();
    QString responseStr = QString::fromUtf8(data);
    QJsonDocument doc = QJsonDocument::fromJson(data);

    if (doc.isObject()) {
        QJsonObject response = doc.object();
        QString status = response["status"].toString();
        QString type = response["type"].toString();
        QString error = response["error"].toString();
        QString WordsMatched= response["type"].toString();

        if (type == "RecoveryRequest") {
            QJsonArray wordsArray = response["words"].toArray();
            QJsonArray indexesArray = response["indexes"].toArray();

            QMap<int, QString> recoveryMap;

            for (int i = 0; i < wordsArray.size(); ++i) {
                int index = indexesArray[i].toInt();
                QString word = wordsArray[i].toString();
                recoveryMap.insert(index, word);  // استفاده از insert برای ذخیره‌سازی
            }

            qDebug() << "Recovered words and indexes in map:";
            for (auto it = recoveryMap.begin(); it != recoveryMap.end(); ++it) {
                qDebug() << "Index:" << it.key() << "Word:" << it.value();
            }
        }

        if (status == "success") {
            QString email = response["email"].toString();
            QString name = response["name"].toString();
            QString address = response["address"].toString();
            QString phone = response["phone"].toString();

            m_email = email;
            m_name = name;
            m_address = address;
            m_phone = phone;


            emit receivedMessage(QString("Email: %1\nName: %2\nAddress: %3\nPhone: %4")
                                     .arg(email)
                                     .arg(name)
                                     .arg(address)
                                     .arg(phone));
        }
        else if(type=="WalletExists"){
            qDebug() << "Wallet name already exists for this email";

        }
         else if(type=="Wallet created successfully"){
            qDebug() << "Wallet created successfully";
        }
        else if(type=="RecoveryRequest"){
            qDebug()<<"Recovery Request successful ";
        }
        else if ( WordsMatched== "WordsMatched") {
            qDebug()<< "Words Matched";
            return;
        }
         else {
             qDebug() <<"doc error"<< type;
             emit receivedMessage("Error: " + error);
         }
    }

    else {
        QString myString = "ready" ;
        if (responseStr == myString) {
            qDebug() << "Registration successful!";
            qDebug() << "Accessing global email:" << form::globalEmail;
            emit registrationSuccessful();

        }
        else if (responseStr == "این نام کاربری قبلاً ثبت شده است") {
            emit receivedMessage("خطا: این نام کاربری قبلاً ثبت شده است. لطفاً نام دیگری انتخاب کنید.");
        }

        else if(responseStr == "Login successful"){
            qDebug() << "Login successful";
            emit triggerSigninSlot();
            emit loginSuccessful();
        }

        else if(responseStr =="Password forgotten confirmed"){
            qDebug() << "Password forgotten confirmed";
            emit triggerSigninSlot();
            emit loginSuccessful();
        }
        else {

            qDebug() << "Error: " << responseStr;

            emit receivedMessagetosign(responseStr);
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
void Client::sendWallet(const QStringList &words, const QString &name)
{
    if (socket->state() == QTcpSocket::ConnectedState) {
        QJsonObject json;
        json["type"] = "createwallet";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        json["walletName"] = name;

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
        json["email"] = "jpdsjhhdsj@gmail.com";
        json["walletName"] = "name1";
        QJsonDocument doc(json);
        socket->write(doc.toJson());
        qDebug() << "Recovery request sent for email:" << json["email"] << "and wallet:" << json["walletName"];
    } else {
        qDebug() << "Socket is not connected.";
    }
}
