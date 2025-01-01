#include "form.h"
#include <QDebug>
#include <QApplication>
#include "client.h"
#include <QThread>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    form w;
    Client client;
    client.connectToServer("127.0.0.1", 1234);
    QObject::connect(&w, &form::sendCredentials, &client, &Client::sendCredentials);
    QObject::connect(&client, &Client::receivedMessage, &w, &form::displayServerResponse);

    w.show();
    return a.exec();
}

