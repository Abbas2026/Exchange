#ifndef FORM_H
#define FORM_H

#include <QMainWindow>
#include "client.h"
#include <QTimer>
#include <QDebug>
#include <QRegularExpression>
#include <QMessageBox>
#include "signin.h"
#include "dashboard.h"
#include <QWidget>
#include <QLineEdit>
#include <QKeyEvent>
#include <QList>
#include "styles.h"
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
    void showEvent(QShowEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);

signals:

    void sendCredentials(const QString &email, const QString &password, const QString &name, const QString &phone);

public slots:

    void displayServerResponse(const QString &response);
    void closewindow();

private slots:

    void on_pushButton_clicked();
    void on_pushButton_gosignin_clicked();
    void on_exit_btn_clicked();

private:

    Ui::form *ui;
    Client *client;

};

#endif
