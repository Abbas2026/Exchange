
#include "form.h"
#include <QDebug>
#include <QApplication>
#include <QCoreApplication>
#include "client.h"
#include <QThread>
#include "signin.h"
#include "dashboard.h"
#include "priceupdater.h"
#include "CurrentPrice.h"
#include <qmessagebox.h>
Client client;
PriceUpdater* priceUpdater = nullptr;

void printPrices() {
    qDebug() << "Bitcoin to Tether:" << PriceUpdater::bitcoinToTether;
    qDebug() << "Ethereum to Tether:" << PriceUpdater::ethereumToTether;
    qDebug() << "Tron to Tether:" << PriceUpdater::tronToTether;
    qDebug() << "Tether to Toman:" << PriceUpdater::tetherToToman;
}


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    priceUpdater = new PriceUpdater();
    QObject::connect(priceUpdater, &PriceUpdater::pricesUpdated, []() {
        qDebug() << "Prices updated!";
        printPrices();
    });
    form w;
    client.connectToServer("127.0.0.1", 1234);
   extern Client client;

     Client::warname=10;

    QObject::connect(&w, &form::sendCredentials, &client, &Client::sendCredentials);
    QObject::connect(&client, &Client::receivedMessage, &w, &form::displayServerResponse);
    QObject::connect(&client, &Client::registrationSuccessful, &w, &form::onRegistrationSuccessful);
    QObject::connect(&client, &Client::loginSuccessful, &w, &form::loginSuccessful);
    QString style = "QMessageBox { background-color: #2E3440; border-radius: 10px; }"
                    "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
                    "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
                    "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
                    "QMessageBox QPushButton:pressed { background-color: #5E81AC; }";
    a.setStyleSheet(style);
    w.show();

    return a.exec();
}
