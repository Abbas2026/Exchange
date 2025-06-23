#include "mywallet.h"
#include "ui_mywallet.h"


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
    ui->Mywallets_btn->setStyleSheet(active_baseStyle);
    ui->Dashboard_btn->setStyleSheet(baseStyle);
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
     ui->tableWidget->setStyleSheet(table_mywallet);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
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

        processRowData(currentName, currentAddress, currentBalance);
    });
    ui->tableWidget->setCellWidget(rowCount, 3, button);
     ui->tableWidget->viewport()->setCursor(Qt::PointingHandCursor);


}

void mywallet::on_creatwallet_btn_clicked() {

    if(Client::number_wallets==1 &&Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
         QMessageBox::warning(this, "warning", "To create a wallet, you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
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

    ui->widget_4->hide();
    ui->createwallet_widget->show();
}

void mywallet::processRowData(const QString &name, const QString &address, double balance) {

    QString savedName = name;
    QString savedAddress = address;
    double savedBalance = balance;
    Client::walletactive=address;
    PriceUpdater::balancetotether=0;
    Walldetails *details = new Walldetails();
    details->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    client.Walletassets(Client::globalEmail,savedName);
    details->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
    QObject::connect(&client, &Client::sendinventorytowalletdetails, details, &Walldetails::addcointotable);
}

void mywallet::on_continue_btn_clicked()
{
    ui->createwallet_widget->hide();
    ui->createwallet_widget_2->show();
     ui->namewallet_lineedit->setFocus();
}

void mywallet::on_save_wallet_btn_clicked()
{
    QString name=  ui->namewallet_lineedit->text();

    if(name.isEmpty()){
        styles::showWarning(this,"Choose a name for the wallet");
        return;}

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
    sendWalletToServer(selectedWords,name,address);
}

void mywallet::sendWalletToServer(const QStringList &words,const QString namewallet, const QString addresswallet)
{
    extern Client client;
    QString name=namewallet;
    QString address= addresswallet;
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
    ui->widget_4->show();

}

void mywallet::on_close_btn_2_clicked()
{
    ui->createwallet_widget_2->close();
    ui->createwallet_widget->close();
    ui->widget_4->show();
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

void mywallet::on_Dashboard_btn_clicked()
{
    dashboard *da = new dashboard();
    da->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}

void mywallet::on_Profile_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Profile_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void mywallet::on_deposit_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this," you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    deposit *dep = new deposit();
    dep->setAttribute(Qt::WA_DeleteOnClose);
    dep->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void mywallet::on_withdrawal_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this," you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    withdrawal *withdrl = new withdrawal();
    withdrl->setAttribute(Qt::WA_DeleteOnClose);
    withdrl->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});

}

void mywallet::on_Authentication_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void mywallet::on_easyexchange_btn_clicked()
{
    if(Client::user_level=="0"){
        ui->Authentication_btn->setStyleSheet(user_level_0);
        styles::showWarning(this," you must first authenticate yourself");
        ui->Authentication_btn->setStyleSheet(baseStyle);
        return;
    }
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_easyexchange_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void mywallet::on_currentprice_btn_clicked()
{
    currentprice *window = new currentprice();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void mywallet::on_exit_btn_clicked()
{
    this->close();
}

