#include "CoinGeckoAPI.h"
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QDebug>

CoinGeckoAPI::CoinGeckoAPI(QObject *parent) : QObject(parent) {
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &CoinGeckoAPI::onResult);
}

void CoinGeckoAPI::getCoinDetails(const QStringList &coinIds) {
    for (const QString &coinId : coinIds) {
        QUrl url("https://api.coingecko.com/api/v3/coins/" + coinId);
        QNetworkRequest request(url);
        manager->get(request);
    }
}

void CoinGeckoAPI::getCurrentPrices(const QStringList &coinIds) {
    QString ids = coinIds.join(',');
    QUrl url("https://api.coingecko.com/api/v3/simple/price?ids=" + ids + "&vs_currencies=usd");
    qDebug() << "Request URL:" << url.toString(); // Log URL
    QNetworkRequest request(url);
    manager->get(request);
}


void CoinGeckoAPI::onResult(QNetworkReply *reply) {
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObject = jsonResponse.object();
        emit dataReceived(jsonObject);  // Emit signal with the received data
    } else {
        emit dataReceived(QJsonObject{{"Error", reply->errorString()}});
    }
    reply->deleteLater();
}
