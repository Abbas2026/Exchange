#include "form.h"
#include "ui_form.h"
#include "client.h"
#include <QDebug>
#include <QRegularExpression>
#include <QMessageBox>
#include "signin.h"
#include "dashboard.h"
QString form::globalEmail = "jkdsjhdsj@gmail.com";
form::form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::form)
{
    ui->setupUi(this);
    client = new Client(this);
    connect(client, &Client::registrationSuccessful, this, &form::onRegistrationSuccessful);

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
    if(email.isEmpty()){ QMessageBox::warning(this, "خطا", "لطفاً ایمیل خود را وارد کنید.");return;}
    if(password.isEmpty()){ QMessageBox::warning(this, "خطا", "لطفاً رمز عبور خود را وارد کنید.");return;}
    if(name.isEmpty()){ QMessageBox::warning(this, "خطا", "لطفاً نام کاربری خود را وارد کنید.");return;}

    if (!isValidEmail(email)) {
        QMessageBox::warning(this, "warning", "ایمیل نامعتبر است. لطفاً یک ایمیل معتبر وارد کنید.");
        return;
    }

    if (!isValidPassword(password)) {
        QMessageBox::warning(this, "warning", "رمز عبور نامعتبر است. رمز عبور باید حداقل 8 کاراکتر، شامل یک حرف بزرگ، یک حرف کوچک و یک عدد باشد.");
        return;
    }

    form::globalEmail = email;
    emit sendCredentials(email, password, name, address, phone);
}

void form::displayServerResponse(const QString &response)
{
    if (response.contains("خطا")) {
        QMessageBox::warning(this, "خطا", response);
    }


}
void form::onRegistrationSuccessful() {
    qDebug() << "Registration was successful!";

    this->hide();

    dashboard *da = new dashboard();
    da->setEmail(form::globalEmail);
    da->setAttribute(Qt::WA_DeleteOnClose);
    connect(da, &dashboard::backToFormRequested, this, [this]() {
        this->show();
    });

    da->show();
}
void form::loginSuccessful() {
    this->hide();
    dashboard *da = new dashboard();
    da->setEmail(form::globalEmail);
    da->setAttribute(Qt::WA_DeleteOnClose);
    connect(da, &dashboard::backToFormRequested, this, [this]() {
        this->show();
    });

    extern Client client;
    connect(&client, &Client::receivedMessagetodash, da, &dashboard::ServerResponse);


    da->show();
}

void form::on_pushButton_gosignin_clicked()
{
    this->hide();

    signin *sign = new signin();
    sign->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;

    QObject::connect(sign, &signin::sendservertologin, &client, &Client::sendservertologin);
    connect(sign, &signin::backToFormRequested, this, [this]() {
        this->show();
    });
    extern Client client;
    connect(&client, &Client::receivedMessagetosign, sign, &signin::Responsetosignin);
    connect(&client, &Client::triggerSigninSlot, sign, &signin::closewindow);

    sign->show();
}

