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
#include <crypto.h>
#include "managecrypto.h"

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

private:
    QTcpServer *server;
    QList<QTcpSocket*> clientSockets;
    bool isEmailRegistered(const QString &email);
    void saveCredentials(const QString &email, const QString &password, const QString &name, const QString &phone);
    QJsonObject loadUserData(const QString &email);
    void sendUserData(QTcpSocket *client, const QString &email);
    bool isValidCredentials(const QString &email, const QString &password);
    bool isNameRegistered(const QString &name);
    void saveWalletData(const QString &email, const QString &walletName,const QString &address, const QJsonArray &words,  QTcpSocket *clientSocket);
    void handleRecoveryRequest(const QJsonObject &request, QTcpSocket *clientSocket);
    void SaveWalletCurrencies(const QString &email, const QString &name, const QString &address);
    void sendWalletInfoToClient(const QString &email, QTcpSocket *clientSocket);
    void sendWalletCurrenciesToClient(const QString &email, const QString &walletName, QTcpSocket *clientSocket);
    void saveProfileToFile(const QString &email, const QString &password, const QString &name,
                                   const QString &phone, const QString &address, const QString &firstname,
                                   const QString &lastname, const QString &user_level, QTcpSocket *clientSocket);
    void getUserProfileByEmail(const QString &email, QTcpSocket *clientSocket);
    void saveCredentials2(const QString &email, const QString &password, const QString &name, const QString &phone);
    void checkdeposit(const QString &email,const QString &coin,const QString &addresswal,const QString &amounth, QTcpSocket *clientSocket);
    void checkWalletKeys(const QString &email, const QString &address, const QJsonArray &wordsArray, QTcpSocket *clientSocket);
    void checkdwithdrawal(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket);
    void transferCurrency(const QString &fromAddress, const QString &toEmail, const QString &toWalletName, const QMap<QString, double> &transferCurrencies, QTcpSocket *clientSocket);
    void checkKeysandwithdrawal(const QString &email, const QString &address, const QJsonArray &wordsArray,const QString &coin,const QString &amounth, QTcpSocket *clientSocket);
    void getsupply(const QString &email, const QString &addresswal, QTcpSocket *clientSocket);
    void buycoin(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket);
    void sellcoin(const QString &email, const QString &coin, const QString &addresswal, const QString &amounth, QTcpSocket *clientSocket);
    void exchangeCoins(const QString &email, const QString &coin1, const QString &coin2, const QString &addresswal, const QString &amount1, const QString &amount2, QTcpSocket *clientSocket);


    QVector<Crypto> *Coins;
    manageCrypto *cryptoManager;

};

#endif // SERVER_H
