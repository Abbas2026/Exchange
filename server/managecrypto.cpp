#include "managecrypto.h"
#include "QNetworkReply"
#include "QJsonDocument"
#include "QJsonObject"
#include "QJsonArray"

manageCrypto::manageCrypto(){}

manageCrypto::manageCrypto(QVector<Crypto> *coins):
    listOfCryptos(coins){
    listOfCryptos->push_back(Crypto("","","",0,"bitcoin"));
    listOfCryptos->push_back(Crypto("","","",0,"ethereum"));
    listOfCryptos->push_back(Crypto("","","",0,"tether"));
    listOfCryptos->push_back(Crypto("","","",0,"solana"));
    listOfCryptos->push_back(Crypto("","","",0,"tron"));


    detailsManager = new QNetworkAccessManager(this);
    priceManager = new QNetworkAccessManager(this);

    connect(detailsManager, &QNetworkAccessManager::finished,
            this, &manageCrypto::handleDetailsResponse);
    connect(priceManager, &QNetworkAccessManager::finished,
            this, &manageCrypto::handlePriceResponse);

    timer = new QTimer(this);
    timer->setInterval(10 * 60 * 1000); // 10 minutes
    connect(timer, &QTimer::timeout, this, &manageCrypto::updatePrices);

    // Fetch coin details
    fetchCoinDetails();

    timer->start();
}

void manageCrypto::fetchCoinDetails()
{
    if (coinDetailsRetrieved) return;
    detailsFetchQueue = *listOfCryptos;

    for (const auto &coin : detailsFetchQueue) {
        QString coinId = coin.getId();
        if (coinId.isEmpty()) continue;

        QUrl url("https://api.coingecko.com/api/v3/coins/" + coinId);
        QNetworkRequest request(url);
        detailsManager->get(request);
    }
}

void manageCrypto::handleDetailsResponse(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray response = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(response);

        // Verify if JSON is valid
        if (!jsonDoc.isObject()) {
            qDebug() << "Invalid JSON response for coin details";
            return;
        }

        QJsonObject jsonObject = jsonDoc.object();
        QString coinId = jsonObject["id"].toString();

        // Update coin details
        for (auto &coin : *listOfCryptos) {
            if (coin.getId() == coinId) {
                coin.setName(jsonObject["name"].toString());
                coin.setSymbol(jsonObject["symbol"].toString());

                QJsonObject descObj = jsonObject["description"].toObject();
                coin.setDes(descObj["en"].toString());
                break;
            }
        }

        detailsFetchQueue.removeOne(Crypto("","","",0,coinId));
    }
    else
    {
        qDebug() << "Details fetch error:" << reply->errorString();
    }

    // Check if all details have been fetched
    if (detailsFetchQueue.isEmpty()) {
        coinDetailsRetrieved = true;
        updatePrices();
    }
}

void manageCrypto::updatePrices()
{
    QString coinIds;
    for (const auto &coin : *listOfCryptos) {
        if (!coin.getId().isEmpty()) {
            coinIds += (coinIds.isEmpty() ? "" : ",") + coin.getId();
        }
    }

    if (coinIds.isEmpty()) return;

    QUrl url("https://api.coingecko.com/api/v3/simple/price?ids=" +
             coinIds + "&vs_currencies=usd");
    QNetworkRequest request(url);
    priceManager->get(request);
}

void manageCrypto::handlePriceResponse(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray response = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(response);

        // Verify if JSON is valid
        if (!jsonDoc.isObject()) {
            qDebug() << "Invalid JSON response for prices";
            return;
        }

        QJsonObject jsonObject = jsonDoc.object();

        for (auto &coin : *listOfCryptos) {
            QString coinId = coin.getId();
            if (jsonObject.contains(coinId)) {
                QJsonObject priceObj = jsonObject[coinId].toObject();
                int price = priceObj["usd"].toInt();
                coin.setPrice(price);
            }
        }

        for(const auto &coin : *listOfCryptos)
        {
            qDebug() << coin.getName() << coin.getSymbol() << coin.getPrice();
        }
    }
    else
    {
        qDebug() << "Price fetch error:" << reply->errorString();
    }
}
