#include "client.h"
#include <QJsonDocument>
#include <QJsonObject>
#include "form.h"
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


void Client::readServerResponse()
{
    QByteArray data = socket->readAll();
    QString responseStr = QString::fromUtf8(data);
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isObject()) {
        QJsonObject response = doc.object();
        QString status = response["status"].toString();

        if (status == "success") {
            QString email = response["email"].toString();
            QString name = response["name"].toString();
            QString address = response["address"].toString();
            QString phone = response["phone"].toString();

            m_email = email;
            m_name = name;
            m_address = address;
            m_phone = phone;
            qDebug() <<m_email;
            qDebug() <<m_name;
            qDebug() <<m_name;

            emit receivedMessage(QString("Email: %1\nName: %2\nAddress: %3\nPhone: %4")
                                     .arg(email)
                                     .arg(name)
                                     .arg(address)
                                     .arg(phone));
        } else {
            emit receivedMessage("Errorrr: " + status);
        }
    } else {
        QString myString = "ready" ;
        if (responseStr == myString) {
            qDebug() << "Registration successful!";
            qDebug() << "Accessing global email:" << form::globalEmail;
            emit registrationSuccessful();

        } else {
            emit receivedMessage(responseStr);
            qDebug() << "Error22: " << responseStr;
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
