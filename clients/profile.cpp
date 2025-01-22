#include "profile.h"
#include "ui_profile.h"
#include <QSvgRenderer>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include "client.h"
#include <QDebug>
#include "dashboard.h"
#include "mywallet.h"
#include <QMessageBox>
#include <QRegularExpression>
#include "deposit.h"
#include <QRandomGenerator>
#include <QPixmap>
#include <QPainter>
profile::profile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::profile)
{
    ui->setupUi(this);
    applyStyles();
}

profile::~profile()
{
    delete ui;
}
bool profile::isValidPassword(const QString &password) {
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
void profile::applyStyles()
{
    QString svgCode =R"(
<svg fill="#9f7ef1" version="1.1" id="Capa_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 45.532 45.532" xml:space="preserve"><g id="SVGRepo_bgCarrier" stroke-width="0"></g><g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g><g id="SVGRepo_iconCarrier"> <g> <path d="M22.766,0.001C10.194,0.001,0,10.193,0,22.766s10.193,22.765,22.766,22.765c12.574,0,22.766-10.192,22.766-22.765 S35.34,0.001,22.766,0.001z M22.766,6.808c4.16,0,7.531,3.372,7.531,7.53c0,4.159-3.371,7.53-7.531,7.53 c-4.158,0-7.529-3.371-7.529-7.53C15.237,10.18,18.608,6.808,22.766,6.808z M22.761,39.579c-4.149,0-7.949-1.511-10.88-4.012 c-0.714-0.609-1.126-1.502-1.126-2.439c0-4.217,3.413-7.592,7.631-7.592h8.762c4.219,0,7.619,3.375,7.619,7.592 c0,0.938-0.41,1.829-1.125,2.438C30.712,38.068,26.911,39.579,22.761,39.579z"></path> </g> </g></svg>)";
    QSvgRenderer renderer(svgCode.toUtf8());
    QPixmap pixmap(100, 100);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    renderer.render(&painter);
    ui->profile_icon->setPixmap(pixmap);
    ui->profile_icon->setFixedSize(60, 60);

    const QString baseStyle = "QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                              "QPushButton:hover { color: #c97940; }";
    ui->Profile_btn->setStyleSheet("QPushButton { color: #c97940; border: none; font: 28pt 'Bangers'; border: none; }"
                                     "QPushButton:hover { color: #c97940; }");
    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Dashboard_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->deposit_btn->setStyleSheet(baseStyle);
    ui->withdrawal_btn->setStyleSheet(baseStyle);


    ui->textEdit_userlevel->setText("User Level :");
    ui->textEdit_email->setText("Email :");
    ui->textEdit_username->setText("Username :");
    ui->textEdit_numberphone->setText("Number Phone :");
    ui->textEdit_address->setText("Address :");
    ui->textEdit_firstname->setText("First Name :");
    ui->textEdit_lastname->setText("Last Name :");
    ui->textEdit_password->setText("Password :");
    ui->textEdit_Transactionfees->setText("Transaction Fees :");
    ui->textEdit_Transactionfees_value->setText("Base");
    ui->widget_3->hide();
    ui->paswidget->hide();

    ui->textEdit_userlevel_4->setText("User Level :");
    ui->textEdit_email_4->setText("Email :");
    ui->textEdit_username_4->setText("Username :");
    ui->textEdit_numberphone_4->setText("Number Phone :");
    ui->textEdit_address_4->setText("Address :");
    ui->textEdit_firstname_4->setText("First Name :");
    ui->textEdit_lastname_4->setText("Last Name :");
    ui->textEdit_password_4->setText("Password :");
    ui->textEdit_Transactionfees_4->setText("Transaction Fees :");
    ui->textEdit_Transactionfees_value_4->setText("Base");
    ui->textEdit_captcha->setText("captcha :");
    ui->textEdit_userlevel_value_4->setText("level  " + Client::user_level);
    ui->textEdit_email_value_4->setText( Client::globalEmail);


    ui->textEdit_userlevel_value->setText("level  " + Client::user_level);
    ui->textEdit_email_value->setText( Client::globalEmail);
    ui->textEdit_numberphone_value->setText("empty");
    ui->textEdit_address_value->setText("empty");
    ui->textEdit_firstname_value->setText("empty");
    ui->textEdit_lastname_value->setText("empty");
    ui->textEdit_30->setText("Change Password");
}
void profile::receiveduserprofile(const QString email,const QString name,const QString password,const QString phone,const QString address,const QString firstname,const QString lastname){
    ui->textEdit_userlevel_value->setText("level  " + Client::user_level);
    ui->textEdit_email_value->setText(email);
    ui->textEdit_username_value->setText(name);
    ui->textEdit_numberphone_value->setText(phone);
    ui->textEdit_password_value->setText(password);
    ui->textEdit_profname->setText(name);
    if(!address.isEmpty()){
        ui->textEdit_address_value->setText(address);
    }
    if(!firstname.isEmpty()){
        ui->textEdit_firstname_value->setText(firstname);
    }
    if(!lastname.isEmpty()){
        ui->textEdit_lastname_value->setText(lastname);
    }
    ui->textEdit_userlevel_value_4->setText("level  " + Client::user_level);
    ui->lineEdit_username_4->setText(name);
    ui->lineEdit_numberphone_4->setText(phone);
    ui->lineEdit_password_4->setText(password);
    ui->lineEdit_address_4->setText(address);
    ui->lineEdit_firstname_4->setText(firstname);
    ui->lineEdit_lastname_4->setText(lastname);
    if( Client::user_level=="0"){
        ui->text_authentication->setText("in order to access all features you must first complete all your information.");
    }
     captchaText = generateCaptcha(5);
    ui->captchaLabel->setPixmap(generateCaptchaImage(captchaText));


}


void profile::on_Dashboard_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->show();
}


