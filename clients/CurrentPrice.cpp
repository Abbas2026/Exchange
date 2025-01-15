#include "CurrentPrice.h"
#include "ui_CurrentPrice.h"
#include <QJsonDocument>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->detailsButton, &QPushButton::clicked, this, &MainWindow::fetchCoinDetails);
    connect(ui->priceButton, &QPushButton::clicked, this, &MainWindow::fetchCurrentPrices);
    connect(&api, &CoinGeckoAPI::dataReceived, this, &MainWindow::updateResult);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::fetchCoinDetails() {
    QString input = ui->coinInput->text().trimmed();
    QStringList coinIds = input.split(",", Qt::SkipEmptyParts);
    if (!coinIds.isEmpty()) {
        api.getCoinDetails(coinIds);
    } else {
        ui->resultDisplay->setText("Please enter valid coin IDs.");
    }
}

void MainWindow::fetchCurrentPrices() {
    QString input = ui->coinInput->text().trimmed();
    QStringList coinIds = input.split(',', Qt::SkipEmptyParts);
    if (!coinIds.isEmpty()) {
        api.getCurrentPrices(coinIds);
    } else {
        ui->resultDisplay->setText("Please enter valid coin IDs.");
    }
}

// void MainWindow::updateResult(const QJsonObject &data) {
//     QString resultText;
//     for (auto key : data.keys()) {
//         QJsonObject coinData = data.value(key).toObject();

//         QString name = coinData.value("name").toString();
//         QString symbol = coinData.value("symbol").toString();
//         QString price = coinData.value("market_data").toObject().value("current_price").toObject().value("usd").toString();

//         resultText += QString("Name: %1\nSymbol: %2\nPrice (USD): %3\n\n")
//                           .arg(name)
//                           .arg(symbol)
//                           .arg(price.isEmpty() ? "N/A" : price);
//     }
//     ui->resultDisplay->setText(resultText);
// }
// void MainWindow::updateResult(const QJsonObject &data) {
//     QString result;

//     for (const QString &coinId : data.keys()) {
//         if (data[coinId].isObject()) {
//             QJsonObject coinData = data[coinId].toObject();
//             if (coinData.contains("usd")) {
//                 result += coinId + " Price (USD): " + QString::number(coinData["usd"].toDouble()) + "\n";
//             } else {
//                 result += coinId + " Price: N/A\n";
//             }
//         } else {
//             result += coinId + ": Invalid data format\n";
//         }
//     }

//     ui->resultDisplay->setText(result);
// }
// void MainWindow::updateResult(const QJsonObject &data) {
//     QString resultText;

//     // Check if the response contains market data (for coin details)
//     if (data.contains("market_data")) {
//         QJsonObject marketData = data["market_data"].toObject();

//         // Get 24h highest price
//         if (marketData.contains("high_24h")) {
//             double high24h = marketData["high_24h"].toObject().value("usd").toDouble(-1);
//             resultText += QString("24h High Price (USD): %1\n")
//                               .arg(high24h != -1 ? QString::number(high24h) : "N/A");
//         } else {
//             resultText += "24h High Price: N/A\n";
//         }

//         // Get 24h lowest price
//         if (marketData.contains("low_24h")) {
//             double low24h = marketData["low_24h"].toObject().value("usd").toDouble(-1);
//             resultText += QString("24h Low Price (USD): %1\n")
//                               .arg(low24h != -1 ? QString::number(low24h) : "N/A");
//         } else {
//             resultText += "24h Low Price: N/A\n";
//         }

//         // Get 24h volume
//         if (marketData.contains("total_volume")) {
//             double volume = marketData["total_volume"].toObject().value("usd").toDouble(-1);
//             resultText += QString("24h Volume (USD): %1\n")
//                               .arg(volume != -1 ? QString::number(volume) : "N/A");
//         } else {
//             resultText += "24h Volume: N/A\n";
//         }

//         // Get market dominance (if available)
//         if (data.contains("market_cap_rank")) {
//             int rank = data["market_cap_rank"].toInt(-1);
//             resultText += QString("Market Cap Rank: %1\n").arg(rank != -1 ? QString::number(rank) : "N/A");
//         } else {
//             resultText += "Market Cap Rank: N/A\n";
//         }

