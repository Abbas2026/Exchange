#include "dashboard.h"
#include "ui_dashboard.h"

dashboard::dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/image/dashboard.png"));
    this->setWindowIcon(QIcon());
    applyStyles();
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_backButton_clicked()
{
     extern Client client;
    Client::warname=10;
    form *frm = new form();
    frm->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void dashboard::ServerResponse(const QString &response)
{
    if (response.contains("error")) {
       styles::showWarning(this,response);
    }
    else {
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
    ui->exit_btn->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }
}

void dashboard::on_Mywallets_btn_clicked()
{
    mywallet *wallets = new mywallet();
    wallets->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    QObject::connect(&client, &Client::sendWalletToMywallet, wallets, &mywallet::addWalletToTable);
    Client::number_wallets=0;
    client.walletsdata(Client::globalEmail);
    wallets->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void dashboard::on_Profile_btn_clicked()
{
    Client::x=1;
    extern Client client;
    client.getuserprofile();
    profile *prof= new profile();
    connect(&client, &Client::sendusertoprofile, prof, &profile::receiveduserprofile);
    prof->setAttribute(Qt::WA_DeleteOnClose);
    prof->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
    if(Client::warname==1){
    prof->on_edit_information_btn_clicked();
    styles::showWarning(this, "This username is already registered. Please choose another name");
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
        styles::showWarning(this, "you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }

    exchange *exch = new exchange();
    exch->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    QObject::connect(&client, &Client::sendsupplytootherfile, exch, &exchange::setsupply);
    exch->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void dashboard::on_Transmission_btn_clicked()
{

}

void dashboard::on_currentprice_btn_clicked()
{
    currentprice *window = new currentprice();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void dashboard::on_Authentication_btn_clicked()
{
    extern Client client;
    client.getuserprofile();
    profile *prof= new profile();
    connect(&client, &Client::sendusertoprofile, prof, &profile::receiveduserprofile);
    prof->setAttribute(Qt::WA_DeleteOnClose);
    prof->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
    prof->on_edit_information_btn_clicked();
}

void dashboard::on_deposit_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this,"you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    this->close();
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->showFullScreen();

    if(Client::warname==1){
        styles::showWarning(this,"No wallet found with this address");
        Client::warname=0;
    }
    else if(Client::warname==2){
        styles::showsuccessfull(this,"The deposit was made successfully");
        Client::warname=0;
    }
}

void dashboard::on_withdrawal_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this,"you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    this->close();
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->showFullScreen();

        if(Client::warname==1){
        styles::showWarning(this,"Words do not match!");
        Client::warname=0;
        }
        else if(Client::warname==2){
            styles::showWarning(this,"Wallet not found");
            Client::warname=0;
        }
        else if(Client::warname==3){
            styles::showWarning(this,"There is not enough currency");
            Client::warname=0;
        }
        else if(Client::warname==4){
            styles::showsuccessfull(this,"The withdrawal was successful");
            Client::warname=0;
        }
}

void dashboard::on_backButton_2_clicked()
{
    guid *gu = new guid();
    gu->setAttribute(Qt::WA_DeleteOnClose);
    gu->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void dashboard::on_exit_btn_clicked()
{
    this->close();
}

