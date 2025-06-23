#include "exchange.h"
#include "ui_exchange.h"


exchange::exchange(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::exchange)
{
    ui->setupUi(this);
    applyStyles();
}

exchange::~exchange()
{
    delete ui;
}

void exchange::applyStyles()
{
    ui->easyexchange_btn->setStyleSheet(active_baseStyle);
    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->deposit_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->Dashboard_btn->setStyleSheet(baseStyle);
    ui->withdrawal_btn->setStyleSheet(baseStyle);
    ui->exit_btn->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }

    ui->change_text->setText("exchange currency");
    ui->exchange_text_2->setText("exchange currency");

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

    ui->symbol_toman_2->setText("IRT");
    ui->symbol_tether_2->setText("USDT");
    ui->symbol_bitcoin_2->setText("BTC");
    ui->symbol_ethereum_3->setText("ETH");
    ui->symbol_ton_3->setText("TRX");

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
        "    background-color: #BF360C;"
        "    border: 2px solid #BF360C;"
        "}"
        );
    ui->radioirt->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radioeth->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radiotrx->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radiousdt->setStyleSheet(ui->radiobtc->styleSheet());

    ui->lb_icon_toman_2->setPixmap(getTomanIcon(100, 100));
    ui->lb_icon_toman_2->setFixedSize(30, 30);

    ui->lb_icon_tether_2->setPixmap(getTetherIcon(100, 100));
    ui->lb_icon_tether_2->setFixedSize(30, 30);

    ui->lb_icon_bitcoin_2->setPixmap(getBitcoinIcon(100, 100));
    ui->lb_icon_bitcoin_2->setFixedSize(30, 30);

    ui->lb_icon_ethereum_2->setPixmap(getEthereumIcon(100, 100));
    ui->lb_icon_ethereum_2->setFixedSize(30, 30);

    ui->lb_icon_ton_2->setPixmap(getTonIcon(100, 100));
    ui->lb_icon_ton_2->setFixedSize(30, 30);

    ui->symbol_toman->setText("IRT");
    ui->symbol_tether->setText("USDT");
    ui->symbol_bitcoin->setText("BTC");
    ui->symbol_ethereum->setText("ETH");
    ui->symbol_ton->setText("TRX");

    QButtonGroup *group2 = new QButtonGroup();
    group2->addButton(ui->radiobtc_2);
    group2->addButton(ui->radioirt_2);
    group2->addButton(ui->radioeth_3);
    group2->addButton(ui->radiotrx_3);
    group2->addButton(ui->radiousdt_2);

    ui->radiobtc_2->setStyleSheet(
        "QRadioButton::indicator {"
        "    border: 2px solid gray;"
        "    background-color: white;"
        "}"
        "QRadioButton::indicator:checked {"
        "    background-color: rgb(0, 170, 0);"
        "    border: 2px solid rgb(0, 170, 0);"
        "}"
        );
    ui->radioirt_2->setStyleSheet(ui->radiobtc_2->styleSheet());
    ui->radioeth_3->setStyleSheet(ui->radiobtc_2->styleSheet());
    ui->radiotrx_3->setStyleSheet(ui->radiobtc_2->styleSheet());
    ui->radiousdt_2->setStyleSheet(ui->radiobtc_2->styleSheet());

    connect(group, &QButtonGroup::buttonClicked, [=](QAbstractButton *button) {
        ui->radiobtc_2->setEnabled(true);
        ui->radioirt_2->setEnabled(true);
        ui->radioeth_3->setEnabled(true);
        ui->radiotrx_3->setEnabled(true);
        ui->radiousdt_2->setEnabled(true);

        if (button == ui->radiobtc) {
            ui->radiobtc_2->setEnabled(false);
        } else if (button == ui->radioirt) {
            ui->radioirt_2->setEnabled(false);
        } else if (button == ui->radioeth) {
            ui->radioeth_3->setEnabled(false);
        } else if (button == ui->radiotrx) {
            ui->radiotrx_3->setEnabled(false);
        } else if (button == ui->radiousdt) {
            ui->radiousdt_2->setEnabled(false);
        }
    });

    connect(group2, &QButtonGroup::buttonClicked, [=](QAbstractButton *button) {
        ui->radiobtc->setEnabled(true);
        ui->radioirt->setEnabled(true);
        ui->radioeth->setEnabled(true);
        ui->radiotrx->setEnabled(true);
        ui->radiousdt->setEnabled(true);

        if (button == ui->radiobtc_2) {
            ui->radiobtc->setEnabled(false);
        } else if (button == ui->radioirt_2) {
            ui->radioirt->setEnabled(false);
        } else if (button == ui->radioeth_3) {
            ui->radioeth->setEnabled(false);
        } else if (button == ui->radiotrx_3) {
            ui->radiotrx->setEnabled(false);
        } else if (button == ui->radiousdt_2) {
            ui->radiousdt->setEnabled(false);
        }
    });
    ui->widget_4->hide();
}

void exchange::on_radiobtc_clicked()
{
    ui->coin_from->setText("BTC");
}

void exchange::on_radioirt_clicked()
{
    ui->coin_from->setText("IRT");
}

void exchange::on_radioeth_clicked()
{
    ui->coin_from->setText("ETH");
}

void exchange::on_radiotrx_clicked()
{
    ui->coin_from->setText("TRX");
}

void exchange::on_radiousdt_clicked()
{
    ui->coin_from->setText("USDT");
}

void exchange::on_radiobtc_2_clicked()
{
    ui->coin_to->setText("BTC");
}

void exchange::on_radioirt_2_clicked()
{
    ui->coin_to->setText("IRT");
}

