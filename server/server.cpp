#include "server.h"


Server::Server(QObject *parent) : QObject(parent)
{
    server = new QTcpServer(this);

    connect(server, &QTcpServer::newConnection, this, &Server::newConnection);
}

void Server::startServer(quint16 port)
{
    if (server->listen(QHostAddress::Any, port)) {
        qDebug() << "Server started on port" << port;
    } else {
        qDebug() << "Failed to start server:" << server->errorString();
    }
}

void Server::newConnection()
{
    QTcpSocket *newClient = server->nextPendingConnection();
    clientSockets.append(newClient);

    qDebug() << "New client connected. Total clients:" << clientSockets.size();

    connect(newClient, &QTcpSocket::readyRead, this, &Server::readClientMessage);
    connect(newClient, &QTcpSocket::disconnected, this, &Server::clientDisconnected);
}

void Server::readClientMessage()
{
    QTcpSocket *senderClient = qobject_cast<QTcpSocket*>(sender());
    if (!senderClient)
        return;

    QByteArray data = senderClient->readAll();



}

void Server::clientDisconnected()
{
    QTcpSocket *disconnectedClient = qobject_cast<QTcpSocket*>(sender());
    if (!disconnectedClient)
        return;

    clientSockets.removeAll(disconnectedClient);
    disconnectedClient->deleteLater();

    qDebug() << "Client disconnected. Remaining clients:" << clientSockets.size();
}







