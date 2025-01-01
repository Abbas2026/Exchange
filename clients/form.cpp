#include "form.h"
#include "ui_form.h"
#include "client.h"
#include <QDebug>
#include <QRegularExpression>
#include <QMessageBox>

QString form::globalEmail = "";
form::form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::form)
{
    ui->setupUi(this);


}

form::~form()
{
    delete ui;
}


bool isValidEmail(const QString &email)
{
    QRegularExpression regex(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z]{2,3}$)");
    return regex.match(email).hasMatch();
}




bool isValidPassword(const QString &password) {
    if (password.length() < 8) {
        return false;
    }
    QRegularExpression hasUpperCase("[A-Z]");
    QRegularExpression hasLowerCase("[a-z]");
    QRegularExpression hasDigit("\\d");

    return hasUpperCase.match(password).hasMatch() &&
           hasLowerCase.match(password).hasMatch() &&
           hasDigit.match(password).hasMatch();
}







void form::on_pushButton_clicked()
{
    QString email = ui->lineEditEmail->text();
    QString password = ui->lineEditPassword->text();
    QString name = ui->lineEditName->text();
    QString address = ui->lineEditAddress->text();
    QString phone = ui->lineEditPhone->text();
    if (!isValidEmail(email)) {
        QMessageBox::warning(this, "خطا", "ایمیل نامعتبر است. لطفاً یک ایمیل معتبر وارد کنید.");
        return;
    }

    if (!isValidPassword(password)) {
        QMessageBox::warning(this, "خطا", "رمز عبور نامعتبر است. رمز عبور باید حداقل 8 کاراکتر، شامل یک حرف بزرگ، یک حرف کوچک و یک عدد باشد.");
        return;
    }

    form::globalEmail = email;
    emit sendCredentials(email, password, name, address, phone);

}
void form::displayServerResponse(const QString &response)
{
    ui->textEdit->setText(response);
}