void profile::on_Mywallets_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();

}


void profile::on_edit_information_btn_clicked()
{
    ui->widget_3->show();
    ui->widget->close();
}


void profile::on_recordchange_btn_clicked()
{
    QString userCaptchaInput = ui->inputField->text();
    if (userCaptchaInput.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter the captcha.");
        return;
    }
    if (!verifyCaptcha(userCaptchaInput, captchaText)) {
        QMessageBox::warning(this, "Error", "Captcha Incorrect! Try Again.");
        return;
    }
     QString name = ui->lineEdit_username_4->text();
     QString address = ui->lineEdit_address_4->text();
     QString phone = ui->lineEdit_numberphone_4->text();
     QString firstname = ui->lineEdit_firstname_4->text();
     QString lastname = ui->lineEdit_lastname_4->text();
     QString password = ui->lineEdit_password_4->text();
     if (!name.isEmpty() && !address.isEmpty() && !phone.isEmpty() && !firstname.isEmpty() && !lastname.isEmpty() && !password.isEmpty()) {
         Client::user_level="1";
     }

     extern Client client;
     client.senduserprofiletoserver(name,address,phone,firstname,lastname,password,Client::user_level);
     this->hide();


}
void profile::on_change_pas_clicked()
{
    ui->widget_3->hide();
    ui->paswidget->show();

}
void profile::on_backtoeditprof_btn_clicked()
{
    ui->widget_3->show();
    ui->paswidget->close();

}
void profile::on_backt_btn_clicked()
{
    ui->widget->show();
    ui->widget_3->close();
}

void profile::on_confirm_pas_btn_clicked()
{
    QString password = ui->pas_lineEdit->text();
    QString repeat_password = ui->reppas_lineEdit->text();
    if (!isValidPassword(password)) {
        QMessageBox::warning(this, "warning", "رمز عبور نامعتبر است. رمز عبور باید حداقل 8 کاراکتر، شامل یک حرف بزرگ، یک حرف کوچک و یک عدد باشد.");
        return;
    }
    if(password!=repeat_password){
        QMessageBox::warning(this, "warning", "the password and its repetition are not the same.");return;
    }
    QString name = ui->lineEdit_username_4->text();
    QString address = ui->lineEdit_address_4->text();
    QString phone = ui->lineEdit_numberphone_4->text();
    QString firstname = ui->lineEdit_firstname_4->text();
    QString lastname = ui->lineEdit_lastname_4->text();
    if (!name.isEmpty() && !address.isEmpty() && !phone.isEmpty() && !firstname.isEmpty() && !lastname.isEmpty() && !password.isEmpty()) {
        Client::user_level="1";
    }
    extern Client client;
    client.senduserprofiletoserver(name,address,phone,firstname,lastname,password,Client::user_level);
    this->hide();


}


void profile::on_backt_btn_2_clicked()
{
    ui->widget->show();
    ui->widget_3->close();
}


void profile::on_deposit_btn_clicked()
{
    this->close();
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->show();
}

QString profile::generateCaptcha(int length = 5) {
    const QString chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    QString captcha;
    for (int i = 0; i < length; ++i) {
        int index = QRandomGenerator::global()->bounded(chars.length());
        captcha.append(chars.at(index));
    }
    return captcha;
}
QPixmap profile::generateCaptchaImage(const QString &captchaText) {
    int width = 250;
    int height = 80;
    QPixmap pixmap(width, height);
    pixmap.fill(Qt::white);
    QPainter painter(&pixmap);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    QFont font("Times New Roman", 25, QFont::Bold);
    painter.setFont(font);
    int xOffset = 20;
    int yOffset = height / 2;
    for (int i = 0; i < captchaText.length(); ++i) {
        QColor color(QRandomGenerator::global()->bounded(255),
                     QRandomGenerator::global()->bounded(255),
                     QRandomGenerator::global()->bounded(255));
        painter.setPen(color);
        int angle = QRandomGenerator::global()->bounded(-30, 30);
        painter.save();
        painter.translate(xOffset + i * 40, yOffset + QRandomGenerator::global()->bounded(-10, 10));  // موقعیت یابی بهتر
        painter.rotate(angle);
        painter.drawText(0, 0, QString(captchaText[i]));
        painter.restore();
    }
    for (int i = 0; i < 10; ++i) {
        painter.setPen(QPen(QColor(QRandomGenerator::global()->bounded(255),
                                   QRandomGenerator::global()->bounded(255),
                                   QRandomGenerator::global()->bounded(255)), 2));
        int x1 = QRandomGenerator::global()->bounded(width);
        int y1 = QRandomGenerator::global()->bounded(height);
        int x2 = QRandomGenerator::global()->bounded(width);
        int y2 = QRandomGenerator::global()->bounded(height);
        painter.drawLine(x1, y1, x2, y2);
    }
    for (int i = 0; i < 5; ++i) {
        painter.setPen(QPen(QColor(QRandomGenerator::global()->bounded(255),
                                   QRandomGenerator::global()->bounded(255),
                                   QRandomGenerator::global()->bounded(255)), 1));
        int x = QRandomGenerator::global()->bounded(width);
        int y = QRandomGenerator::global()->bounded(height);
        painter.drawEllipse(x, y, 3, 3);
    }
    return pixmap;
}
bool profile::verifyCaptcha(const QString &input, const QString &correctCaptcha) {
    return input == correctCaptcha;
}
