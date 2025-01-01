#ifndef SERVER_H
#define SERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QDebug>
#include <QFile>
#include <QStringList>
#include <QJsonObject>
#include <QJsonArray>
class Server : public QObject
{
    Q_OBJECT

public:
    explicit Server(QObject *parent = nullptr);
    void startServer(quint16 port);

private slots:
    void newConnection();
    void readClientMessage();
    void clientDisconnected();

public slots:
    void getUserDataByEmail(const QString &email, QTcpSocket *client);

private:
    QTcpServer *server;
    QList<QTcpSocket*> clientSockets;

    bool isEmailRegistered(const QString &email);
    void saveCredentials(const QString &email, const QString &password, const QString &name, const QString &address, const QString &phone);
    QJsonObject loadUserData(const QString &email);
    void sendUserData(QTcpSocket *client, const QString &email);
};

#endif // SERVER_H

