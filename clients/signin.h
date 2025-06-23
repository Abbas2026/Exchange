#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>
#include <QTimer>
#include "form.h"
#include <QDebug>
#include "client.h"
#include <QMessageBox>
#include "styles.h"

namespace Ui {
class signin;
}

class signin : public QWidget
{
    Q_OBJECT

public:

    explicit signin(QWidget *parent = nullptr);
    ~signin();
    void showEvent(QShowEvent *event);


public slots :

    void Responsetosignin(const QString &response);
    void closewindow();

private slots:

    void on_pushButton_gosignin_clicked();
    void on_login_button_clicked();
    void on_forgot_password_clicked();
    void on_forgotbtnsend_clicked();
    void on_exit_btn_clicked();

private:

    Ui::signin *ui;

signals:

    void sendservertologin(const QString &email, const QString &password);
};

#endif
