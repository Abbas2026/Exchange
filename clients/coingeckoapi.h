#ifndef COINGECKOAPI_H
#define COINGECKOAPI_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonObject>

class CoinGeckoAPI : public QObject {
    Q_OBJECT

public:

    explicit CoinGeckoAPI(QObject *parent = nullptr);
    void getCoinDetails(const QStringList &coinIds);
    void getCurrentPrices(const QStringList &coinIds);

signals:

    void dataReceived(const QJsonObject &data);

private slots:

    void onResult(QNetworkReply *reply);

private:

    QNetworkAccessManager *manager;
};

#endif
