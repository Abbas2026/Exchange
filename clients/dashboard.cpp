#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include "mywallet.h"
#include "client.h"
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
void dashboard::setEmail(const QString &email)
{
    m_email = email;

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
    ui->Settings_btn->setStyleSheet(baseStyle);
    ui->Settings_btn_2->setStyleSheet(baseStyle);
}

void dashboard::on_Mywallets_btn_clicked()
{
    this->close();

    mywallet *wallets = new mywallet();
    wallets->setAttribute(Qt::WA_DeleteOnClose);

      extern Client client;
        QObject::connect(&client, &Client::sendWalletToMywallet, wallets, &mywallet::addWalletToTable);

        client.walletsdata(form::globalEmail);
             wallets->show();
}


void dashboard::on_Profile_btn_clicked()
{

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


void dashboard::on_Settings_btn_clicked()
{

}

