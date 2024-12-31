#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include "client.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class form;
}
QT_END_NAMESPACE
class Client;
class form : public QMainWindow
{
    Q_OBJECT

public:
    form(QWidget *parent = nullptr);

    static QString globalEmail;
    ~form();


private slots:
    void on_pushButton_clicked();


private:
    Ui::form *ui;
    Client *client;
};
#endif
