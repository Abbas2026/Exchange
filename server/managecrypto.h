#ifndef MANAGECRYPTO_H
#define MANAGECRYPTO_H

#include "QVector"
#include "crypto.h"
#include "QTimer"
#include "QNetworkAccessManager"

class manageCrypto: public QObject
{
    Q_OBJECT
public:
    manageCrypto();
    manageCrypto(QVector<Crypto>* coins);

public slots:
    void updatePrices();
    void fetchCoinDetails();

private slots:
    void handlePriceResponse(QNetworkReply *reply);
    void handleDetailsResponse(QNetworkReply *reply);

private:
    QVector<Crypto> *listOfCryptos;
    QVector<Crypto> detailsFetchQueue;
    QTimer *timer;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *detailsManager;
    QNetworkAccessManager *priceManager;
    bool coinDetailsRetrieved = false;
};

#endif // MANAGECRYPTO_H
