#include "CurrentPrice.h"
#include "ui_CurrentPrice.h"
#include <QJsonDocument>
#include <QString>
#include "dashboard.h"
#include "client.h"
#include "deposit.h"
#include "withdrawal.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    applyStyles();
    connect(ui->detailsButton, &QPushButton::clicked, this, &MainWindow::fetchCoinDetails);
    connect(ui->priceButton, &QPushButton::clicked, this, &MainWindow::fetchCurrentPrices);
    connect(&api, &CoinGeckoAPI::dataReceived, this, &MainWindow::updateResult);
}

MainWindow::~MainWindow() {
    delete ui;
}
void MainWindow::applyStyles()
{
    const QString baseStyle = "QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                              "QPushButton:hover { color: #c97940; }";

    ui->currentprice_btn_2->setStyleSheet("QPushButton { color: #c97940; border: none; font: 28pt 'Bangers'; border: none; }"
                                     "QPushButton:hover { color: #c97940; }");
    ui->Dashboard_btn_2->setStyleSheet(baseStyle);
    ui->Profile_btn_2->setStyleSheet(baseStyle);
    ui->market_btn_2->setStyleSheet(baseStyle);
    ui->easyexchange_btn_2->setStyleSheet(baseStyle);
    ui->Transmission_btn_2->setStyleSheet(baseStyle);
    ui->Mywallets_btn_2->setStyleSheet(baseStyle);
    ui->Authentication_btn_2->setStyleSheet(baseStyle);
    ui->deposit_btn_2->setStyleSheet(baseStyle);
    ui->withdrawal_btn_2->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color:  #4fee93; border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
    }

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


void MainWindow::updateResult(const QJsonObject &data) {
    QString resultText;

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


void MainWindow::on_Dashboard_btn_2_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->show();

}


void MainWindow::on_Mywallets_btn_2_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();
}


void MainWindow::on_Profile_btn_2_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Profile_btn_clicked();
}


void MainWindow::on_easyexchange_btn_2_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color: rgb(170, 0, 0); border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
        QMessageBox msgBox(this);
        msgBox.setStyleSheet("QMessageBox { background-color: #2E3440; border-radius: 10px; }"
                             "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
                             "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
                             "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
                             "QMessageBox QPushButton:pressed { background-color: #5E81AC; }");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
        return;
    }
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_easyexchange_btn_clicked();
}


void MainWindow::on_Authentication_btn_2_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
}


void MainWindow::on_deposit_btn_2_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color: rgb(170, 0, 0); border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
        QMessageBox msgBox(this);
        msgBox.setStyleSheet("QMessageBox { background-color: #2E3440; border-radius: 10px; }"
                             "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
                             "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
                             "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
                             "QMessageBox QPushButton:pressed { background-color: #5E81AC; }");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
        return;
    }
    this->close();
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->show();
}


void MainWindow::on_withdrawal_btn_2_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color: rgb(170, 0, 0); border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
        QMessageBox msgBox(this);
        msgBox.setStyleSheet("QMessageBox { background-color: #2E3440; border-radius: 10px; }"
                             "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
                             "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
                             "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
                             "QMessageBox QPushButton:pressed { background-color: #5E81AC; }");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn_2->setStyleSheet("QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                                              "QPushButton:hover { color: #c97940; }");
        return;
    }
    this->close();
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->show();
}

