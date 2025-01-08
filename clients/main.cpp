#include "form.h"
#include <QDebug>
#include <QApplication>
#include "client.h"
#include <QThread>
#include "signin.h"
#include "dashboard.h"
Client client;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    form w;

    dashboard m;
    client.connectToServer("127.0.0.1", 1234);
    QObject::connect(&w, &form::sendCredentials, &client, &Client::sendCredentials);
    QObject::connect(&client, &Client::receivedMessage, &w, &form::displayServerResponse);
    QObject::connect(&client, &Client::registrationSuccessful, &w, &form::onRegistrationSuccessful);
    QObject::connect(&client, &Client::loginSuccessful, &w, &form::loginSuccessful);



    m.show();
    return a.exec();
}

