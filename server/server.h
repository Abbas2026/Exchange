#ifndef SERVER_H
#define SERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QDebug>

class Server : public QObject
{
    Q_OBJECT

public:
    explicit Server(QObject *parent = nullptr);
    void startServer(quint16 port);

private slots:
    void newConnection();
    void readClientMessage();
    void clientDisconnected();



private:
    QTcpServer *server;
    QList<QTcpSocket*> clientSockets;

};

#endif



