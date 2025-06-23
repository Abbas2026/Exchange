#include "walldetails.h"
#include "ui_walldetails.h"

Walldetails::Walldetails(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Walldetails)
{
    ui->setupUi(this);
     applyStyles();
     populateTable();
}
Walldetails::~Walldetails()
{
    delete ui;
}
void Walldetails::applyStyles()
{
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
    ui->history_btn->setStyleSheet("QPushButton { color: #fff; border: none;  border: none;  border-radius: 10px; font-size:20px; background-color: #242d3b; }"
                                   "QPushButton:hover { background-color: #2e3847; }");
    if(Client::user_level=="1"){
        ui->Authentication_btn->setStyleSheet(user_level_1);
    }
    ui->tableWidget->setStyleSheet(table_walletdetails);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50);
}

void Walldetails::populateTable()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->verticalHeader()->hide();
    QStringList headers = {"symbol","Cryptocurrency","inventory", "Current value", "Operation"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->setColumnWidth(0, 141);
    ui->tableWidget->setColumnWidth(1, 250);
    ui->tableWidget->setColumnWidth(2, 250);
    ui->tableWidget->setColumnWidth(3, 250);
    ui->tableWidget->setColumnWidth(4, 400);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->symbol_toman->setText("IRT");
    ui->symbol_tether->setText("USDT");
    ui->symbol_bitcoin->setText("BTC");
    ui->symbol_ethereum->setText("ETH");
    ui->symbol_ton->setText("TRX");

    ui->tableWidget->setShowGrid(false);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(false);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

void Walldetails::addcointotable(const QString &name1, const double &inventory1,const double &Currentvalue1) {
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);
    QString name = name1;
    double inventory = inventory1;
    double Currentvalue=Currentvalue1;
    QString formattedValue1 = QString::number(inventory, 'f', 15).remove(QRegularExpression("0+$")).remove(QRegularExpression("\\.$"));
    if(name=="Toman"){
        ui->tableWidget->setCellWidget(rowCount, 0, ui->widget_toman);
    }
    else if(name=="Tether"){
    ui->tableWidget->setCellWidget(rowCount, 0, ui->widget_tether);
    }
    else if(name=="Bitcoin"){
        ui->tableWidget->setCellWidget(rowCount, 0, ui->widget_bitcoin);
    }
    else if(name=="Ethereum"){
        ui->tableWidget->setCellWidget(rowCount, 0, ui->widget_ethereum);
    }
    else if(name=="Tron"){
        ui->tableWidget->setCellWidget(rowCount, 0, ui->widget_ton);
    }
    QTableWidgetItem *nameItem = new QTableWidgetItem(name);
    nameItem->setTextAlignment(Qt::AlignCenter);
    nameItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowCount, 1, nameItem);

    QTableWidgetItem *inventoryItem = new QTableWidgetItem(formattedValue1);
    inventoryItem->setTextAlignment(Qt::AlignCenter);
    inventoryItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowCount, 2, inventoryItem);

    QTableWidgetItem *Currentvaluee = new QTableWidgetItem(QString("$%1").arg(Currentvalue));
    Currentvaluee->setTextAlignment(Qt::AlignCenter);
    Currentvaluee->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowCount, 3, Currentvaluee);

    QWidget *buttonWidget = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout(buttonWidget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(20);

    QPushButton *editButton = new QPushButton("deposit");
    QPushButton *deleteButton = new QPushButton("withdrawal");
deleteButton->setStyleSheet("background-color: #f26672;");
    editButton->setCursor(Qt::PointingHandCursor);
    deleteButton->setCursor(Qt::PointingHandCursor);
    layout->addWidget(editButton);
    layout->addWidget(deleteButton);

    ui->tableWidget->setCellWidget(rowCount, 4, buttonWidget);

    connect(editButton, &QPushButton::clicked, [=]() {
        deposit *dep = new deposit();
        dep->setAttribute(Qt::WA_DeleteOnClose);
        QString coinname = ui->tableWidget->item(rowCount, 1)->text();
        dep->setaddress(coinname);
        dep->showFullScreen();
        QTimer::singleShot(1000, this, [this]() {this->close();});
    });
    connect(deleteButton, &QPushButton::clicked, [=]() {
        withdrawal *withdrl = new withdrawal();
        withdrl->setAttribute(Qt::WA_DeleteOnClose);
        QString coinname = ui->tableWidget->item(rowCount, 1)->text();
        withdrl->setaddress(coinname);
        withdrl->showFullScreen();
        QTimer::singleShot(1000, this, [this]() {this->close();});
    });

    ui->textEdit_totalbalnce->setText("USDT " + QString::number(PriceUpdater::balancetotether));
    QString formattedValue = QString("%1").arg(QLocale().toString(PriceUpdater::balancetotether * PriceUpdater::tetherToToman, 'f', 0));

    ui->textEdit_totalbalnce_2->setText(formattedValue + "  IRT");
}

void Walldetails::on_backtomywallet_btn_clicked()
{
    this->hide();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Mywallets_btn_clicked();
}

void Walldetails::on_Profile_btn_clicked()
{
    extern Client client;
    client.getuserprofile();
    profile *prof= new profile();
    prof->setAttribute(Qt::WA_DeleteOnClose);
    prof->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Walldetails::on_Dashboard_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Walldetails::on_deposit_btn_clicked()
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

void Walldetails::on_withdrawal_btn_clicked()
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

void Walldetails::on_Authentication_btn_clicked()
{
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->on_Authentication_btn_clicked();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Walldetails::on_easyexchange_btn_clicked()
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

void Walldetails::on_currentprice_btn_clicked()
{
    currentprice *window = new currentprice();
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void Walldetails::on_exit_btn_clicked()
{
    this->close();
}

