#include "priceupdater.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QUrl>
#include <QNetworkRequest>
#include <QDebug>

double PriceUpdater::bitcoinToTether = 102000.0;
double PriceUpdater::ethereumToTether = 3288.0;
double PriceUpdater::tronToTether = 0.24;
double PriceUpdater::TetherToTether = 1.0;
double PriceUpdater::tetherToToman = 85000.0;
double PriceUpdater::TomanToTether=0.0000125;
double PriceUpdater::balancetotether=0.0;

PriceUpdater::PriceUpdater(QObject* parent)
    : QObject(parent),
    networkManager(new QNetworkAccessManager(this)),
    timer(new QTimer(this)) {

    connect(timer, &QTimer::timeout, this, &PriceUpdater::fetchPrices);
    connect(networkManager, &QNetworkAccessManager::finished, this, &PriceUpdater::handleNetworkReply);

    timer->start(10 * 60 * 1000);
    fetchPrices();
}

PriceUpdater::~PriceUpdater() {
    timer->stop();
}

void PriceUpdater::fetchPrices() {

    QNetworkRequest btcRequest(QUrl("https://api.coingecko.com/api/v3/simple/price?ids=bitcoin&vs_currencies=usd"));
    networkManager->get(btcRequest);


    QNetworkRequest ethRequest(QUrl("https://api.coingecko.com/api/v3/simple/price?ids=ethereum&vs_currencies=usd"));
    networkManager->get(ethRequest);

    QNetworkRequest tronRequest(QUrl("https://api.coingecko.com/api/v3/simple/price?ids=tron&vs_currencies=usd"));
    networkManager->get(tronRequest);
}

void PriceUpdater::handleNetworkReply(QNetworkReply* reply) {
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        if (jsonDoc.isObject()) {
            QJsonObject jsonObj = jsonDoc.object();

            QString url = reply->request().url().toString();

            if (url.contains("bitcoin")) {
                bitcoinToTether = jsonObj["bitcoin"].toObject()["usd"].toDouble();
            } else if (url.contains("ethereum")) {
                ethereumToTether = jsonObj["ethereum"].toObject()["usd"].toDouble();
            } else if (url.contains("tron")) {
                tronToTether = jsonObj["tron"].toObject()["usd"].toDouble();
            }

            emit pricesUpdated();
        }
    } else {
        qDebug() << "Error in network reply:" << reply->errorString();
    }
    reply->deleteLater();
}
