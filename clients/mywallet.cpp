#include "mywallet.h"
#include "ui_mywallet.h"
#include <QPushButton>
#include <QTableWidgetItem>
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
    ui->Dashboard_btn->setStyleSheet("QPushButton { color:black ;border:none;font: 28pt 'Bangers';border:none; }"
                                     "QPushButton:hover {color: #c97940 }");
    ui->Mywallets_btn->setStyleSheet("QPushButton { color:#c97940; ;border:none;font: 28pt 'Bangers';letter-spacing: 1px;border:none;}"
                                     "QPushButton:hover { color: #c97940  }");
    ui->Profile_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                   "QPushButton:hover { color: #c97940  }");
    ui->market_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                  "QPushButton:hover { color: #c97940  }");
    ui->easyexchange_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                        "QPushButton:hover { color: #c97940  }");
    ui->Transmission_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                        "QPushButton:hover { color: #c97940  }");
    ui->currentprice_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                        "QPushButton:hover { color: #c97940  }");
    ui->Authentication_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                          "QPushButton:hover { color: #c97940  }");
    ui->Settings_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                    "QPushButton:hover { color: #c97940  }");



     ui->tableWidget->setStyleSheet(
        "QTableWidget {"
        "    background-color: #2c3e50;"
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
        "    background-color: #34495e;"
        "    border: none;"
        "    padding: 10px;"
        "    border-radius: 5px;"
        "    font-size: 14px;"
        "}"
        "QTableWidget::item:selected {"
        "    background-color: #2980b9;"
        "    color: white;"
        "    border: none;"
        "}"
        "QPushButton {"
        "    background-color: #3498db;"
        "    color: white;"
        "    border: none;"
        "    padding: 8px 6px;"
        "    border-radius: 5px;"
        "    font-size: 14px;"
        "    margin: 0px 56px;"
        "}"
         "QPushButton:hover {"
         "    background-color: #2980b9;"
         "}"
         );
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // تمام عرض جدول را پر کند
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(50); // ارتفاع هر ردیف
}


void mywallet::populateTable()
{

    ui->tableWidget->setRowCount(3);

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->verticalHeader()->hide();
    QStringList headers = {"Name","	Address", "Total Balance", "View details"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < 3; ++row) {
        QTableWidgetItem *nameItem = new QTableWidgetItem(QString("ali %1").arg(row + 1));
        ui->tableWidget->setItem(row, 0, nameItem);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

        QTableWidgetItem *addresItem = new QTableWidgetItem(QString("fsfs %1").arg(row + 1));
        ui->tableWidget->setItem(row, 1, addresItem);
        addresItem->setTextAlignment(Qt::AlignCenter);
        addresItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

        QTableWidgetItem *numberItem = new QTableWidgetItem(QString::number((row + 1) * 10));
        numberItem->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(row, 2, numberItem);
        numberItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


        QPushButton *button = new QPushButton("View");
        connect(button, &QPushButton::clicked, [=]() {
            qDebug() << "Button clicked for row" << row;
        });
        ui->tableWidget->setCellWidget(row, 3, button);
    }


}

