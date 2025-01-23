#include "register.h"
#include "ui_register.h"
#include "QMessageBox"
Register::Register(QString username,QTcpSocket* socket,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    this->username = username;
    this->socket = socket;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowModality(Qt::ApplicationModal);
    ui->lineEdit_name->setPlaceholderText("Full Name");
    ui->lineEdit_address->setPlaceholderText("Address");
    ui->lineEdit_phone->setPlaceholderText("Phone Number");
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_2_clicked()
{
    close();
}


void Register::on_pushButton_clicked()
{
    Write("-RG " + username + " " + ui->lineEdit_name->text() + " " + ui->lineEdit_phone->text() + " " + ui->lineEdit_address->text());
}
QString Register :: Read(QByteArray Message_from_serverr){
    QString Message = QString(Message_from_serverr);
    if(Message == "21"){
            QMessageBox::information(this, "Register", "Regster Seccssful");
    }
    else if(Message == "22"){
        QMessageBox::information(this, "Register", "username dose not exist");
    }

    else if(Message == "23"){
        QMessageBox::information(this, "Register", "data base has some problems");

    }

    else if(Message == "24"){
        QMessageBox::information(this, "Register", "name or phone or address are not valid");

    }
    close();
    return Message;
}
int Register :: Write(QString Text){
    if(socket->write(Text.toUtf8())==-1){
        return -1;
    }
    socket->flush();
    socket->waitForBytesWritten(3000);
    return 1;
}
