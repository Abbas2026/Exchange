#ifndef EXCHANGE_H
#define EXCHANGE_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class Exchange : public QObject {
    Q_OBJECT

public:
    explicit Exchange(QObject *parent = nullptr);

    // تنظیم API
    void setAPIUrl(const QString &url);

    // user wallet
    void setWallet(const QMap<QString, double> &userWallet);

    // exchange request
    void performExchange(const QString &fromCurrency, const QString &toCurrency, double amount);
    //we need it in main.cpp
    double getAmountTemp() const;
signals:
    void exchangeCompleted(const QString &fromCurrency, const QString &toCurrency, double exchangedAmount);
    void errorOccurred(const QString &error);

private slots:
    void onExchangeRateReply(QNetworkReply *reply);

private:
    QString apiUrl;  // آدرس API
    QNetworkAccessManager networkManager;  // برای مدیریت درخواست‌های شبکه
    QMap<QString, double> wallet;  // user wallet
    QString fromCurrencyTemp;  // اsource coin
    QString toCurrencyTemp;  // dest coin
    double amountTemp;  // Amount to exchange
    const double fee = 2.0;  // fee
};

#endif // EXCHANGE_H
