#include "mywallet.h"
#include "ui_mywallet.h"
#include <QPushButton>
#include <QTableWidgetItem>
#include <QClipboard>
#include <QTableWidget>
#include "dashboard.h"
#include <QMessageBox>
#include <qfile.h>
#include <QTime>
#include <QtGlobal>
#include <string>
#include <random>
#include <QDebug>
#include "client.h"
#include "form.h"
#include <QIcon>
#include "walldetails.h"
#include "client.h"
#include "priceupdater.h"
mywallet::mywallet(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mywallet)
{
    ui->setupUi(this);
    applyStyles();
    populateTable();

}

mywallet::~mywallet()
{
    delete ui;
}
void mywallet::applyStyles()
{
    const QString baseStyle = "QPushButton { color: black; border: none; font: 28pt 'Bangers'; border: none; }"
                              "QPushButton:hover { color: #c97940; }";

    ui->Mywallets_btn->setStyleSheet("QPushButton { color: #c97940; border: none; font: 28pt 'Bangers'; border: none; }"
                                     "QPushButton:hover { color: #c97940; }");

    ui->Dashboard_btn->setStyleSheet(baseStyle);
    ui->Profile_btn->setStyleSheet(baseStyle);
    ui->market_btn->setStyleSheet(baseStyle);
    ui->easyexchange_btn->setStyleSheet(baseStyle);
    ui->Transmission_btn->setStyleSheet(baseStyle);
    ui->currentprice_btn->setStyleSheet(baseStyle);
    ui->Authentication_btn->setStyleSheet(baseStyle);
    ui->Settings_btn->setStyleSheet(baseStyle);
    ui->Settings_btn_2->setStyleSheet(baseStyle);

     ui->tableWidget->setStyleSheet(
        "QTableWidget {"
        "    background-color: #2980b9;"
        "    color: white;"
        "    font-family: Arial, sans-serif;"
        "    font-size: 14px;"
        "    border: none;"
        "    gridline-color: #34495e;"
        "}"
        "QHeaderView::section {"
        "    background-color: #34495e;"
        "    color: white;"
        "    font-weight: bold;"
        "    font-size: 16px;"
        "    padding: 8px;"
        "    border: none;"
        "}"
        "QTableWidget::item {"
        "    background-color: #2980b9;"
        "    border: none;"
        "    padding: 10px;"
        "    font-size: 14px;"
        "}"
        "QTableWidget::item:selected {"
        "    color: white;"
        "    border: none;"
        "}"
        "QPushButton {"
        "    background-color: #85fe87;"
        "    color: black;"
        "    border: none;"
        "    padding: 8px 6px;"
        "    border-radius: 5px;"
        "    font-size: 14px;"
        "    margin: 0px 56px;"
        "}"
         "QPushButton:hover {"
         "    background-color: #70e16d;"
         "}"
         );



    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // تمام عرض جدول را پر کند
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50); // ارتفاع هر ردیف
}
void mywallet::populateTable()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->verticalHeader()->hide();
    QStringList headers = {"Name","	Address", "Total Balance $", "View details"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    ui->createwallet_widget->hide();
    ui->textEdit_2->setText("Write down these 6 words in the order given below and store them in a secret,safe place.");
    ui->textEdit_14->setText("Your recovery pharse");
    ui->createwallet_widget_2->hide();
    ui->textEdit_30->setText("Name your wallet");
    ui->textEdit_24->setText("Name your wallet to easily identify it while using the wallets.");




}
void mywallet::addtotable(const QString &name1, const QString &address1, double balance1) {
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);
    QString name = name1;
    QString address = address1;
    double balance = balance1;

    QTableWidgetItem *nameItem = new QTableWidgetItem(name);
    nameItem->setTextAlignment(Qt::AlignCenter);
    nameItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowCount, 0, nameItem);

        QIcon copyIcon("./copy1.png");

    QTableWidgetItem *addresItem = new QTableWidgetItem(copyIcon, address);
    //addresItem->setTextAlignment(Qt::AlignCenter);
       addresItem->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
    addresItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowCount, 1, addresItem );

    QTableWidgetItem *numberItem = new QTableWidgetItem(QString::number(balance));
    numberItem->setTextAlignment(Qt::AlignCenter);
    numberItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowCount, 2, numberItem );


    QPushButton *button = new QPushButton("View");
    connect(button, &QPushButton::clicked, [=]() {
        QString currentName = ui->tableWidget->item(rowCount, 0)->text();
        QString currentAddress = ui->tableWidget->item(rowCount, 1)->text();
        double currentBalance = ui->tableWidget->item(rowCount, 2)->text().toDouble();

        processRowData(rowCount,currentName, currentAddress, currentBalance);
    });
    ui->tableWidget->setCellWidget(rowCount, 3, button);
     ui->tableWidget->viewport()->setCursor(Qt::PointingHandCursor);


}
void mywallet::on_creatwallet_btn_clicked() {
    QStringList words;
    QFile file("words.txt");
    if (file.open(QIODevice::ReadOnly)) {
        while (!file.atEnd()) {
            words << file.readLine().trimmed();
        }

        file.close();
    }
    QList<QString> selectedWords;
    QSet<int> usedIndexes;

    srand(QTime::currentTime().msec());
    while (selectedWords.size() < 6) {
        int randomIndex = rand() % words.size();
        if (!usedIndexes.contains(randomIndex)) {
            usedIndexes.insert(randomIndex);
            selectedWords.append(words[randomIndex]);
        }
    }
    ui->textEdit_rand1->setText(selectedWords[0]);
    ui->textEdit_rand2->setText(selectedWords[1]);
    ui->textEdit_rand3->setText(selectedWords[2]);
    ui->textEdit_rand4->setText(selectedWords[3]);
    ui->textEdit_rand5->setText(selectedWords[4]);
    ui->textEdit_rand6->setText(selectedWords[5]);


    ui->createwallet_widget->show();
}
void mywallet::on_Dashboard_btn_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->show();
}
void mywallet::processRowData(int row,const QString &name, const QString &address, double balance) {

    QString savedName = name;
    QString savedAddress = address;
    double savedBalance = balance;

    //ui->tableWidget->item(row, 0)->setText("0");
    //ui->tableWidget->item(row, 1)->setText("0");
    //ui->tableWidget->item(row, 2)->setText("0");
    PriceUpdater::balancetotether=0;
    this->close();
    Walldetails *details = new Walldetails();
    details->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    client.Walletassets(form::globalEmail,savedName);
    details->show();
    QObject::connect(&client, &Client::sendinventorytowalletdetails, details, &Walldetails::addcointotable);

}
void mywallet::on_continue_btn_clicked()
{
    ui->createwallet_widget->hide();
    ui->createwallet_widget_2->show();
     ui->namewallet_lineedit->setFocus();

    extern Client client;

    //client.sendRecoveryRequest();


    //client.walletsdata(form::globalEmail);
}
void mywallet::on_save_wallet_btn_clicked()
{
    QString name=  ui->namewallet_lineedit->text();

    if(name.isEmpty()){ QMessageBox::warning(this, "warning", "Choose a name for the wallet.");return;}

    QList<QString> selectedWords;

    selectedWords.append(ui->textEdit_rand1->toPlainText());
    selectedWords.append(ui->textEdit_rand2->toPlainText());
    selectedWords.append(ui->textEdit_rand3->toPlainText());
    selectedWords.append(ui->textEdit_rand4->toPlainText());
    selectedWords.append(ui->textEdit_rand5->toPlainText());
    selectedWords.append(ui->textEdit_rand6->toPlainText());

    ui->createwallet_widget_2->close();
    ui->createwallet_widget->close();
    ui->namewallet_lineedit->clear();

    const QString characters = "abcdefghijklmnopqrstuvwxyz0123456789";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, characters.size() - 1);

    QString randomString;
    for (int i = 0; i < 25; ++i) {
        randomString += characters[distribution(generator)];
    }
    QString address=randomString;
    qDebug()<<address;
    double balance=0;
    sendWalletToServer(selectedWords,name,address);
}
void mywallet::sendWalletToServer(const QStringList &words,const QString namewallet, const QString addresswallet)
{
    extern Client client;
    QString name=namewallet;
    QString address= addresswallet;
    qDebug()<<"323"<< name;
        client.sendWallet(words,name,address);
    this->hide();

}
void mywallet::on_backtowords_btn_clicked()
{
    ui->createwallet_widget_2->hide();
    ui->createwallet_widget->show();



}
void mywallet::on_close_btn_clicked()
{
    ui->createwallet_widget_2->close();
    ui->createwallet_widget->close();
}
void mywallet::on_close_btn_2_clicked()
{
    ui->createwallet_widget_2->close();
    ui->createwallet_widget->close();
}
void mywallet::on_tableWidget_cellClicked(int row, int column)
{
    if (column == 1) {
        QString text = ui->tableWidget->item(row, column)->text();
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(text);
    }
}
void mywallet::addWalletToTable(const QString &name, const QString &address, double balance) {
    addtotable(name, address, balance);
}
