#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "form.h"
class Client : public QObject
{
    Q_OBJECT

public:
    explicit Client(QObject *parent = nullptr);
    void connectToServer(const QString &host, quint16 port);
    void onConnected();

signals:
    void receivedMessage(const QString &message);

public slots:
    void sendMessage(const QString &message);
    void sendCredentials(const QString &email, const QString &password, const QString &name, const QString &address, const QString &phone);


private slots:
    void readServerResponse();

private:
    QString m_email;
    QString m_name;
    QString m_address;
    QString m_phone;

    QTcpSocket *socket;
};

#endif
