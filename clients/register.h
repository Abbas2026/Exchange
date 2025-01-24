#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QTcpSocket>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QString username,QTcpSocket* socket,QWidget *parent = nullptr);
    ~Register();
    int Write(QString Text);
public slots:
    QString Read(QByteArray Message_from_serverr);

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Register *ui;
    QTcpSocket* socket;
    QString username;
};

#endif // REGISTER_H
