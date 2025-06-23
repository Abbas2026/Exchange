#include "deposit.h"
#include "ui_deposit.h"

deposit::deposit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deposit)
{
    ui->setupUi(this);
    applyStyles();
}

deposit::~deposit()
{
    delete ui;
}

void deposit::applyStyles()
{
    ui->deposit_btn->setStyleSheet(active_baseStyle);
    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->Dashboard_btn->setStyleSheet(baseStyle);
    ui->withdrawal_btn->setStyleSheet(baseStyle);
    ui->exit_btn->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }
    ui->deposit_text->setText("Cryptocurrency deposit");
    ui->lb_icon_toman->setPixmap(getTomanIcon(100, 100));
    ui->lb_icon_toman->setFixedSize(30, 30);
    ui->lb_icon_tether->setPixmap(getTetherIcon(100, 100));
    ui->lb_icon_tether->setFixedSize(30, 30);
    ui->lb_icon_bitcoin->setPixmap(getBitcoinIcon(100, 100));
    ui->lb_icon_bitcoin->setFixedSize(30, 30);
    ui->lb_icon_ethereum->setPixmap(getEthereumIcon(100, 100));
    ui->lb_icon_ethereum->setFixedSize(30, 30);
    ui->lb_icon_ton->setPixmap(getTonIcon(100, 100));
    ui->lb_icon_ton->setFixedSize(30, 30);
    ui->symbol_toman->setText("IRT");
    ui->symbol_tether->setText("USDT");
    ui->symbol_bitcoin->setText("BTC");
    ui->symbol_ethereum->setText("ETH");
    ui->symbol_ton->setText("TRX");

    QButtonGroup *group = new QButtonGroup();
    group->addButton(ui->radiobtc);
    group->addButton(ui->radioirt);
    group->addButton(ui->radioeth);
    group->addButton(ui->radiotrx);
    group->addButton(ui->radiousdt);

    ui->radiobtc->setStyleSheet(
        "QRadioButton::indicator {"
        "    border: 2px solid gray;"
        "    background-color: white;"
        "}"
        "QRadioButton::indicator:checked {"
        "    background-color: rgb(0, 170, 0);"
        "    border: 2px solid rgb(0, 170, 0);"
        "}"
        );
    ui->radioirt->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radioeth->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radiotrx->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radiousdt->setStyleSheet(ui->radiobtc->styleSheet());
}

void deposit::on_radiobtc_clicked()
{
    ui->coin_choice_name->setText("BTC");
}

void deposit::on_radioirt_clicked()
{
    ui->coin_choice_name->setText("IRT");
}

void deposit::on_radioeth_clicked()
{
    ui->coin_choice_name->setText("ETH");
}

void deposit::on_radiotrx_clicked()
{
    ui->coin_choice_name->setText("TRX");
}

void deposit::on_radiousdt_clicked()
{
    ui->coin_choice_name->setText("USDT");
}

void deposit::on_Dashboard_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}

void deposit::on_Mywallets_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void deposit::on_Profile_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Profile_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void deposit::on_save_wallet_btn_clicked()
{
    QString coin=ui->coin_choice_name->toPlainText();
    QString amounth=ui->coin_amounth_number->text();
    QString address=ui->wallet_address_name->text();
    QString password=ui->password_creator->text();

    if(coin.isEmpty()){
        styles::showWarning(this,"First, select the currency you want to deposit");
        return;
    }
    if(amounth.isEmpty()||address.isEmpty()||password.isEmpty()){
        styles::showWarning(this,"Please enter all values");
        return;
    }
    if(password!=Client::password_creator){
        styles::showWarning(this,"Password is wrong");
        return;
    }
    if (!amounth.toDouble()) {
        styles::showWarning(this,"The input is invalid! Please enter a number");
        return;
    }
    if(coin=="BTC"){
        coin="Bitcoin";
    }
    else if(coin=="IRT"){
        coin="Toman";
    }
    else if(coin=="ETH"){
        coin="Ethereum";
    }
    else if(coin=="TRX"){
        coin="Tron";
    }
    else if(coin=="USDT"){
        coin="Tether";
    }
    extern Client client;
    client.depositcheckserver(coin,address,amounth);
    QTimer::singleShot(1000, this, [this]() {this->hide();});
}

void deposit::on_withdrawal_btn_clicked()
{
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}

void deposit::on_Authentication_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void deposit::on_easyexchange_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_easyexchange_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void deposit::on_currentprice_btn_clicked()
{
    currentprice *window = new currentprice();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void deposit::setaddress(const QString &coinname){
    ui->wallet_address_name->setText(Client::walletactive);
    if(coinname=="Bitcoin"){
        on_radiobtc_clicked();
        ui->radiobtc->setChecked(true);
    }
    else if(coinname=="Toman"){
        on_radioirt_clicked();
        ui->radioirt->setChecked(true);
    }
    else if(coinname=="Ethereum"){
        on_radioeth_clicked();
        ui->radioeth->setChecked(true);
    }
    else if(coinname=="Tron"){
        on_radiotrx_clicked();
        ui->radiotrx->setChecked(true);
    }
    else if(coinname=="Tether"){
        on_radiousdt_clicked();
        ui->radiousdt->setChecked(true);
    }
}

void deposit::on_exit_btn_clicked()
{
    this->close();
}

