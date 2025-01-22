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

    ~form();        

signals:
    void sendCredentials(const QString &email, const QString &password, const QString &name, const QString &phone);

public slots:
    void displayServerResponse(const QString &response);
    void onRegistrationSuccessful();
    void loginSuccessful();
private slots:
    void on_pushButton_clicked();



    void on_pushButton_gosignin_clicked();

private:
    Ui::form *ui;
    Client *client;
};
#endif
