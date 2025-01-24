#include "transfercurrency.h"
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>
#include <QTcpSocket>

// TransferCurrencyClient::TransferCurrencyClient(const QString &host, quint16 port) : host(host), port(port) {
//     connect(&socket, &QTcpSocket::connected, this, &TransferCurrencyClient::handleResponse);
//     connectToServer();
// }

// void TransferCurrencyClient::connectToServer() {
//     socket.connectToHost(host, port);
//     if (socket.waitForConnected(3000)) {
//         qDebug() << "Connected to server.";
//     } else {
//         qDebug() << "Failed to connect to server.";
//     }
// }
TransferCurrencyClient::TransferCurrencyClient(const QString &host, quint16 port) : host(host), port(port) {
    connect(&socket, &QTcpSocket::readyRead, this, &TransferCurrencyClient::handleResponse);
    connectToServer();
}

void TransferCurrencyClient::connectToServer() {
    socket.connectToHost(host, port);
    if (!socket.waitForConnected(3000)) {
        qDebug() << "Failed to connect to server:" << socket.errorString();
        // Emit a signal or handle the error appropriately
    } else {
        qDebug() << "Connected to server.";
    }
}

void TransferCurrencyClient::transferCurrency(const QString &fromAddress, const QString &toEmail, const QString &toWalletName, const QMap<QString, double> &transferCurrencies) {
    if (socket.state() == QAbstractSocket::ConnectedState) {
        QJsonObject request;
        request["type"] = "transferCurrency";
        request["fromAddress"] = fromAddress;
        request["toEmail"] = toEmail;
        request["toWalletName"] = toWalletName;

        QJsonObject currencies;
        for (auto it = transferCurrencies.begin(); it != transferCurrencies.end(); ++it) {
            currencies[it.key()] = it.value();
        }
        request["currencies"] = currencies;

        QJsonDocument doc(request);
        QByteArray data = doc.toJson();
        socket.write(data);
        if (socket.waitForBytesWritten(3000)) {
            qDebug() << "Transfer request sent successfully.";
        } else {
            qDebug() << "Failed to send transfer request.";
        }
    } else {
        qDebug() << "Socket is not connected.";
    }
}

void TransferCurrencyClient::handleResponse() {
    if (socket.waitForReadyRead(3000)) {
        QByteArray response = socket.readAll();
        qDebug() << "Response from server:" << response;
    } else {
        qDebug() << "No response from server.";
    }
}
