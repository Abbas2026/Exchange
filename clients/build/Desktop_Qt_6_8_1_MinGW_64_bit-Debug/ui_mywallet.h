/********************************************************************************
** Form generated from reading UI file 'mywallet.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWALLET_H
#define UI_MYWALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mywallet
{
public:
    QWidget *widget;
    QPushButton *Mywallets_btn;
    QPushButton *Transmission_btn;
    QLabel *label_3;
    QPushButton *Dashboard_btn;
    QPushButton *Authentication_btn;
    QLabel *label_2;
    QPushButton *easyexchange_btn;
    QPushButton *Profile_btn;
    QPushButton *currentprice_btn;
    QPushButton *Settings_btn;
    QPushButton *market_btn;
    QPushButton *Dashboard_btn_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *mywallet)
    {
        if (mywallet->objectName().isEmpty())
            mywallet->setObjectName("mywallet");
        mywallet->resize(1278, 904);
        mywallet->setMinimumSize(QSize(1278, 904));
        mywallet->setMaximumSize(QSize(1278, 904));
        mywallet->setStyleSheet(QString::fromUtf8("background-color: #10161f;"));
        widget = new QWidget(mywallet);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1030, 0, 251, 904));
        widget->setStyleSheet(QString::fromUtf8("background-color:#d9d8d4  ;"));
        Mywallets_btn = new QPushButton(widget);
        Mywallets_btn->setObjectName("Mywallets_btn");
        Mywallets_btn->setGeometry(QRect(30, 290, 171, 41));
        Mywallets_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Mywallets_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: #c97940;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        Transmission_btn = new QPushButton(widget);
        Transmission_btn->setObjectName("Transmission_btn");
        Transmission_btn->setGeometry(QRect(10, 610, 221, 41));
        Transmission_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Transmission_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(0, 0, 251, 151));
        label_3->setPixmap(QPixmap(QString::fromUtf8("E:/Downloads/logo for a currency exchange named heliacal (1).png")));
        label_3->setScaledContents(true);
        label_3->setIndent(-6);
        Dashboard_btn = new QPushButton(widget);
        Dashboard_btn->setObjectName("Dashboard_btn");
        Dashboard_btn->setGeometry(QRect(20, 210, 191, 41));
        Dashboard_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Dashboard_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        Authentication_btn = new QPushButton(widget);
        Authentication_btn->setObjectName("Authentication_btn");
        Authentication_btn->setGeometry(QRect(10, 770, 231, 41));
        Authentication_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Authentication_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: #4fee93;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: -1px;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(0, 130, 251, 71));
        label_2->setStyleSheet(QString::fromUtf8("           border: none;  \n"
"color: #344b90;\n"
"background-color: #d9d8d4;\n"
"font: 22pt \"Rubik Wet Paint\";\n"
"letter-spacing: -2px;\n"
"word-spacing: 3px;\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        easyexchange_btn = new QPushButton(widget);
        easyexchange_btn->setObjectName("easyexchange_btn");
        easyexchange_btn->setGeometry(QRect(20, 530, 211, 41));
        easyexchange_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        easyexchange_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: -1px;"));
        Profile_btn = new QPushButton(widget);
        Profile_btn->setObjectName("Profile_btn");
        Profile_btn->setGeometry(QRect(10, 370, 211, 41));
        Profile_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Profile_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        currentprice_btn = new QPushButton(widget);
        currentprice_btn->setObjectName("currentprice_btn");
        currentprice_btn->setGeometry(QRect(10, 690, 221, 41));
        currentprice_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        currentprice_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        Settings_btn = new QPushButton(widget);
        Settings_btn->setObjectName("Settings_btn");
        Settings_btn->setGeometry(QRect(40, 850, 171, 41));
        Settings_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Settings_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        market_btn = new QPushButton(widget);
        market_btn->setObjectName("market_btn");
        market_btn->setGeometry(QRect(30, 450, 171, 41));
        market_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        market_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        Dashboard_btn_2 = new QPushButton(mywallet);
        Dashboard_btn_2->setObjectName("Dashboard_btn_2");
        Dashboard_btn_2->setGeometry(QRect(820, 20, 201, 41));
        Dashboard_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Dashboard_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:rgb(255, 255, 255);\n"
"font: 18pt \"Rubik Vinyl\";\n"
" border-radius: 10px;\n"
"background-color: rgb(16, 16, 16);"));
        tableWidget = new QTableWidget(mywallet);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(10, 140, 1011, 771));
        tableWidget->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        tableWidget->setDragEnabled(false);
        tableWidget->setCornerButtonEnabled(true);

        retranslateUi(mywallet);

        QMetaObject::connectSlotsByName(mywallet);
    } // setupUi

    void retranslateUi(QWidget *mywallet)
    {
        mywallet->setWindowTitle(QCoreApplication::translate("mywallet", "Form", nullptr));
        Mywallets_btn->setText(QCoreApplication::translate("mywallet", "My wallets", nullptr));
        Transmission_btn->setText(QCoreApplication::translate("mywallet", "Transmission", nullptr));
        label_3->setText(QString());
        Dashboard_btn->setText(QCoreApplication::translate("mywallet", "Dashboard", nullptr));
        Authentication_btn->setText(QCoreApplication::translate("mywallet", "Authentication", nullptr));
        label_2->setText(QCoreApplication::translate("mywallet", "heliacal exchange", nullptr));
        easyexchange_btn->setText(QCoreApplication::translate("mywallet", "Easy exchange", nullptr));
        Profile_btn->setText(QCoreApplication::translate("mywallet", "Profile", nullptr));
        currentprice_btn->setText(QCoreApplication::translate("mywallet", "Current price", nullptr));
        Settings_btn->setText(QCoreApplication::translate("mywallet", "Settings", nullptr));
        market_btn->setText(QCoreApplication::translate("mywallet", "market", nullptr));
        Dashboard_btn_2->setText(QCoreApplication::translate("mywallet", "Create a wallet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mywallet: public Ui_mywallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWALLET_H
