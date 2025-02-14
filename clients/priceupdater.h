#ifndef PRICEUPDATER_H
#define PRICEUPDATER_H

#include <QObject>
#include <QThread>
#include <QTimer>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class PriceUpdater : public QObject {
    Q_OBJECT

public:

    explicit PriceUpdater(QObject* parent = nullptr);
    ~PriceUpdater();
    static double bitcoinToTether;
    static double ethereumToTether;
    static double tronToTether;
    static double tetherToToman;
    static double balancetotether;
    static double TetherToTether;
    static double TomanToTether;

signals:

    void pricesUpdated();

private slots:

    void fetchPrices();
    void handleNetworkReply(QNetworkReply* reply);

private:

    QNetworkAccessManager* networkManager;
    QTimer* timer;
};

#endif
