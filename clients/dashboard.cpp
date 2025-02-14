#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "mywallet.h"
#include "client.h"
#include "profile.h"
#include "deposit.h"
#include "withdrawal.h"
#include "exchange.h"
#include "CurrentPrice.h"
#include "guid.h"
#include "styles.h"
dashboard::dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon());

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
    this->hide();
}
void dashboard::ServerResponse(const QString &response)
{
    if (response.contains("error")) {
        QMessageBox::warning(this, "warning", response);
    } else {
        ui->textEdit->setText(response);
    }
}
void dashboard::applyStyles()
{
    ui->Dashboard_btn->setStyleSheet(active_baseStyle);
    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->deposit_btn->setStyleSheet(baseStyle);
    ui->withdrawal_btn->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }
}

void dashboard::on_Mywallets_btn_clicked()
{
    this->close();
    mywallet *wallets = new mywallet();
    wallets->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    QObject::connect(&client, &Client::sendWalletToMywallet, wallets, &mywallet::addWalletToTable);
    Client::number_wallets=0;
    client.walletsdata(Client::globalEmail);
    wallets->show();
}

void dashboard::on_Profile_btn_clicked()
{
    Client::x=1;

    this->close();
    extern Client client;
    client.getuserprofile();
    profile *prof= new profile();
    connect(&client, &Client::sendusertoprofile, prof, &profile::receiveduserprofile);
    prof->setAttribute(Qt::WA_DeleteOnClose);
    prof->show();
    if(Client::warname==1){
     prof->on_edit_information_btn_clicked();
        QMessageBox::warning(this, "warning", "This username is already registered. Please choose another name");
            Client::warname=0;
    }
}

void dashboard::on_market_btn_clicked()
{

}

void dashboard::on_easyexchange_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
        msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }

    this->close();
    exchange *exch = new exchange();
    exch->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    QObject::connect(&client, &Client::sendsupplytootherfile, exch, &exchange::setsupply);

    exch->show();

}

void dashboard::on_Transmission_btn_clicked()
{

}

void dashboard::on_currentprice_btn_clicked()
{
       this->close();
    MainWindow *window = new MainWindow();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->show();
}


void dashboard::on_Authentication_btn_clicked()
{
    this->close();
    extern Client client;
    client.getuserprofile();
    profile *prof= new profile();
    connect(&client, &Client::sendusertoprofile, prof, &profile::receiveduserprofile);
    prof->setAttribute(Qt::WA_DeleteOnClose);
    prof->show();
    prof->on_edit_information_btn_clicked();
}

void dashboard::on_deposit_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
        msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    this->close();
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->show();
    if(Client::warname==1){
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
        msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        msgBox.setWindowTitle("Warning");
        msgBox.setText("No wallet found with this address");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        Client::warname=0;

    }
    else if(Client::warname==2){
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        QPixmap checkmarkIcon("./checkmark.png");
        msgBox.setIconPixmap(checkmarkIcon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        msgBox.setWindowTitle("successfull");
        msgBox.setText("The deposit was made successfully");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        Client::warname=0;

    }
}

void dashboard::on_withdrawal_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
        msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }

    this->close();
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->show();

        if(Client::warname==1){
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
        msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        msgBox.setWindowTitle("Warning");
        msgBox.setText("Words do not match!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        Client::warname=0;
        }
        else if(Client::warname==2){
            QMessageBox msgBox(this);
            msgBox.setStyleSheet(QMSSGEBOX_STYLE);
            QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
            msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            msgBox.setWindowTitle("Warning");
            msgBox.setText("Wallet not found");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
            Client::warname=0;
        }
        else if(Client::warname==3){
            QMessageBox msgBox(this);
            msgBox.setStyleSheet(QMSSGEBOX_STYLE);
            QPixmap Unsuccessfulicon("./Unsuccessful-icon.png");
            msgBox.setIconPixmap(Unsuccessfulicon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            msgBox.setWindowTitle("Warning");
            msgBox.setText("There is not enough currency");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
            Client::warname=0;
        }
        else if(Client::warname==4){
            QMessageBox msgBox(this);
            msgBox.setStyleSheet(QMSSGEBOX_STYLE);

            QPixmap checkmarkIcon("./checkmark.png");
            msgBox.setIconPixmap(checkmarkIcon.scaled(48, 48, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            msgBox.setWindowTitle("successful");
            msgBox.setText("The withdrawal was successful");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.exec();
            Client::warname=0;
        }

}

void dashboard::on_backButton_2_clicked()
{
    this->close();
    guid *gu = new guid();
    gu->setAttribute(Qt::WA_DeleteOnClose);
    gu->show();
}

