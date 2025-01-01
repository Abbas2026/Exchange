#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>

namespace Ui {
class signin;
}

class signin : public QWidget
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = nullptr);
    ~signin();
public slots :
    void Responsetosignin(const QString &response);

private slots:
    void on_pushButton_gosignin_clicked();
    void on_login_button_clicked();
    void on_forgot_password_clicked();
    void on_forgotbtnsend_clicked();

private:
    Ui::signin *ui;
signals:

    void sendservertologin(const QString &email, const QString &password);
    void backToFormRequested();

};

#endif