void exchange::on_radioeth_3_clicked()
{
    ui->coin_to->setText("ETH");
}

void exchange::on_radiotrx_3_clicked()
{
    ui->coin_to->setText("TRX");
}

void exchange::on_radiousdt_2_clicked()
{
    ui->coin_to->setText("USDT");
}

void exchange::on_Dashboard_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void exchange::on_Mywallets_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void exchange::on_Profile_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Profile_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void exchange::on_Authentication_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void exchange::on_deposit_btn_clicked()
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

void exchange::on_withdrawal_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this,"you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void exchange::on_exchange_btn_clicked()
{
    QString coinfrom=ui->coin_from->toPlainText();
    QString cointo=ui->coin_to->toPlainText();
    QString address=ui->wallet_address_name->text();

    if(coinfrom.isEmpty() || cointo.isEmpty()){
        styles::showWarning(this,"First select the currency you want to exchange");
        return;
    }
    if(address.isEmpty()){
        styles::showWarning(this,"Please enter all values");
        return;
    }
    if(coinfrom=="BTC"){
        coinfrom="Bitcoin";
    }
    else if(coinfrom=="IRT"){
        coinfrom="Toman";
    }
    else if(coinfrom=="ETH"){
        coinfrom="Ethereum";
    }
    else if(coinfrom=="TRX"){
        coinfrom="Tron";
    }
    else if(coinfrom=="USDT"){
        coinfrom="Tether";
    }
    if(cointo=="BTC"){
        cointo="Bitcoin";
    }
    else if(cointo=="IRT"){
        cointo="Toman";
    }
    else if(cointo=="ETH"){
        cointo="Ethereum";
    }
    else if(cointo=="TRX"){
        cointo="Tron";
    }
    else if(cointo=="USDT"){
        cointo="Tether";
    }
    ui->coin_from_2->setText(coinfrom);
    ui->coin_to_2->setText(cointo);
    ui->wallet_address_name_2->setText(address);

    extern Client client;
    client.getsupplyfromserver(address);
}

void exchange::setsupply(const QMap<QString, double>& walletCurrencies){
    ui->widget_4->show();
    QString coinfrom=ui->coin_from_2->toPlainText();
    if(coinfrom=="BTC"){
        coinfrom="Bitcoin";
    }
    else if(coinfrom=="IRT"){
        coinfrom="Toman";
    }
    else if(coinfrom=="ETH"){
        coinfrom="Ethereum";
    }
    else if(coinfrom=="TRX"){
        coinfrom="Tron";
    }
    else if(coinfrom=="USDT"){
        coinfrom="Tether";
    }
    for (auto it = walletCurrencies.begin(); it != walletCurrencies.end(); ++it) {
        if(it.key()==coinfrom){
            ui->supply->setText(QString::number(it.value()));
            qDebug()<<"11";
        }
        qDebug() << "Currency:" << it.key() << "Amount:" << it.value();
    }
}

void exchange::on_send_exchange_clicked()
{
    QString amounth=ui->coin_amounth_number->text();

    if (!amounth.toDouble()) {
        styles::showWarning(this,"The input is invalid! Please enter a number");
        return;
    }
    QString supply=ui->supply->toPlainText();
    double amountValue = amounth.toDouble();
    double supplyValue = supply.toDouble();

    if (amountValue > supplyValue) {
        styles::showWarning(this,"The amount you entered is greater than the currency supply");
        return;
    }
    double amounthDouble = amounth.toDouble();
    double price1, price2;
    QString coinfrom=ui->coin_from_2->toPlainText();
    QString cointo=ui->coin_to_2->toPlainText();
    if(coinfrom=="Bitcoin"){
        price1=PriceUpdater::bitcoinToTether;
    }
    else if(coinfrom=="Toman"){
        price1=PriceUpdater::TomanToTether;
    }
    else if(coinfrom=="Ethereum"){
        price1=PriceUpdater::ethereumToTether;
    }
    else if(coinfrom=="Tron"){
        price1=PriceUpdater::tronToTether;
    }
    else if(coinfrom=="Tether"){
        price1=PriceUpdater::TetherToTether;
    }
    if(cointo=="Bitcoin"){
        price2=PriceUpdater::bitcoinToTether;
    }
    else if(cointo=="Toman"){
        price2=PriceUpdater::TomanToTether;
    }
    else if(cointo=="Ethereum"){
        price2=PriceUpdater::ethereumToTether;
    }
    else if(cointo=="Tron"){
        price2=PriceUpdater::tronToTether;
    }
    else if(cointo=="Tether"){
        price2=PriceUpdater::TetherToTether;
    }
    if (price1 > 0 && price2 > 0) {
        double tax = amounthDouble * (price1 / price2) * 0.02;
        double amount2 = amounthDouble * (price1 / price2) - tax;

        QString result = QString::number(amount2, 'f', 6);
        result = result.remove(QRegularExpression("0+$"));
        result = result.remove(QRegularExpression("\\.$"));
        QString address=ui->wallet_address_name_2->text();
        extern Client client;

        client.exchangeCoins(coinfrom, cointo, amounth, result, address);
        qDebug() << "Converted amount in " << cointo << ": " << result;
        QTimer::singleShot(1000, this, [this]() {this->hide();});
        dashboard *da = new dashboard();
        da->setAttribute(Qt::WA_DeleteOnClose);
        da->on_easyexchange_btn_clicked();
        QMessageBox::warning(this, "Successfully", "Successfully completed.");
    }
    else {
        qDebug() << "Error: Invalid price for the selected currencies.";
    }

}

void exchange::on_currentprice_btn_clicked()
{
    currentprice *window = new currentprice();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}


void exchange::on_exit_btn_clicked()
{
    this->close();
}

