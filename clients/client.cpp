#include "client.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "form.h"
#include "dashboard.h"
#include <QMessageBox>
#include "signin.h"
#include "mywallet.h"
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
void Client::readServerResponse() {
    static QByteArray buffer;
    static int expectedLength = 0;

    buffer.append(socket->readAll());

    while (buffer.size() > 0) {
        if (expectedLength == 0) {
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

            QString responseStr = QString::fromUtf8(message);
            QJsonDocument doc = QJsonDocument::fromJson(message);

            if (doc.isObject()) {
                QJsonObject response = doc.object();
                QString status = response["status"].toString();
                QString error = response["error"].toString();
                QString type = response["type"].toString();

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
                } else if (type == "walletData") {
                    QString name = response["name"].toString();
                    QString address = response["address"].toString();
                    QJsonObject currencies = response["currencies"].toObject();

                    qDebug() << "Wallet Name: " << name;
                    qDebug() << "Wallet Address: " << address;
                    if (currencies.contains("Ton")) {
                        int tonAmount = currencies["Ton"].toInt();
                        emit sendWalletToMywallet(name, address, tonAmount);
                        qDebug() << "Ton Amount: " << tonAmount;
                    } else {
                        qDebug() << "Ton currency not found.";
                    }



                    // for (auto currency = currencies.begin(); currency != currencies.end(); ++currency) {
                    //     QString currencyName = currency.key();
                    //     int amount = currency.value().toInt();
                    //     qDebug() << "Currency:" << currencyName << ", Amount:" << amount;
                    // }
                } else if (type == "end") {
                    qDebug() << "All wallet data received.";
                                        expectedLength = 0;
                    return;
                } else {
                    qDebug() << "doc error" << type;
                    emit receivedMessage("Error1: " + error);
                }
            } else {
                QString myString = "ready";
                if (responseStr == myString) {
                    qDebug() << "Registration successful!";
                    qDebug() << "Accessing global email:" << form::globalEmail;
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
                    qDebug() << "Error: " << responseStr;
                    emit receivedMessagetosign(responseStr);
                }
            }

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
        json["walletaddress"] = address;

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
        json["type"] = "Walletdata";
        json["email"] = "jpdnsjhhdsj@gmail.com";
        QJsonDocument doc(json);
        socket->write(doc.toJson());
    } else {
        qDebug() << "Socket is not connected.";
    }
}
