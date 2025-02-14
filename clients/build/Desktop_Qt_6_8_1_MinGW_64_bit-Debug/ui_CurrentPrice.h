/********************************************************************************
** Form generated from reading UI file 'CurrentPrice.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTPRICE_H
#define UI_CURRENTPRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *coinInput;
    QPushButton *detailsButton;
    QTextEdit *resultDisplay;
    QPushButton *priceButton;
    QWidget *widget_2;
    QPushButton *Mywallets_btn_2;
    QPushButton *Transmission_btn_2;
    QLabel *app_logo;
    QPushButton *Dashboard_btn_2;
    QPushButton *Authentication_btn_2;
    QLabel *app_name;
    QPushButton *Profile_btn_2;
    QPushButton *currentprice_btn_2;
    QPushButton *deposit_btn_2;
    QPushButton *market_btn_2;
    QPushButton *withdrawal_btn_2;
    QPushButton *easyexchange_btn_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1278, 904);
        MainWindow->setMinimumSize(QSize(1278, 904));
        MainWindow->setMaximumSize(QSize(1278, 904));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1278, 904));
        centralwidget->setMaximumSize(QSize(1278, 904));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1031, 901));
        widget->setStyleSheet(QString::fromUtf8("background-color: #040609;"));
        coinInput = new QLineEdit(widget);
        coinInput->setObjectName("coinInput");
        coinInput->setGeometry(QRect(280, 130, 391, 41));
        coinInput->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  \n"
"padding-left:20px;"));
        detailsButton = new QPushButton(widget);
        detailsButton->setObjectName("detailsButton");
        detailsButton->setGeometry(QRect(300, 550, 151, 41));
        detailsButton->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        resultDisplay = new QTextEdit(widget);
        resultDisplay->setObjectName("resultDisplay");
        resultDisplay->setGeometry(QRect(200, 230, 561, 251));
        resultDisplay->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        resultDisplay->setReadOnly(true);
        priceButton = new QPushButton(widget);
        priceButton->setObjectName("priceButton");
        priceButton->setGeometry(QRect(510, 550, 151, 41));
        priceButton->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(1030, 0, 251, 904));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:#d9d8d4  ;"));
        Mywallets_btn_2 = new QPushButton(widget_2);
        Mywallets_btn_2->setObjectName("Mywallets_btn_2");
        Mywallets_btn_2->setGeometry(QRect(30, 280, 171, 41));
        Mywallets_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Mywallets_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        Transmission_btn_2 = new QPushButton(widget_2);
        Transmission_btn_2->setObjectName("Transmission_btn_2");
        Transmission_btn_2->setGeometry(QRect(10, 560, 221, 41));
        Transmission_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Transmission_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        app_logo = new QLabel(widget_2);
        app_logo->setObjectName("app_logo");
        app_logo->setEnabled(true);
        app_logo->setGeometry(QRect(0, 0, 251, 151));
        app_logo->setPixmap(QPixmap(QString::fromUtf8("E:/Downloads/logo for a currency exchange named heliacal (1).png")));
        app_logo->setScaledContents(true);
        app_logo->setIndent(-6);
        Dashboard_btn_2 = new QPushButton(widget_2);
        Dashboard_btn_2->setObjectName("Dashboard_btn_2");
        Dashboard_btn_2->setGeometry(QRect(20, 210, 191, 41));
        Dashboard_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Dashboard_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        Authentication_btn_2 = new QPushButton(widget_2);
        Authentication_btn_2->setObjectName("Authentication_btn_2");
        Authentication_btn_2->setGeometry(QRect(10, 700, 231, 41));
        Authentication_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Authentication_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: #4fee93;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: -1px;"));
        app_name = new QLabel(widget_2);
        app_name->setObjectName("app_name");
        app_name->setEnabled(false);
        app_name->setGeometry(QRect(0, 150, 251, 41));
        app_name->setStyleSheet(QString::fromUtf8("           border: none;  \n"
"color: #344b90;\n"
"background-color: #d9d8d4;\n"
"font: 22pt \"Rubik Wet Paint\";\n"
"letter-spacing: -2px;\n"
"word-spacing: 3px;\n"
""));
        app_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Profile_btn_2 = new QPushButton(widget_2);
        Profile_btn_2->setObjectName("Profile_btn_2");
        Profile_btn_2->setGeometry(QRect(10, 350, 211, 41));
        Profile_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Profile_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        currentprice_btn_2 = new QPushButton(widget_2);
        currentprice_btn_2->setObjectName("currentprice_btn_2");
        currentprice_btn_2->setGeometry(QRect(10, 630, 221, 41));
        currentprice_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        currentprice_btn_2->setStyleSheet(QString::fromUtf8("font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;\n"
"border:none;\n"
"color: #c97940;\n"
"\n"
""));
        deposit_btn_2 = new QPushButton(widget_2);
        deposit_btn_2->setObjectName("deposit_btn_2");
        deposit_btn_2->setGeometry(QRect(40, 770, 171, 41));
        deposit_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        deposit_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        market_btn_2 = new QPushButton(widget_2);
        market_btn_2->setObjectName("market_btn_2");
        market_btn_2->setGeometry(QRect(30, 420, 171, 41));
        market_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        market_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        withdrawal_btn_2 = new QPushButton(widget_2);
        withdrawal_btn_2->setObjectName("withdrawal_btn_2");
        withdrawal_btn_2->setGeometry(QRect(20, 840, 201, 41));
        withdrawal_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        withdrawal_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        easyexchange_btn_2 = new QPushButton(widget_2);
        easyexchange_btn_2->setObjectName("easyexchange_btn_2");
        easyexchange_btn_2->setGeometry(QRect(40, 490, 151, 41));
        easyexchange_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        easyexchange_btn_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: -1px;"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "HELIACAL EXCHANGE", nullptr));
        coinInput->setText(QString());
        coinInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter coin ID", nullptr));
        detailsButton->setText(QCoreApplication::translate("MainWindow", "Get coin details", nullptr));
        priceButton->setText(QCoreApplication::translate("MainWindow", "Get coin Price", nullptr));
        Mywallets_btn_2->setText(QCoreApplication::translate("MainWindow", "My wallets", nullptr));
        Transmission_btn_2->setText(QCoreApplication::translate("MainWindow", "Transmission", nullptr));
        app_logo->setText(QString());
        Dashboard_btn_2->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        Authentication_btn_2->setText(QCoreApplication::translate("MainWindow", "Authentication", nullptr));
        app_name->setText(QCoreApplication::translate("MainWindow", "heliacal exchange", nullptr));
        Profile_btn_2->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        currentprice_btn_2->setText(QCoreApplication::translate("MainWindow", "Current price", nullptr));
        deposit_btn_2->setText(QCoreApplication::translate("MainWindow", "Deposit ", nullptr));
        market_btn_2->setText(QCoreApplication::translate("MainWindow", "market", nullptr));
        withdrawal_btn_2->setText(QCoreApplication::translate("MainWindow", " withdrawal", nullptr));
        easyexchange_btn_2->setText(QCoreApplication::translate("MainWindow", " Exchange", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTPRICE_H
