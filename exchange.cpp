// #include "exchange.h"
// #include <QJsonDocument>
// #include <QJsonObject>
// #include <QUrlQuery>
// #include <QDebug>

// Exchange::Exchange(QObject *parent) : QObject(parent) {}

// void Exchange::setAPIUrl(const QString &url) {
//     apiUrl = url;
// }

// void Exchange::setWallet(const QMap<QString, double> &userWallet) { // اینجا آدرس ولت یوزر رو میگیره
//     wallet = userWallet;
// }

// double Exchange::getAmountTemp() const {
//     return amountTemp;
// }


// void Exchange::performExchange(const QString &fromCurrency, const QString &toCurrency, double amount) {
//     // Map user-friendly currency names to API identifiers
//     QMap<QString, QString> currencyMapping = {
//         {"BTC", "bitcoin"},
//         {"ETH", "ethereum"},
//         {"TRX", "Tron"}
//     };

//     // Convert user input to API-compatible identifiers
//     QString apiFromCurrency = currencyMapping.value(fromCurrency.toUpper(), fromCurrency.toLower());
//     QString apiToCurrency = currencyMapping.value(toCurrency.toUpper(), toCurrency.toLower());

//     // Validate wallet balance
//     if (wallet.value(fromCurrency, 0.0) < amount) {
//         emit errorOccurred("Not enough balance in " + fromCurrency + " wallet.");
//         return;
//     }

//     // Validate API URL
//     if (apiUrl.isEmpty()) {
//         emit errorOccurred("API URL is not set.");
//         return;
//     }

//     fromCurrencyTemp = apiFromCurrency; // Use API identifier
//     toCurrencyTemp = apiToCurrency;    // Use API identifier

//     // Construct API request URL
//     QUrl url(apiUrl);
//     QUrlQuery query;
//     query.addQueryItem("ids", apiFromCurrency);
//     query.addQueryItem("vs_currencies", "usd");
//     url.setQuery(query);

//     QNetworkRequest request(url);
//     QNetworkReply *reply = networkManager.get(request);

//     // Handle API response
//     connect(reply, &QNetworkReply::finished, this, [=]() {
//         if (reply->error() != QNetworkReply::NoError) {
//             emit errorOccurred(reply->errorString());
//             reply->deleteLater();
//             return;
//         }

//         const QByteArray response = reply->readAll();
//         qDebug() << "API Response:" << QString::fromUtf8(response); // Debugging
//         QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
//         QJsonObject jsonObj = jsonDoc.object();

//         // Check if API response contains the rate for `fromCurrency`
//         if (!jsonObj.contains(apiFromCurrency)) {
//             emit errorOccurred("Currency " + fromCurrency + " not found in API response.");
//             reply->deleteLater();
//             return;
//         }

//         // Extract the USD rate for `fromCurrency`
//         double fromRate = jsonObj.value(apiFromCurrency).toObject().value("usd").toDouble();

//         if (fromRate <= 0) {
//             emit errorOccurred("Invalid rate received for " + fromCurrency);
//             reply->deleteLater();
//             return;
//         }

//         // Calculate the fee in terms of `fromCurrency`
//         double feeInFromCurrency = 2.0 / fromRate; // 2 USD fee
//         if (amount <= feeInFromCurrency) {
//             emit errorOccurred("Amount must be greater than the fee equivalent in " + fromCurrency);
//             reply->deleteLater();
//             return;
//         }

//         amountTemp = amount - feeInFromCurrency;

//         // Ensure wallet has sufficient balance after fee deduction
//         if (wallet.value(fromCurrency, 0.0) < amountTemp + feeInFromCurrency) {
//             emit errorOccurred("Not enough balance in " + fromCurrency + " wallet after fee deduction.");
//             reply->deleteLater();
//             return;
//         }

//         // Fetch rates for both currencies
//         QUrl conversionUrl(apiUrl);
//         QUrlQuery conversionQuery;
//         conversionQuery.addQueryItem("ids", apiFromCurrency + "," + apiToCurrency);
//         conversionQuery.addQueryItem("vs_currencies", "usd");
//         conversionUrl.setQuery(conversionQuery);

//         QNetworkRequest conversionRequest(conversionUrl);
//         QNetworkReply *conversionReply = networkManager.get(conversionRequest);
//         connect(conversionReply, &QNetworkReply::finished, this, [=]() { onExchangeRateReply(conversionReply); });

//         reply->deleteLater(); // Clean up the rate request
//     });
// }


// void Exchange::onExchangeRateReply(QNetworkReply *reply) {
//     if (reply->error() != QNetworkReply::NoError) {
//         emit errorOccurred(reply->errorString());
//         reply->deleteLater();
//         return;
//     }

//     const QByteArray response = reply->readAll();
//     QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
//     QJsonObject jsonObj = jsonDoc.object();

//     double fromRate = jsonObj.value(fromCurrencyTemp).toObject().value("usd").toDouble();
//     double toRate = jsonObj.value(toCurrencyTemp).toObject().value("usd").toDouble();

//     if (fromRate <= 0 || toRate <= 0) {
//         emit errorOccurred("Invalid rates received.");
//         reply->deleteLater();
//         return;
//     }

//     double amountInUSD = amountTemp * fromRate;
//     double convertedAmount = amountInUSD / toRate;

//     // updating wallet here
//     wallet[fromCurrencyTemp] -= amountTemp + fee;
//     wallet[toCurrencyTemp] += convertedAmount;

//     emit exchangeCompleted(fromCurrencyTemp, toCurrencyTemp, convertedAmount);
//     reply->deleteLater();
// }