//         // Check if the response is for current price
//     } else if (data.contains("usd")) {
//         double currentPrice = data["usd"].toDouble(-1);
//         resultText += QString("Current Price (USD): %1\n")
//                           .arg(currentPrice != -1 ? QString::number(currentPrice) : "N/A");

//     } else {
//         resultText += "Invalid data format or missing information.\n";
//     }

//     // Update the result display
//     ui->resultDisplay->setText(resultText);
// }

void MainWindow::updateResult(const QJsonObject &data) {
    QString resultText;

    // Check if the response contains market data (for coin details)
    if (data.contains("market_data")) {
        QJsonObject marketData = data["market_data"].toObject();

        // Get 24h highest price
        if (marketData.contains("high_24h")) {
            double high24h = marketData["high_24h"].toObject().value("usd").toDouble(-1);
            resultText += QString("24h High Price (USD): %1\n")
                              .arg(high24h != -1 ? QString::number(high24h) : "N/A");
        } else {
            resultText += "24h High Price: N/A\n";
        }

        // Get 24h lowest price
        if (marketData.contains("low_24h")) {
            double low24h = marketData["low_24h"].toObject().value("usd").toDouble(-1);
            resultText += QString("24h Low Price (USD): %1\n")
                              .arg(low24h != -1 ? QString::number(low24h) : "N/A");
        } else {
            resultText += "24h Low Price: N/A\n";
        }

        // Get 24h volume
        if (marketData.contains("total_volume")) {
            double volume = marketData["total_volume"].toObject().value("usd").toDouble(-1);
            resultText += QString("24h Volume (USD): %1\n")
                              .arg(volume != -1 ? QString::number(volume) : "N/A");
        } else {
            resultText += "24h Volume: N/A\n";
        }

        // Market Cap Rank
        if (data.contains("market_cap_rank")) {
            int rank = data["market_cap_rank"].toInt(-1);
            resultText += QString("Market Cap Rank: %1\n").arg(rank != -1 ? QString::number(rank) : "N/A");
        } else {
            resultText += "Market Cap Rank: N/A\n";
        }

        // Handle Current Price Response
    } else if (!data.keys().isEmpty()) {
        for (const QString &coinId : data.keys()) {
            QJsonObject coinData = data[coinId].toObject();
            if (coinData.contains("usd")) {
                double currentPrice = coinData["usd"].toDouble(-1);
                resultText += QString("%1 Current Price (USD): %2\n")
                                  .arg(coinId)
                                  .arg(currentPrice != -1 ? QString::number(currentPrice) : "N/A");
            } else {
                resultText += QString("%1: Price data not found\n").arg(coinId);
            }
        }

    } else {
        resultText += "Invalid data format or missing information.\n";
    }

    // Update the result display
    ui->resultDisplay->setText(resultText);
}





void MainWindow::on_detailsButton_clicked()
{
    // Get coin IDs from the input field
    QString coinIdsInput = ui->coinInput->text(); // Assuming 'coinInput' is the QLineEdit for entering coin IDs

    // Check if the input is empty
    if (coinIdsInput.isEmpty()) {
        ui->resultDisplay->setText("Please enter coin IDs.");
        return;
    }

    // Split the input into a list of coin IDs
    QStringList coinIds = coinIdsInput.split(",", Qt::SkipEmptyParts);

    // Call the API function to fetch coin details
    api.getCoinDetails(coinIds);
}




void MainWindow::on_priceButton_clicked()
{
    // Get the text entered in the input field (comma-separated coin IDs)
    QString coinIdsInput = ui->coinInput->text().trimmed();

    // Check if the input is empty
    if (coinIdsInput.isEmpty()) {
        ui->resultDisplay->setText("Please enter valid coin IDs.");
        return;
    }

    // Split the input into a list of coin IDs
    QStringList coinIds = coinIdsInput.split(',', Qt::SkipEmptyParts);

    // Call the API to fetch the current prices
    api.getCurrentPrices(coinIds);
}

