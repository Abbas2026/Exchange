#ifndef TRANSFERCURRENCY_H
#define TRANSFERCURRENCY_H

#include <QObject> // Include QObject for inheritance
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>

class TransferCurrencyClient : public QObject { // Inherit from QObject
    Q_OBJECT // Enable signals and slots

public:
    TransferCurrencyClient(const QString &host, quint16 port);
    void transferCurrency(const QString &fromAddress, const QString &toEmail, const QString &toWalletName, const QMap<QString, double> &transferCurrencies);

private:
    QTcpSocket socket;
    QString host;
    quint16 port;

    void connectToServer();

private slots: // Declare slots
    void handleResponse();
};

#endif // TRANSFERCURRENCY_H

// #ifndef TRANSFERCURRENCY_H
// #define TRANSFERCURRENCY_H

// #include <QTcpSocket>
// #include <QJsonDocument>
// #include <QJsonObject>
// #include <QMap>

// class TransferCurrencyClient {
// public:
//     TransferCurrencyClient(const QString &host, quint16 port);
//     void transferCurrency(const QString &fromAddress, const QString &toEmail, const QString &toWalletName, const QMap<QString, double> &transferCurrencies);

// private:
//     QTcpSocket socket;
//     QString host;
//     quint16 port;

//     void connectToServer();
//     void handleResponse();
// };

// #endif // TRANSFERCURRENCY_H
