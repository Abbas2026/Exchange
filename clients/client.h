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
    void sendForgotPasswordRequest(const QString &email, const QString &username);
    void sendWallet(const QStringList &words, const QString &name);
    void sendRecoveryRequest();



signals:
    void receivedMessage(const QString &message);
    void receivedMessagetodash(const QString &message);
    void receivedMessagetosign(const QString &message);

    void registrationSuccessful();
    void loginSuccessful();
    void triggerSigninSlot();

public slots:
    void sendMessage(const QString &message);
    void sendCredentials(const QString &email, const QString &password, const QString &name, const QString &address, const QString &phone);
    void requestUserData(const QString &email);
    void sendservertologin(const QString &email, const QString &password);


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
