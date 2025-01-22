#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "mywallet.h"
#include "client.h"
#include "profile.h"
#include "deposit.h"
dashboard::dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &dashboard::on_backButton_clicked);
    applyStyles();
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_backButton_clicked()
{
    emit backToFormRequested();
    this->close();
}
void dashboard::ServerResponse(const QString &response)
{
    if (response.contains("خطا")) {
        QMessageBox::warning(this, "warning", response);
    } else {
        ui->textEdit->setText(response);
    }
}
void dashboard::applyStyles()
{
    const QString baseStyle = "QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                              "QPushButton:hover { color: #c97940; }";
    ui->Dashboard_btn->setStyleSheet("QPushButton { color: #c97940; border: none; font: 28pt 'Bangers'; border: none; }"
                                     "QPushButton:hover { color: #c97940; }");
    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->deposit_btn->setStyleSheet(baseStyle);
    ui->withdrawal_btn->setStyleSheet(baseStyle);
}

void dashboard::on_Mywallets_btn_clicked()
{
    this->close();
    mywallet *wallets = new mywallet();
    wallets->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    QObject::connect(&client, &Client::sendWalletToMywallet, wallets, &mywallet::addWalletToTable);
    client.walletsdata(Client::globalEmail);
    wallets->show();
}


void dashboard::on_Profile_btn_clicked()
{
    this->close();
    extern Client client;
    client.getuserprofile();
    profile *prof= new profile();
    connect(&client, &Client::sendusertoprofile, prof, &profile::receiveduserprofile);
    prof->setAttribute(Qt::WA_DeleteOnClose);
    prof->show();
    if(Client::warname==1){
     prof->on_edit_information_btn_clicked();
        QMessageBox::warning(this, "warning", "این نام کاربری قبلاً ثبت شده است. لطفاً نام دیگری انتخاب کنید.");
            Client::warname=0;
    }
}


void dashboard::on_market_btn_clicked()
{

}


void dashboard::on_easyexchange_btn_clicked()
{

}


void dashboard::on_Transmission_btn_clicked()
{

}


void dashboard::on_currentprice_btn_clicked()
{

}


void dashboard::on_Authentication_btn_clicked()
{

}


void dashboard::on_deposit_btn_clicked()
{
    this->close();
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->show();
    if(Client::warname==1){
        QMessageBox msgBox(this);
        msgBox.setStyleSheet("QMessageBox { background-color: #2E3440; border-radius: 10px; }"
                             "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
                             "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
                             "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
                             "QMessageBox QPushButton:pressed { background-color: #5E81AC; }");

        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("Warning");
        msgBox.setText("No wallet found with this address");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        Client::warname=0;

    }
    else if(Client::warname==2){
        QMessageBox msgBox(this);
        msgBox.setStyleSheet("QMessageBox { background-color: #2E3440; border-radius: 10px; }"
                             "QMessageBox QLabel {background-color: #2E3440; color: white; font-size: 14px; }"
                             "QMessageBox QPushButton { background-color: #88C0D0; color: black; font-weight: bold; border: 1px solid #5E81AC; border-radius: 5px; padding: 5px 10px; }"
                             "QMessageBox QPushButton:hover { background-color: #81A1C1; }"
                             "QMessageBox QPushButton:pressed { background-color: #5E81AC; }");

        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("successfull");
        msgBox.setText("The deposit was made successfully");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        Client::warname=0;

    }
}


void dashboard::on_withdrawal_btn_clicked()
{

}

