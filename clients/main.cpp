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
    form *w=new form();

    client.connectToServer("127.0.0.1", 1234);
    extern Client client;
    Client::warname=10;
    QObject::connect(&client, &Client::receivedMessage, w, &form::displayServerResponse);
    w->showFullScreen();
    return a.exec();

}
