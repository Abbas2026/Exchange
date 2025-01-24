/********************************************************************************
** Form generated from reading UI file 'exchange.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCHANGE_H
#define UI_EXCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exchange
{
public:
    QWidget *widget_2;
    QPushButton *Mywallets_btn;
    QPushButton *Transmission_btn;
    QLabel *app_logo;
    QPushButton *Dashboard_btn;
    QPushButton *Authentication_btn;
    QLabel *app_name;
    QPushButton *easyexchange_btn;
    QPushButton *Profile_btn;
    QPushButton *currentprice_btn;
    QPushButton *deposit_btn;
    QPushButton *market_btn;
    QPushButton *withdrawal_btn;
    QWidget *widget;
    QWidget *widget_3;
    QPushButton *exchange_btn;
    QWidget *widget_bitcoin;
    QLabel *lb_icon_bitcoin;
    QTextEdit *symbol_bitcoin;
    QRadioButton *radiobtc;
    QTextEdit *change_text;
    QWidget *widget_ethereum;
    QLabel *lb_icon_ethereum;
    QTextEdit *symbol_ethereum;
    QRadioButton *radioeth;
    QWidget *widget_ton;
    QLabel *lb_icon_ton;
    QTextEdit *symbol_ton;
    QRadioButton *radiotrx;
    QWidget *widget_tether;
    QLabel *lb_icon_tether;
    QTextEdit *symbol_tether;
    QRadioButton *radiousdt;
    QWidget *widget_toman;
    QLabel *lb_icon_toman;
    QTextEdit *symbol_toman;
    QRadioButton *radioirt;
    QTextEdit *coin_from;
    QLineEdit *wallet_address_name;
    QLabel *coin_choice;
    QLabel *wallet_address;
    QWidget *widget_bitcoin_2;
    QLabel *lb_icon_bitcoin_2;
    QTextEdit *symbol_bitcoin_2;
    QRadioButton *radiobtc_2;
    QWidget *widget_toman_2;
    QLabel *lb_icon_toman_2;
    QTextEdit *symbol_toman_2;
    QRadioButton *radioirt_2;
    QWidget *widget_ethereum_2;
    QLabel *lb_icon_ethereum_3;
    QTextEdit *symbol_ethereum_3;
    QRadioButton *radioeth_3;
    QWidget *widget_ton_2;
    QLabel *lb_icon_ton_3;
    QTextEdit *symbol_ton_3;
    QRadioButton *radiotrx_3;
    QWidget *widget_tether_2;
    QLabel *lb_icon_tether_2;
    QTextEdit *symbol_tether_2;
    QRadioButton *radiousdt_2;
    QTextEdit *coin_to;
    QLabel *coin_choice_2;
    QLineEdit *text_from;
    QLineEdit *text_to;
    QWidget *widget_4;
    QWidget *widget_5;
    QPushButton *send_exchange;
    QTextEdit *exchange_text_2;
    QTextEdit *coin_from_2;
    QLineEdit *wallet_address_name_2;
    QLineEdit *coin_amounth_number;
    QLabel *text_from_2;
    QLabel *wallet_address_2;
    QLabel *coin_amounth;
    QLabel *text_to_2;
    QTextEdit *coin_to_2;
    QLineEdit *text_from_3;
    QLineEdit *text_to_3;
    QTextEdit *supply;
    QLabel *text_to_4;

    void setupUi(QWidget *exchange)
    {
        if (exchange->objectName().isEmpty())
            exchange->setObjectName("exchange");
        exchange->resize(1278, 904);
        exchange->setMinimumSize(QSize(1278, 904));
        exchange->setMaximumSize(QSize(1278, 904));
        widget_2 = new QWidget(exchange);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(1030, 0, 251, 904));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:#d9d8d4  ;"));
        Mywallets_btn = new QPushButton(widget_2);
        Mywallets_btn->setObjectName("Mywallets_btn");
        Mywallets_btn->setGeometry(QRect(30, 280, 171, 41));
        Mywallets_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Mywallets_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;\n"
"color: rgb(0, 0, 0);\n"
""));
        Transmission_btn = new QPushButton(widget_2);
        Transmission_btn->setObjectName("Transmission_btn");
        Transmission_btn->setGeometry(QRect(10, 560, 221, 41));
        Transmission_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Transmission_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
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
        Dashboard_btn = new QPushButton(widget_2);
        Dashboard_btn->setObjectName("Dashboard_btn");
        Dashboard_btn->setGeometry(QRect(20, 210, 191, 41));
        Dashboard_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Dashboard_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        Authentication_btn = new QPushButton(widget_2);
        Authentication_btn->setObjectName("Authentication_btn");
        Authentication_btn->setGeometry(QRect(10, 700, 231, 41));
        Authentication_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Authentication_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
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
        easyexchange_btn = new QPushButton(widget_2);
        easyexchange_btn->setObjectName("easyexchange_btn");
        easyexchange_btn->setGeometry(QRect(40, 490, 151, 41));
        easyexchange_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        easyexchange_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: #c97940;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: -1px;"));
        Profile_btn = new QPushButton(widget_2);
        Profile_btn->setObjectName("Profile_btn");
        Profile_btn->setGeometry(QRect(10, 350, 211, 41));
        Profile_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Profile_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;\n"
"color: rgb(0, 0, 0);\n"
""));
        currentprice_btn = new QPushButton(widget_2);
        currentprice_btn->setObjectName("currentprice_btn");
        currentprice_btn->setGeometry(QRect(10, 630, 221, 41));
        currentprice_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        currentprice_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        deposit_btn = new QPushButton(widget_2);
        deposit_btn->setObjectName("deposit_btn");
        deposit_btn->setGeometry(QRect(40, 770, 171, 41));
        deposit_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        deposit_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;\n"
"color: rgb(0, 0, 0);\n"
""));
        market_btn = new QPushButton(widget_2);
        market_btn->setObjectName("market_btn");
        market_btn->setGeometry(QRect(30, 420, 171, 41));
        market_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        market_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        withdrawal_btn = new QPushButton(widget_2);
        withdrawal_btn->setObjectName("withdrawal_btn");
        withdrawal_btn->setGeometry(QRect(20, 840, 201, 41));
        withdrawal_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        withdrawal_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;\n"
"color: rgb(0, 0, 0);\n"
""));
        widget = new QWidget(exchange);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1031, 911));
        widget->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(140, 130, 691, 691));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        exchange_btn = new QPushButton(widget_3);
        exchange_btn->setObjectName("exchange_btn");
        exchange_btn->setEnabled(true);
        exchange_btn->setGeometry(QRect(270, 630, 161, 41));
        exchange_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        exchange_btn->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        widget_bitcoin = new QWidget(widget_3);
        widget_bitcoin->setObjectName("widget_bitcoin");
        widget_bitcoin->setGeometry(QRect(460, 140, 191, 50));
        widget_bitcoin->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_bitcoin = new QLabel(widget_bitcoin);
        lb_icon_bitcoin->setObjectName("lb_icon_bitcoin");
        lb_icon_bitcoin->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_bitcoin->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_bitcoin->setScaledContents(true);
        symbol_bitcoin = new QTextEdit(widget_bitcoin);
        symbol_bitcoin->setObjectName("symbol_bitcoin");
        symbol_bitcoin->setEnabled(false);
        symbol_bitcoin->setGeometry(QRect(80, 10, 51, 31));
        symbol_bitcoin->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radiobtc = new QRadioButton(widget_bitcoin);
        radiobtc->setObjectName("radiobtc");
        radiobtc->setGeometry(QRect(10, 13, 16, 22));
        change_text = new QTextEdit(widget_3);
        change_text->setObjectName("change_text");
        change_text->setEnabled(false);
        change_text->setGeometry(QRect(270, 30, 191, 41));
        change_text->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        change_text->setStyleSheet(QString::fromUtf8(""));
        widget_ethereum = new QWidget(widget_3);
        widget_ethereum->setObjectName("widget_ethereum");
        widget_ethereum->setGeometry(QRect(40, 140, 191, 50));
        widget_ethereum->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_ethereum = new QLabel(widget_ethereum);
        lb_icon_ethereum->setObjectName("lb_icon_ethereum");
        lb_icon_ethereum->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_ethereum->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_ethereum->setScaledContents(true);
        symbol_ethereum = new QTextEdit(widget_ethereum);
        symbol_ethereum->setObjectName("symbol_ethereum");
        symbol_ethereum->setEnabled(false);
        symbol_ethereum->setGeometry(QRect(80, 10, 51, 31));
        symbol_ethereum->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radioeth = new QRadioButton(widget_ethereum);
        radioeth->setObjectName("radioeth");
        radioeth->setGeometry(QRect(10, 13, 16, 22));
        widget_ton = new QWidget(widget_3);
        widget_ton->setObjectName("widget_ton");
        widget_ton->setGeometry(QRect(360, 210, 191, 50));
        widget_ton->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_ton = new QLabel(widget_ton);
        lb_icon_ton->setObjectName("lb_icon_ton");
        lb_icon_ton->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_ton->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_ton->setScaledContents(true);
        symbol_ton = new QTextEdit(widget_ton);
        symbol_ton->setObjectName("symbol_ton");
        symbol_ton->setEnabled(false);
        symbol_ton->setGeometry(QRect(80, 10, 51, 31));
        symbol_ton->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radiotrx = new QRadioButton(widget_ton);
        radiotrx->setObjectName("radiotrx");
        radiotrx->setGeometry(QRect(10, 13, 16, 22));
        widget_tether = new QWidget(widget_3);
        widget_tether->setObjectName("widget_tether");
        widget_tether->setGeometry(QRect(150, 210, 191, 50));
        widget_tether->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_tether = new QLabel(widget_tether);
        lb_icon_tether->setObjectName("lb_icon_tether");
        lb_icon_tether->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_tether->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_tether->setScaledContents(true);
        symbol_tether = new QTextEdit(widget_tether);
        symbol_tether->setObjectName("symbol_tether");
        symbol_tether->setEnabled(false);
        symbol_tether->setGeometry(QRect(70, 10, 51, 31));
        symbol_tether->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radiousdt = new QRadioButton(widget_tether);
        radiousdt->setObjectName("radiousdt");
        radiousdt->setGeometry(QRect(10, 13, 16, 22));
        radiousdt->setStyleSheet(QString::fromUtf8(""));
        widget_toman = new QWidget(widget_3);
        widget_toman->setObjectName("widget_toman");
        widget_toman->setGeometry(QRect(250, 140, 191, 50));
        widget_toman->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_toman = new QLabel(widget_toman);
        lb_icon_toman->setObjectName("lb_icon_toman");
        lb_icon_toman->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_toman->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_toman->setScaledContents(true);
        symbol_toman = new QTextEdit(widget_toman);
        symbol_toman->setObjectName("symbol_toman");
        symbol_toman->setEnabled(false);
        symbol_toman->setGeometry(QRect(80, 10, 51, 31));
        symbol_toman->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radioirt = new QRadioButton(widget_toman);
        radioirt->setObjectName("radioirt");
        radioirt->setGeometry(QRect(10, 13, 16, 22));
        coin_from = new QTextEdit(widget_3);
        coin_from->setObjectName("coin_from");
        coin_from->setEnabled(false);
        coin_from->setGeometry(QRect(330, 280, 121, 41));
        coin_from->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  35px; \n"
"	padding-top:6px;"));
        wallet_address_name = new QLineEdit(widget_3);
        wallet_address_name->setObjectName("wallet_address_name");
        wallet_address_name->setGeometry(QRect(250, 570, 311, 41));
        wallet_address_name->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  40px; \n"
""));
        coin_choice = new QLabel(widget_3);
        coin_choice->setObjectName("coin_choice");
        coin_choice->setGeometry(QRect(260, 280, 101, 41));
        coin_choice->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        wallet_address = new QLabel(widget_3);
        wallet_address->setObjectName("wallet_address");
        wallet_address->setEnabled(false);
        wallet_address->setGeometry(QRect(150, 570, 131, 41));
        wallet_address->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        widget_bitcoin_2 = new QWidget(widget_3);
        widget_bitcoin_2->setObjectName("widget_bitcoin_2");
        widget_bitcoin_2->setGeometry(QRect(460, 370, 191, 50));
        widget_bitcoin_2->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_bitcoin_2 = new QLabel(widget_bitcoin_2);
        lb_icon_bitcoin_2->setObjectName("lb_icon_bitcoin_2");
        lb_icon_bitcoin_2->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_bitcoin_2->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_bitcoin_2->setScaledContents(true);
        symbol_bitcoin_2 = new QTextEdit(widget_bitcoin_2);
        symbol_bitcoin_2->setObjectName("symbol_bitcoin_2");
        symbol_bitcoin_2->setEnabled(false);
        symbol_bitcoin_2->setGeometry(QRect(80, 10, 51, 31));
        symbol_bitcoin_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radiobtc_2 = new QRadioButton(widget_bitcoin_2);
        radiobtc_2->setObjectName("radiobtc_2");
        radiobtc_2->setGeometry(QRect(10, 13, 16, 22));
        widget_toman_2 = new QWidget(widget_3);
        widget_toman_2->setObjectName("widget_toman_2");
        widget_toman_2->setGeometry(QRect(250, 370, 191, 50));
        widget_toman_2->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_toman_2 = new QLabel(widget_toman_2);
        lb_icon_toman_2->setObjectName("lb_icon_toman_2");
        lb_icon_toman_2->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_toman_2->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_toman_2->setScaledContents(true);
        symbol_toman_2 = new QTextEdit(widget_toman_2);
        symbol_toman_2->setObjectName("symbol_toman_2");
        symbol_toman_2->setEnabled(false);
        symbol_toman_2->setGeometry(QRect(80, 10, 51, 31));
        symbol_toman_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radioirt_2 = new QRadioButton(widget_toman_2);
        radioirt_2->setObjectName("radioirt_2");
        radioirt_2->setGeometry(QRect(10, 13, 16, 22));
        widget_ethereum_2 = new QWidget(widget_3);
        widget_ethereum_2->setObjectName("widget_ethereum_2");
        widget_ethereum_2->setGeometry(QRect(40, 370, 191, 50));
        widget_ethereum_2->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_ethereum_3 = new QLabel(widget_ethereum_2);
        lb_icon_ethereum_3->setObjectName("lb_icon_ethereum_3");
        lb_icon_ethereum_3->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_ethereum_3->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_ethereum_3->setScaledContents(true);
        symbol_ethereum_3 = new QTextEdit(widget_ethereum_2);
        symbol_ethereum_3->setObjectName("symbol_ethereum_3");
        symbol_ethereum_3->setEnabled(false);
        symbol_ethereum_3->setGeometry(QRect(80, 10, 51, 31));
        symbol_ethereum_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radioeth_3 = new QRadioButton(widget_ethereum_2);
        radioeth_3->setObjectName("radioeth_3");
        radioeth_3->setGeometry(QRect(10, 13, 16, 22));
        widget_ton_2 = new QWidget(widget_3);
        widget_ton_2->setObjectName("widget_ton_2");
        widget_ton_2->setGeometry(QRect(360, 440, 191, 50));
        widget_ton_2->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_ton_3 = new QLabel(widget_ton_2);
        lb_icon_ton_3->setObjectName("lb_icon_ton_3");
        lb_icon_ton_3->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_ton_3->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_ton_3->setScaledContents(true);
        symbol_ton_3 = new QTextEdit(widget_ton_2);
        symbol_ton_3->setObjectName("symbol_ton_3");
        symbol_ton_3->setEnabled(false);
        symbol_ton_3->setGeometry(QRect(80, 10, 51, 31));
        symbol_ton_3->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radiotrx_3 = new QRadioButton(widget_ton_2);
        radiotrx_3->setObjectName("radiotrx_3");
        radiotrx_3->setGeometry(QRect(10, 13, 16, 22));
        widget_tether_2 = new QWidget(widget_3);
        widget_tether_2->setObjectName("widget_tether_2");
        widget_tether_2->setGeometry(QRect(150, 440, 191, 50));
        widget_tether_2->setStyleSheet(QString::fromUtf8("background-color: #1e2026;"));
        lb_icon_tether_2 = new QLabel(widget_tether_2);
        lb_icon_tether_2->setObjectName("lb_icon_tether_2");
        lb_icon_tether_2->setGeometry(QRect(150, 10, 30, 30));
        lb_icon_tether_2->setStyleSheet(QString::fromUtf8("          background-color: #2e3847 ;\n"
"            color: white;\n"
"     border-radius: 15px;\n"
" font-size:20px;"));
        lb_icon_tether_2->setScaledContents(true);
        symbol_tether_2 = new QTextEdit(widget_tether_2);
        symbol_tether_2->setObjectName("symbol_tether_2");
        symbol_tether_2->setEnabled(false);
        symbol_tether_2->setGeometry(QRect(70, 10, 51, 31));
        symbol_tether_2->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"border:none;"));
        radiousdt_2 = new QRadioButton(widget_tether_2);
        radiousdt_2->setObjectName("radiousdt_2");
        radiousdt_2->setGeometry(QRect(10, 13, 16, 22));
        radiousdt_2->setStyleSheet(QString::fromUtf8(""));
        coin_to = new QTextEdit(widget_3);
        coin_to->setObjectName("coin_to");
        coin_to->setEnabled(false);
        coin_to->setGeometry(QRect(330, 510, 121, 41));
        coin_to->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  35px; \n"
"	padding-top:6px;"));
        coin_choice_2 = new QLabel(widget_3);
        coin_choice_2->setObjectName("coin_choice_2");
        coin_choice_2->setGeometry(QRect(260, 510, 101, 41));
        coin_choice_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        text_from = new QLineEdit(widget_3);
        text_from->setObjectName("text_from");
        text_from->setGeometry(QRect(290, 100, 111, 31));
        text_from->setStyleSheet(QString::fromUtf8(""));
        text_to = new QLineEdit(widget_3);
        text_to->setObjectName("text_to");
        text_to->setGeometry(QRect(330, 330, 31, 31));
        text_to->setStyleSheet(QString::fromUtf8(""));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 0, 1031, 911));
        widget_4->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(220, 150, 501, 621));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        send_exchange = new QPushButton(widget_5);
        send_exchange->setObjectName("send_exchange");
        send_exchange->setEnabled(true);
        send_exchange->setGeometry(QRect(170, 550, 161, 41));
        send_exchange->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_exchange->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        exchange_text_2 = new QTextEdit(widget_5);
        exchange_text_2->setObjectName("exchange_text_2");
        exchange_text_2->setEnabled(false);
        exchange_text_2->setGeometry(QRect(160, 20, 191, 41));
        exchange_text_2->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        exchange_text_2->setStyleSheet(QString::fromUtf8(""));
        coin_from_2 = new QTextEdit(widget_5);
        coin_from_2->setObjectName("coin_from_2");
        coin_from_2->setEnabled(false);
        coin_from_2->setGeometry(QRect(230, 140, 121, 41));
        coin_from_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  35px; \n"
"	padding-top:6px;"));
        wallet_address_name_2 = new QLineEdit(widget_5);
        wallet_address_name_2->setObjectName("wallet_address_name_2");
        wallet_address_name_2->setGeometry(QRect(140, 390, 311, 41));
        wallet_address_name_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  40px; \n"
""));
        wallet_address_name_2->setReadOnly(true);
        coin_amounth_number = new QLineEdit(widget_5);
        coin_amounth_number->setObjectName("coin_amounth_number");
        coin_amounth_number->setGeometry(QRect(140, 470, 311, 41));
        coin_amounth_number->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  40px; \n"
""));
        text_from_2 = new QLabel(widget_5);
        text_from_2->setObjectName("text_from_2");
        text_from_2->setGeometry(QRect(160, 140, 101, 41));
        text_from_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        wallet_address_2 = new QLabel(widget_5);
        wallet_address_2->setObjectName("wallet_address_2");
        wallet_address_2->setEnabled(false);
        wallet_address_2->setGeometry(QRect(50, 390, 131, 41));
        wallet_address_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        coin_amounth = new QLabel(widget_5);
        coin_amounth->setObjectName("coin_amounth");
        coin_amounth->setGeometry(QRect(50, 470, 121, 41));
        coin_amounth->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        text_to_2 = new QLabel(widget_5);
        text_to_2->setObjectName("text_to_2");
        text_to_2->setGeometry(QRect(160, 240, 101, 41));
        text_to_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        coin_to_2 = new QTextEdit(widget_5);
        coin_to_2->setObjectName("coin_to_2");
        coin_to_2->setEnabled(false);
        coin_to_2->setGeometry(QRect(230, 240, 121, 41));
        coin_to_2->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  35px; \n"
"	padding-top:6px;"));
        text_from_3 = new QLineEdit(widget_5);
        text_from_3->setObjectName("text_from_3");
        text_from_3->setGeometry(QRect(190, 90, 111, 31));
        text_from_3->setStyleSheet(QString::fromUtf8(""));
        text_to_3 = new QLineEdit(widget_5);
        text_to_3->setObjectName("text_to_3");
        text_to_3->setGeometry(QRect(240, 200, 31, 31));
        text_to_3->setStyleSheet(QString::fromUtf8(""));
        supply = new QTextEdit(widget_5);
        supply->setObjectName("supply");
        supply->setEnabled(false);
        supply->setGeometry(QRect(120, 310, 331, 41));
        supply->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"    padding-left:  35px; \n"
"	padding-top:6px;"));
        text_to_4 = new QLabel(widget_5);
        text_to_4->setObjectName("text_to_4");
        text_to_4->setGeometry(QRect(50, 310, 101, 41));
        text_to_4->setStyleSheet(QString::fromUtf8("background-color:#1d2633;\n"
"color: #6f7988;\n"
"    padding-left :7px;"));
        send_exchange->raise();
        exchange_text_2->raise();
        coin_from_2->raise();
        wallet_address_name_2->raise();
        coin_amounth_number->raise();
        text_from_2->raise();
        wallet_address_2->raise();
        coin_amounth->raise();
        coin_to_2->raise();
        text_to_2->raise();
        text_from_3->raise();
        text_to_3->raise();
        supply->raise();
        text_to_4->raise();
        widget->raise();
        widget_2->raise();

        retranslateUi(exchange);

        QMetaObject::connectSlotsByName(exchange);
    } // setupUi

    void retranslateUi(QWidget *exchange)
    {
        exchange->setWindowTitle(QCoreApplication::translate("exchange", "Form", nullptr));
        Mywallets_btn->setText(QCoreApplication::translate("exchange", "My wallets", nullptr));
        Transmission_btn->setText(QCoreApplication::translate("exchange", "Transmission", nullptr));
        app_logo->setText(QString());
        Dashboard_btn->setText(QCoreApplication::translate("exchange", "Dashboard", nullptr));
        Authentication_btn->setText(QCoreApplication::translate("exchange", "Authentication", nullptr));
        app_name->setText(QCoreApplication::translate("exchange", "heliacal exchange", nullptr));
        easyexchange_btn->setText(QCoreApplication::translate("exchange", " Exchange", nullptr));
        Profile_btn->setText(QCoreApplication::translate("exchange", "Profile", nullptr));
        currentprice_btn->setText(QCoreApplication::translate("exchange", "Current price", nullptr));
        deposit_btn->setText(QCoreApplication::translate("exchange", "Deposit ", nullptr));
        market_btn->setText(QCoreApplication::translate("exchange", "market", nullptr));
        withdrawal_btn->setText(QCoreApplication::translate("exchange", " withdrawal", nullptr));
        exchange_btn->setText(QCoreApplication::translate("exchange", "exchange", nullptr));
#if QT_CONFIG(whatsthis)
        lb_icon_bitcoin->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_bitcoin->setText(QString());
        radiobtc->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_ethereum->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_ethereum->setText(QString());
        radioeth->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_ton->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_ton->setText(QString());
        radiotrx->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_tether->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_tether->setText(QString());
        radiousdt->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_toman->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_toman->setText(QString());
        radioirt->setText(QString());
        coin_choice->setText(QCoreApplication::translate("exchange", "Currency :", nullptr));
        wallet_address->setText(QCoreApplication::translate("exchange", "Address wallet :", nullptr));
#if QT_CONFIG(whatsthis)
        lb_icon_bitcoin_2->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_bitcoin_2->setText(QString());
        radiobtc_2->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_toman_2->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_toman_2->setText(QString());
        radioirt_2->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_ethereum_3->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_ethereum_3->setText(QString());
        radioeth_3->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_ton_3->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_ton_3->setText(QString());
        radiotrx_3->setText(QString());
#if QT_CONFIG(whatsthis)
        lb_icon_tether_2->setWhatsThis(QCoreApplication::translate("exchange", "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:v=\"https://vecta.io/nano\" viewBox=\"195 77 358 360\"><path d=\"M535 316h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7v1H213v-1h-2l2.2 5.8h8v1.9H214l1.5 3.5h8.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-7.9l1.6 3.5h3.2v1.9h-2.3C247.1 390.7 305.9 430 374 430s126.9-39.3 155.2-96.5h-7.3v-5.4H513v5.8h-2v-7.7h12.8v5.4h6.3c.6-1.2 1.1-2.3 1.6-3.5h-4.8v-1.9h5.7l1.5-3.5h-23.4v-1.9h24.2c.8-1.9 1.5-3.9 2.2-5.8h-2v1zm-295 4.8h35.2v1.9H240v-1.9zm8.2 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8"
                        "v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.1 12.7h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27 0h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm3.1-12.7h35.2v1.9h-35.2v-1.9zm8.2 12.7H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm27.1 0h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm8.5-1.9h2.7v1.9h-2.7v-1.9z\" fill=\"#da0000\"/><path d=\"M535 200h-24.4v-1H508v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H321v-1h-2.7v1h-24.4v-1h-2.7v1h-24.4v-1h-2.7v1H240v-1h-2.7"
                        "v1H213v-1h-2c-6.4 18.1-10 37.6-10 58s3.5 39.9 10 58h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H400v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24v1h2.7v-1H535v1h2c6.4-18.1 10-37.6 10-58s-3.5-39.9-10-58h-2v1zm-172 14.9c.6 3.2 3.7 5.3 6.9 4.7a5.71 5.71 0 0 0 4-2.9c.9 1.5 2.3 2.5 4 2.9 3.2.6 6.3-1.5 6.9-4.7 1.1 2.7.2 5.8-2.2 7.5-2.8 2-6.8 1.3-8.7-1.5-2 2.8-5.9 3.5-8.7 1.5-2.3-1.7-3.2-4.8-2.2-7.5zm-28 25.5c4.5-7.8 12-13.4 20.7-15.6-19.2 14.4-23.1 41.7-8.6 60.9 0 0 0 .1.1.1-16-9.2-21.4-29.5-12.2-45.4zm45.8 50.4c5.4 2 11.2 2.9 17 2.6-6.8 2.2-13.8 2.5-20.4 1.1l-.1 1.4-3.4 4.7-3.4-4.7-.1-1.4c-6.6 1.4-13.6 1.1-20.4-1.1 5.8.3 11.6-.6 17-2.6-8.9-4.6-16-12.6-19.3-22.9-4.9-15.2-.3-31.9 11.9-42.3-13.2 19.5-8.4 45.8 10.5 59.5l-1.3-32.5V227c2-1 3.8-2.5 5.1-4.3 1.3 1.8 3.1 3.3 5.1 4.3v25.6l-1.3 32.5c18.9-13.7 23.6-40 10.5-59.5 12.1 10.4 16.8 27.1 11.9 42.3-3.3 10.3-10.4 18.2-19.3 22.9zm20.1-5c0-.1 0-.1 0 0 14.5-19.3 10.6-46.6-8.6-61 8.7 2.2 16.2 7.8 20.7 15.6 9.2 15.9 3.8 36"
                        ".2-12.1 45.4z\" fill=\"#fff\"/><path d=\"M374 84c-68.1 0-126.9 39.3-155.2 96.5h2.3v1.9h-3.2c-.6 1.2-1.1 2.3-1.6 3.5h7.9v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.8c0 .1-.1.2-.1.2v3.2h5.8v1.9h-7.7v-.6l-2.4 6.4h2v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H427v1h2.7v-1h24.4v1h2.7v-1h24.4v1h2.7v-1H508v1h2.7v-1H535v1h2l-2.4-6.4v.6h-12.8v-5.4H513v5.8h-2v-7.7h12.8v5.4h8.9V188c0-.1-.1-.2-.1-.2h-5.7v-1.9h4.8c-.5-1.2-1.1-2.3-1.6-3.5h-19.5v-1.9h18.5C500.9 123.3 442.1 84 374 84zM248.2 193.2h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9H240zm51.1 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-23.9-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13"
                        ".1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm11.2 0h-2.7v-1.9h2.7v1.9zm15.9 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm51 10.8h-12.8v-5.4h-8.9v3.5h5.8v1.9h-7.7v-7.3h10.8v-5.8h1.9v11.2h3.5v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1zm62.7-1.9h2.7v1.9h-2.7v-1.9zm-51.4 1.9H462v-1.9h2.7v1.9zm15.8 0h-12.8v-5.4h-8.9v5.8h-1.9v-7.7h12.8v5.4h8.9v-3.5h-5.8v-1.9h7.7v7.3zm-24-10.8v-1.9h35.2v1.9h-35.2zm43.7 8.9v-11.2h1.9v11.2h3.5v-11.2h1.9v13.1h-12.8v-5.4h-8.9v3.5h5.8v1.9H484v-7.3h10.8v-5.8h1.9v11.2h3.5z\" fill=\"#239f40\"/><g fill=\"#fff\"><path d=\"M221.1 180.5h-2.3l-.9 1.9h3.2v-1.9zm0 12.7v-1.9h-5.8V188l-1.9 4.6v.6h7.7zm3.1 0H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-7.9c-.3.6-.6 1.3-.8 1.9h8.8v5.4zm13.1 6.8v-1-1H213v1 1zm0 116v-1-1H213v1 1zm-16.2 4.8h-8c.3.6.5 1.3.8 "
                        "1.9h7.2v-1.9zm0 10.8h-3.2l.9 1.9h2.3v-1.9zm3.1 1.9H237v-13.1h-2v11.2h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-8.8c.3.6.6 1.3.8 1.9h7.9v5.4zm15.8-153h35.2v1.9H240zm49.1 10.8h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-32.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm-10.8 3.5h2.7v1.9h-2.7zm18.9 8.7v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1zm-27.1 116v-1-1H240v1 1zm27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M245.5 331.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.9v5.4H264v-7.3h-7.7zm32.8 3.5h-3.4v-11.2h-2v11.2h-3.4v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zM240 320.8h35.2v1.9H240zm70.4-133h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7z\"/><use xlink:href=\"#B\"/><path d=\"M299.6 191.3h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2z\"/><use xlink:href=\"#B\" y=\"140.3\"/"
                        "><path d=\"M310.4 328.1h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.7v-7.3h-7.7zm37.9-147.6h35.2v1.9h-35.2zm16.2 7.3h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\"/><path d=\"M353.7 191.3h2.7v1.9h-2.7zm46 8.7v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm27.1 116v-1-1h-24.3v1 1zm-27.1 0v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h5.8v3.5h-8.9v-5.4h-12.7v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.8z\"/><use xlink:href=\"#C\" y=\"140.3\"/><path d=\"M348.3 320.8h35.2v1.9h-35.2zm59.5-129.5h2.7v1.9h-2.7z\"/><use xlink:href=\"#D\"/><path d=\"M418.7 187.8h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7zm-16.3-7.3h35.2v1.9h-35.2zm51.4 19.5v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm27 116v-1-1h-24.3v1 1zm-27 0v-1-1h-24.4v1 1zm-8.1 12.1h5.8v3.5h-8.9v-5.4h-12.8v7.7h1.9v-5.8h8.9v5.4h12.8v-7.3h-7.7z\"/><use xlink:href=\"#D\" y=\"140.3\"/><path d=\"M407.8 331.6h2.7v1.9h-2.7zm-5.4-10.8h35.2v1.9h-35.2zm54.1-140.3h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12."
                        "8v-7.3h-7.7zm22-7.7v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2v11.2h-3.4v-11.2h-2v11.2h-3.5v-11.2zm-32.9 11.2h2.7v1.9h-2.7zM508 200v-1-1h-24.4v1 1zm-27.1 0v-1-1h-24.4v1 1z\"/><path d=\"M480.9 316v-1-1h-24.4v1 1zm27.1 0v-1-1h-24.4v1 1zm-46.1 15.6h2.7v1.9h-2.7zm43.7 0h-3.4v-11.2h-2v11.2h-3.5v-11.2h-1.9v5.8H484v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-2zm-49.1-10.8h35.2v1.9h-35.2zm16.3 7.3h5.8v3.5h-8.9v-5.4h-12.8v7.7h2v-5.8h8.8v5.4h12.8v-7.3h-7.7zm54.1-140.3h5.7c-.3-.6-.6-1.3-.8-1.9H527v1.9zm-3.1 3.5v-5.4H511v7.7h1.9v-5.8h8.9v5.4h12.8v-.6l-1.9-4.6v3.2h-8.9zm-13.1-8.9h19.5l-.9-1.9h-18.5v1.9zm5.4 8.9h2.7v1.9h-2.7zM535 200v-1-1h-24.3v1 1zm0 116v-1-1h-24.3v1 1zm-18.9 15.6h2.7v1.9h-2.7zm10.8-3.5h4.8c.3-.6.6-1.3.8-1.9h-5.7v1.9zm-16.2-5.4h23.4c.3-.6.5-1.3.8-1.9h-24.2v1.9zm13.1 3.5H511v7.7h1.9v-5.8h8.9v5.4h7.3l.9-1.9h-6.3v-5.4z\"/></g><g fill=\"#da0000\"><path d=\"M367.2 290.8c-5.4 2-11.2 2.9-17 2.6 6.8 2.2 13.8 2.5 20.4 1.1l-.1-2.2c-1.1-.4-2.2-1-3.3-1.5zm21.1-65.2c13.2 19.5 8.4 45.8-10.5 59.5l-.2 4.4c1 .5 2."
                        "1.9 3.2 1.3 8.9-4.6 16-12.6 19.3-22.9 5-15.2.3-31.9-11.8-42.3zm4-.8c19.2 14.4 23.1 41.7 8.6 60.9 0 0 0 .1-.1.1 15.9-9.2 21.3-29.5 12.1-45.4-4.4-7.8-11.8-13.4-20.6-15.6zm-17.7 63.1l3 1.5.2-4.4 1.3-32.5v-25.6c-2-1-3.8-2.5-5.1-4.3l2.2 34.2-1.6 31.1zm-.6 12.6l3.4-4.7.1-1.4c-1-.2-2.1-.5-3.1-.8l-.4 6.9zm0-79.7c2 2.8 5.9 3.5 8.7 1.5 2.4-1.7 3.3-4.8 2.2-7.5-.6 3.2-3.7 5.3-6.9 4.7a5.71 5.71 0 0 1-4-2.9l.9 3.2-.9 1z\"/><path d=\"M370.2 285.1c-18.9-13.7-23.6-40-10.5-59.5-12.1 10.4-16.8 27.1-11.9 42.3 3.3 10.3 10.5 18.2 19.3 22.9 1.1.6 2.2 1.1 3.3 1.5l-.2-7.2zm4.4 2.8l-.3 5.7 3.1.8c6.6 1.4 13.6 1.1 20.4-1.1-5.8.3-11.6-.6-17-2.6-1.1-.4-2.1-.8-3.2-1.3-1-.4-2-.9-3-1.5z\"/><path d=\"M355.7 224.8c-8.7 2.2-16.2 7.8-20.7 15.6-9.2 15.9-3.7 36.2 12.1 45.4 0 0 0-.1-.1-.1-14.4-19.2-10.5-46.5 8.7-60.9zm18.9 63.1l1.5-30.9-2.2-34.2c-1.3 1.8-3.1 3.3-5.1 4.3v25.6l1.3 32.5.3 7.2.1 2.2.1 1.4 3.4 4.7.3-6.8.3-6zm-9.3-65.5c2.8 2 6.8 1.3 8.7-1.5l.9-.8-.9-3.2c-.9 1.5-2.3 2.5-4 2.9-3.2.6-6.3-1.5-6.9-4.7-1.1 2.5-.2 5.6 2.2 7.3z\"/></g><defs><path"
                        " id=\"B\" d=\"M343.3 191.3h-3.5v-11.2h-1.9v11.2h-3.5v-11.2h-2v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.8v-13.1h-1.9z\"/><path id=\"C\" d=\"M397.4 191.3h-3.5v-11.2H392v11.2h-3.5v-11.2h-1.9v5.8h-10.9v7.3h7.8v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/><path id=\"D\" d=\"M451.5 191.3H448v-11.2h-1.9v11.2h-3.5v-11.2h-1.9v5.8h-10.8v7.3h7.7v-1.9h-5.8v-3.5h8.9v5.4h12.7v-13.1h-1.9z\"/></defs></svg>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lb_icon_tether_2->setText(QString());
        radiousdt_2->setText(QString());
        coin_choice_2->setText(QCoreApplication::translate("exchange", "Currency :", nullptr));
        text_from->setText(QCoreApplication::translate("exchange", "Convert from :", nullptr));
        text_to->setText(QCoreApplication::translate("exchange", "to :", nullptr));
        send_exchange->setText(QCoreApplication::translate("exchange", "Exchange", nullptr));
        text_from_2->setText(QCoreApplication::translate("exchange", "Currency :", nullptr));
        wallet_address_2->setText(QCoreApplication::translate("exchange", "Address wallet :", nullptr));
        coin_amounth->setText(QCoreApplication::translate("exchange", "Amounth :", nullptr));
        text_to_2->setText(QCoreApplication::translate("exchange", "Currency :", nullptr));
        text_from_3->setText(QCoreApplication::translate("exchange", "Convert from :", nullptr));
        text_to_3->setText(QCoreApplication::translate("exchange", "to :", nullptr));
        text_to_4->setText(QCoreApplication::translate("exchange", "supply :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exchange: public Ui_exchange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCHANGE_H
