#include "withdrawal.h"
#include "ui_withdrawal.h"
#include <QSvgRenderer>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include <QRadioButton>
#include <QButtonGroup>
#include "dashboard.h"
#include <QMessageBox>
#include "client.h"
#include "deposit.h"
#include "CurrentPrice.h"
#include "styles.h"

withdrawal::withdrawal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::withdrawal)
{
    ui->setupUi(this);
    applyStyles();
}

withdrawal::~withdrawal()
{
    delete ui;
}
void withdrawal::applyStyles()
{

    ui->Mywallets_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->Dashboard_btn->setStyleSheet(baseStyle);
    ui->deposit_btn->setStyleSheet(baseStyle);
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }

    ui->withdrawal_text->setText("Withdrawal of currency");

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
        "    background-color: #BF360C;"
        "    border: 2px solid #BF360C;"
        "}"
        );
    ui->radioirt->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radioeth->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radiotrx->setStyleSheet(ui->radiobtc->styleSheet());
    ui->radiousdt->setStyleSheet(ui->radiobtc->styleSheet());

    ui->keywallet_text->setText("Enter the recovery words in their order");
}

void withdrawal::on_radiobtc_clicked()
{
    ui->coin_choice_name->setText("BTC");
}

void withdrawal::on_radioirt_clicked()
{
    ui->coin_choice_name->setText("IRT");
}

void withdrawal::on_radioeth_clicked()
{
    ui->coin_choice_name->setText("ETH");
}

void withdrawal::on_radiotrx_clicked()
{
    ui->coin_choice_name->setText("TRX");
}

void withdrawal::on_radiousdt_clicked()
{
    ui->coin_choice_name->setText("USDT");
}

void withdrawal::on_Dashboard_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->show();
}


void withdrawal::on_Mywallets_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();
}


void withdrawal::on_Profile_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Profile_btn_clicked();
}


void withdrawal::on_withdrawal_coin_clicked()
{
    QString coin=ui->coin_choice_name->toPlainText();
    QString amounth=ui->coin_amounth_number->text();
    QString address=ui->wallet_address_name->text();

    if(coin.isEmpty()){
        QMessageBox::warning(this, "error", "First, select the currency you want to deposit");
        return;
    }
    if(amounth.isEmpty()||address.isEmpty()){
        QMessageBox::warning(this, "error", "Please enter all values");
        return;
    }
    if (!amounth.toDouble()) {
        QMessageBox::warning(this, "error", "Invalid entry! Please enter a number");
        return;
}
    QList<QString> selectedWords;
    selectedWords.append(ui->textEdit_rand1->text());
    selectedWords.append(ui->textEdit_rand2->text());
    selectedWords.append(ui->textEdit_rand3->text());
    selectedWords.append(ui->textEdit_rand4->text());
    selectedWords.append(ui->textEdit_rand5->text());
    selectedWords.append(ui->textEdit_rand6->text());

    bool allFieldsFilled = true;
    for (const QString& word : selectedWords) {
        if (word.isEmpty()) {
            allFieldsFilled = false;
            break;
        }
    }

    if (!allFieldsFilled) {
        QMessageBox::warning(this, "error", "Please enter all values");
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
client.withdrawalcheckserver(coin,amounth,address,selectedWords);
this->hide();
}

void withdrawal::on_deposit_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        msgBox.setIcon(QMessageBox::Warning);
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
}


void withdrawal::on_Authentication_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
}


void withdrawal::on_easyexchange_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        QMessageBox msgBox(this);
        msgBox.setStyleSheet(QMSSGEBOX_STYLE);
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("Warning");
        msgBox.setText(" you must first authenticate yourself");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_easyexchange_btn_clicked();
}


void withdrawal::on_currentprice_btn_clicked()
{
    this->close();
    MainWindow *window = new MainWindow();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->show();
}
void withdrawal::setaddress(const QString &coinname){
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
