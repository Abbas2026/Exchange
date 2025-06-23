#include "currentprice.h"
#include "ui_currentprice.h"

currentprice::currentprice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::currentprice)
{
    ui->setupUi(this);
    applyStyles();
}

currentprice::~currentprice()
{
    delete ui;
}

void currentprice::applyStyles()
{
    ui->currentprice_btn->setStyleSheet(active_baseStyle);
    ui->Dashboard_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->deposit_btn->setStyleSheet(baseStyle);
    ui->withdrawal_btn->setStyleSheet(baseStyle);
    ui->exit_btn->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }

}

void currentprice::on_Dashboard_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void currentprice::on_Mywallets_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void currentprice::on_Profile_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Profile_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void currentprice::on_easyexchange_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this,"you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_easyexchange_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void currentprice::on_Authentication_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void currentprice::on_deposit_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this,"you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}
void currentprice::on_withdrawal_btn_clicked()
{
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}

void currentprice::on_exit_btn_clicked()
{
    this->close();
}

