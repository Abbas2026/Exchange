/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QWidget *widget;
    QLabel *profile_icon;
    QTextEdit *textEdit_profname;
    QTextEdit *textEdit_userlevel;
    QTextEdit *textEdit_email;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QTextEdit *textEdit_username;
    QLineEdit *lineEdit_5;
    QTextEdit *textEdit_numberphone;
    QLineEdit *lineEdit_6;
    QTextEdit *textEdit_address;
    QLineEdit *lineEdit_7;
    QTextEdit *textEdit_firstname;
    QLineEdit *lineEdit_8;
    QTextEdit *textEdit_lastname;
    QLineEdit *lineEdit_9;
    QTextEdit *textEdit_password;
    QLineEdit *lineEdit_10;
    QTextEdit *textEdit_Transactionfees;
    QTextEdit *textEdit_userlevel_value;
    QTextEdit *textEdit_email_value;
    QTextEdit *textEdit_username_value;
    QTextEdit *textEdit_numberphone_value;
    QTextEdit *textEdit_address_value;
    QTextEdit *textEdit_firstname_value;
    QTextEdit *textEdit_lastname_value;
    QTextEdit *textEdit_password_value;
    QPushButton *edit_information_btn;
    QTextEdit *textEdit_Transactionfees_value;
    QLineEdit *lineEdit_11;
    QTextEdit *text_authentication;
    QWidget *widget_2;
    QPushButton *Mywallets_btn;
    QPushButton *Transmission_btn;
    QLabel *app_logo;
    QPushButton *Dashboard_btn;
    QPushButton *Authentication_btn;
    QLabel *app_name;
    QPushButton *Profile_btn;
    QPushButton *currentprice_btn;
    QPushButton *deposit_btn;
    QPushButton *market_btn;
    QPushButton *withdrawal_btn;
    QPushButton *easyexchange_btn;
    QWidget *widget_3;
    QTextEdit *textEdit_profname_4;
    QTextEdit *textEdit_userlevel_4;
    QTextEdit *textEdit_email_4;
    QLineEdit *lineEdit_32;
    QLineEdit *lineEdit_33;
    QLineEdit *lineEdit_34;
    QTextEdit *textEdit_username_4;
    QLineEdit *lineEdit_35;
    QTextEdit *textEdit_numberphone_4;
    QLineEdit *lineEdit_36;
    QTextEdit *textEdit_address_4;
    QLineEdit *lineEdit_37;
    QTextEdit *textEdit_firstname_4;
    QLineEdit *lineEdit_38;
    QTextEdit *textEdit_lastname_4;
    QLineEdit *lineEdit_39;
    QTextEdit *textEdit_password_4;
    QLineEdit *lineEdit_40;
    QTextEdit *textEdit_Transactionfees_4;
    QTextEdit *textEdit_userlevel_value_4;
    QTextEdit *textEdit_email_value_4;
    QTextEdit *textEdit_firstname_value_4;
    QTextEdit *textEdit_lastname_value_4;
    QPushButton *recordchange_btn;
    QTextEdit *textEdit_Transactionfees_value_4;
    QLineEdit *lineEdit_41;
    QLineEdit *lineEdit_username_4;
    QLineEdit *lineEdit_numberphone_4;
    QLineEdit *lineEdit_address_4;
    QLineEdit *lineEdit_firstname_4;
    QLineEdit *lineEdit_lastname_4;
    QPushButton *change_pas;
    QPushButton *backt_btn;
    QLineEdit *lineEdit_password_4;
    QPushButton *backt_btn_2;
    QLabel *captchaLabel;
    QLineEdit *inputField;
    QTextEdit *textEdit_captcha;
    QWidget *paswidget;
    QWidget *widget_4;
    QPushButton *confirm_pas_btn;
    QLabel *label_20;
    QTextEdit *textEdit_24;
    QTextEdit *textEdit_30;
    QLineEdit *pas_lineEdit;
    QLabel *label_21;
    QPushButton *backtoeditprof_btn;
    QLabel *label_22;
    QLineEdit *reppas_lineEdit;
    QLabel *label_23;

    void setupUi(QWidget *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName("profile");
        profile->resize(1278, 904);
        profile->setMinimumSize(QSize(1278, 904));
        profile->setMaximumSize(QSize(1278, 904));
        widget = new QWidget(profile);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1031, 911));
        widget->setStyleSheet(QString::fromUtf8("background-color: #10161f;"));
        profile_icon = new QLabel(widget);
        profile_icon->setObjectName("profile_icon");
        profile_icon->setGeometry(QRect(20, 19, 60, 60));
        profile_icon->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:30px"));
        profile_icon->setScaledContents(true);
        textEdit_profname = new QTextEdit(widget);
        textEdit_profname->setObjectName("textEdit_profname");
        textEdit_profname->setEnabled(false);
        textEdit_profname->setGeometry(QRect(90, 30, 361, 41));
        textEdit_profname->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"font: 18pt \"Orienta\";\n"
""));
        textEdit_profname->setReadOnly(true);
        textEdit_userlevel = new QTextEdit(widget);
        textEdit_userlevel->setObjectName("textEdit_userlevel");
        textEdit_userlevel->setEnabled(false);
        textEdit_userlevel->setGeometry(QRect(20, 120, 231, 41));
        textEdit_userlevel->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_userlevel->setReadOnly(true);
        textEdit_email = new QTextEdit(widget);
        textEdit_email->setObjectName("textEdit_email");
        textEdit_email->setEnabled(false);
        textEdit_email->setGeometry(QRect(20, 180, 231, 41));
        textEdit_email->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_email->setReadOnly(true);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(20, 110, 990, 2));
        lineEdit_2->setMinimumSize(QSize(0, 1));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(20, 170, 990, 2));
        lineEdit_3->setMinimumSize(QSize(0, 1));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(20, 230, 990, 2));
        lineEdit_4->setMinimumSize(QSize(0, 1));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_username = new QTextEdit(widget);
        textEdit_username->setObjectName("textEdit_username");
        textEdit_username->setEnabled(false);
        textEdit_username->setGeometry(QRect(20, 240, 231, 41));
        textEdit_username->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_username->setReadOnly(true);
        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(20, 290, 990, 2));
        lineEdit_5->setMinimumSize(QSize(0, 1));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_numberphone = new QTextEdit(widget);
        textEdit_numberphone->setObjectName("textEdit_numberphone");
        textEdit_numberphone->setEnabled(false);
        textEdit_numberphone->setGeometry(QRect(20, 300, 231, 41));
        textEdit_numberphone->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_numberphone->setReadOnly(true);
        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(20, 350, 990, 2));
        lineEdit_6->setMinimumSize(QSize(0, 1));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_address = new QTextEdit(widget);
        textEdit_address->setObjectName("textEdit_address");
        textEdit_address->setEnabled(false);
        textEdit_address->setGeometry(QRect(20, 360, 231, 41));
        textEdit_address->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_address->setReadOnly(true);
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setEnabled(false);
        lineEdit_7->setGeometry(QRect(20, 410, 990, 2));
        lineEdit_7->setMinimumSize(QSize(0, 1));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_firstname = new QTextEdit(widget);
        textEdit_firstname->setObjectName("textEdit_firstname");
        textEdit_firstname->setEnabled(false);
        textEdit_firstname->setGeometry(QRect(20, 420, 231, 41));
        textEdit_firstname->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_firstname->setReadOnly(true);
        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(20, 470, 990, 2));
        lineEdit_8->setMinimumSize(QSize(0, 1));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_lastname = new QTextEdit(widget);
        textEdit_lastname->setObjectName("textEdit_lastname");
        textEdit_lastname->setEnabled(false);
        textEdit_lastname->setGeometry(QRect(20, 480, 231, 41));
        textEdit_lastname->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_lastname->setReadOnly(true);
        lineEdit_9 = new QLineEdit(widget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setEnabled(false);
        lineEdit_9->setGeometry(QRect(20, 530, 990, 2));
        lineEdit_9->setMinimumSize(QSize(0, 1));
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_password = new QTextEdit(widget);
        textEdit_password->setObjectName("textEdit_password");
        textEdit_password->setEnabled(false);
        textEdit_password->setGeometry(QRect(20, 540, 231, 41));
        textEdit_password->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_password->setReadOnly(true);
        lineEdit_10 = new QLineEdit(widget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setEnabled(false);
        lineEdit_10->setGeometry(QRect(20, 590, 990, 2));
        lineEdit_10->setMinimumSize(QSize(0, 1));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_Transactionfees = new QTextEdit(widget);
        textEdit_Transactionfees->setObjectName("textEdit_Transactionfees");
        textEdit_Transactionfees->setEnabled(false);
        textEdit_Transactionfees->setGeometry(QRect(20, 600, 231, 41));
        textEdit_Transactionfees->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_Transactionfees->setReadOnly(true);
        textEdit_userlevel_value = new QTextEdit(widget);
        textEdit_userlevel_value->setObjectName("textEdit_userlevel_value");
        textEdit_userlevel_value->setEnabled(false);
        textEdit_userlevel_value->setGeometry(QRect(840, 120, 171, 41));
        textEdit_userlevel_value->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        textEdit_userlevel_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_userlevel_value->setReadOnly(true);
        textEdit_email_value = new QTextEdit(widget);
        textEdit_email_value->setObjectName("textEdit_email_value");
        textEdit_email_value->setEnabled(false);
        textEdit_email_value->setGeometry(QRect(750, 180, 261, 41));
        textEdit_email_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_email_value->setReadOnly(true);
        textEdit_username_value = new QTextEdit(widget);
        textEdit_username_value->setObjectName("textEdit_username_value");
        textEdit_username_value->setEnabled(false);
        textEdit_username_value->setGeometry(QRect(810, 240, 201, 41));
        textEdit_username_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_username_value->setReadOnly(true);
        textEdit_numberphone_value = new QTextEdit(widget);
        textEdit_numberphone_value->setObjectName("textEdit_numberphone_value");
        textEdit_numberphone_value->setEnabled(false);
        textEdit_numberphone_value->setGeometry(QRect(820, 300, 191, 41));
        textEdit_numberphone_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_numberphone_value->setReadOnly(true);
        textEdit_address_value = new QTextEdit(widget);
        textEdit_address_value->setObjectName("textEdit_address_value");
        textEdit_address_value->setEnabled(false);
        textEdit_address_value->setGeometry(QRect(840, 360, 171, 41));
        textEdit_address_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_address_value->setReadOnly(true);
        textEdit_firstname_value = new QTextEdit(widget);
        textEdit_firstname_value->setObjectName("textEdit_firstname_value");
        textEdit_firstname_value->setEnabled(false);
        textEdit_firstname_value->setGeometry(QRect(840, 420, 171, 41));
        textEdit_firstname_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_firstname_value->setReadOnly(true);
        textEdit_lastname_value = new QTextEdit(widget);
        textEdit_lastname_value->setObjectName("textEdit_lastname_value");
        textEdit_lastname_value->setEnabled(false);
        textEdit_lastname_value->setGeometry(QRect(840, 480, 171, 41));
        textEdit_lastname_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_lastname_value->setReadOnly(true);
        textEdit_password_value = new QTextEdit(widget);
        textEdit_password_value->setObjectName("textEdit_password_value");
        textEdit_password_value->setEnabled(false);
        textEdit_password_value->setGeometry(QRect(840, 540, 171, 41));
        textEdit_password_value->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        textEdit_password_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #10161f;\n"
"border:none;\n"
""));
        textEdit_password_value->setReadOnly(true);
        edit_information_btn = new QPushButton(widget);
        edit_information_btn->setObjectName("edit_information_btn");
        edit_information_btn->setEnabled(true);
        edit_information_btn->setGeometry(QRect(20, 810, 161, 41));
        edit_information_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        edit_information_btn->setStyleSheet(QString::fromUtf8("          background-color: #27AE60 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        textEdit_Transactionfees_value = new QTextEdit(widget);
        textEdit_Transactionfees_value->setObjectName("textEdit_Transactionfees_value");
        textEdit_Transactionfees_value->setEnabled(false);
        textEdit_Transactionfees_value->setGeometry(QRect(840, 600, 171, 41));
        textEdit_Transactionfees_value->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_Transactionfees_value->setReadOnly(true);
        lineEdit_11 = new QLineEdit(widget);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setEnabled(false);
        lineEdit_11->setGeometry(QRect(20, 650, 990, 2));
        lineEdit_11->setMinimumSize(QSize(0, 1));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        text_authentication = new QTextEdit(widget);
        text_authentication->setObjectName("text_authentication");
        text_authentication->setEnabled(false);
        text_authentication->setGeometry(QRect(110, 670, 801, 61));
        text_authentication->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"border:none;\n"
"color:rgb(170, 6, 0);\n"
""));
        text_authentication->setReadOnly(true);
        widget_2 = new QWidget(profile);
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
        Profile_btn = new QPushButton(widget_2);
        Profile_btn->setObjectName("Profile_btn");
        Profile_btn->setGeometry(QRect(10, 350, 211, 41));
        Profile_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Profile_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;\n"
"color: #c97940;\n"
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
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
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
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: 1px;"));
        easyexchange_btn = new QPushButton(widget_2);
        easyexchange_btn->setObjectName("easyexchange_btn");
        easyexchange_btn->setGeometry(QRect(40, 490, 151, 41));
        easyexchange_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        easyexchange_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 28pt \"Bangers\";\n"
"letter-spacing: -1px;"));
        widget_3 = new QWidget(profile);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 0, 1031, 911));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: #10161f;"));
        textEdit_profname_4 = new QTextEdit(widget_3);
        textEdit_profname_4->setObjectName("textEdit_profname_4");
        textEdit_profname_4->setEnabled(false);
        textEdit_profname_4->setGeometry(QRect(320, 30, 361, 41));
        textEdit_profname_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"font: 18pt \"Orienta\";\n"
""));
        textEdit_profname_4->setReadOnly(true);
        textEdit_userlevel_4 = new QTextEdit(widget_3);
        textEdit_userlevel_4->setObjectName("textEdit_userlevel_4");
        textEdit_userlevel_4->setEnabled(false);
        textEdit_userlevel_4->setGeometry(QRect(20, 120, 231, 41));
        textEdit_userlevel_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_userlevel_4->setReadOnly(true);
        textEdit_email_4 = new QTextEdit(widget_3);
        textEdit_email_4->setObjectName("textEdit_email_4");
        textEdit_email_4->setEnabled(false);
        textEdit_email_4->setGeometry(QRect(20, 180, 231, 41));
        textEdit_email_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_email_4->setReadOnly(true);
        lineEdit_32 = new QLineEdit(widget_3);
        lineEdit_32->setObjectName("lineEdit_32");
        lineEdit_32->setEnabled(false);
        lineEdit_32->setGeometry(QRect(20, 110, 990, 2));
        lineEdit_32->setMinimumSize(QSize(0, 1));
        lineEdit_32->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        lineEdit_33 = new QLineEdit(widget_3);
        lineEdit_33->setObjectName("lineEdit_33");
        lineEdit_33->setEnabled(false);
        lineEdit_33->setGeometry(QRect(20, 170, 990, 2));
        lineEdit_33->setMinimumSize(QSize(0, 1));
        lineEdit_33->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        lineEdit_34 = new QLineEdit(widget_3);
        lineEdit_34->setObjectName("lineEdit_34");
        lineEdit_34->setEnabled(false);
        lineEdit_34->setGeometry(QRect(20, 230, 990, 2));
        lineEdit_34->setMinimumSize(QSize(0, 1));
        lineEdit_34->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_username_4 = new QTextEdit(widget_3);
        textEdit_username_4->setObjectName("textEdit_username_4");
        textEdit_username_4->setEnabled(false);
        textEdit_username_4->setGeometry(QRect(20, 240, 231, 41));
        textEdit_username_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_username_4->setReadOnly(true);
        lineEdit_35 = new QLineEdit(widget_3);
        lineEdit_35->setObjectName("lineEdit_35");
        lineEdit_35->setEnabled(false);
        lineEdit_35->setGeometry(QRect(20, 290, 990, 2));
        lineEdit_35->setMinimumSize(QSize(0, 1));
        lineEdit_35->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_numberphone_4 = new QTextEdit(widget_3);
        textEdit_numberphone_4->setObjectName("textEdit_numberphone_4");
        textEdit_numberphone_4->setEnabled(false);
        textEdit_numberphone_4->setGeometry(QRect(20, 300, 231, 41));
        textEdit_numberphone_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_numberphone_4->setReadOnly(true);
        lineEdit_36 = new QLineEdit(widget_3);
        lineEdit_36->setObjectName("lineEdit_36");
        lineEdit_36->setEnabled(false);
        lineEdit_36->setGeometry(QRect(20, 350, 990, 2));
        lineEdit_36->setMinimumSize(QSize(0, 1));
        lineEdit_36->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_address_4 = new QTextEdit(widget_3);
        textEdit_address_4->setObjectName("textEdit_address_4");
        textEdit_address_4->setEnabled(false);
        textEdit_address_4->setGeometry(QRect(20, 360, 231, 41));
        textEdit_address_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_address_4->setReadOnly(true);
        lineEdit_37 = new QLineEdit(widget_3);
        lineEdit_37->setObjectName("lineEdit_37");
        lineEdit_37->setEnabled(false);
        lineEdit_37->setGeometry(QRect(20, 410, 990, 2));
        lineEdit_37->setMinimumSize(QSize(0, 1));
        lineEdit_37->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_firstname_4 = new QTextEdit(widget_3);
        textEdit_firstname_4->setObjectName("textEdit_firstname_4");
        textEdit_firstname_4->setEnabled(false);
        textEdit_firstname_4->setGeometry(QRect(20, 420, 231, 41));
        textEdit_firstname_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_firstname_4->setReadOnly(true);
        lineEdit_38 = new QLineEdit(widget_3);
        lineEdit_38->setObjectName("lineEdit_38");
        lineEdit_38->setEnabled(false);
        lineEdit_38->setGeometry(QRect(20, 470, 990, 2));
        lineEdit_38->setMinimumSize(QSize(0, 1));
        lineEdit_38->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_lastname_4 = new QTextEdit(widget_3);
        textEdit_lastname_4->setObjectName("textEdit_lastname_4");
        textEdit_lastname_4->setEnabled(false);
        textEdit_lastname_4->setGeometry(QRect(20, 480, 231, 41));
        textEdit_lastname_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_lastname_4->setReadOnly(true);
        lineEdit_39 = new QLineEdit(widget_3);
        lineEdit_39->setObjectName("lineEdit_39");
        lineEdit_39->setEnabled(false);
        lineEdit_39->setGeometry(QRect(20, 530, 990, 2));
        lineEdit_39->setMinimumSize(QSize(0, 1));
        lineEdit_39->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_password_4 = new QTextEdit(widget_3);
        textEdit_password_4->setObjectName("textEdit_password_4");
        textEdit_password_4->setEnabled(false);
        textEdit_password_4->setGeometry(QRect(20, 540, 231, 41));
        textEdit_password_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_password_4->setReadOnly(true);
        lineEdit_40 = new QLineEdit(widget_3);
        lineEdit_40->setObjectName("lineEdit_40");
        lineEdit_40->setEnabled(false);
        lineEdit_40->setGeometry(QRect(20, 590, 990, 2));
        lineEdit_40->setMinimumSize(QSize(0, 1));
        lineEdit_40->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        textEdit_Transactionfees_4 = new QTextEdit(widget_3);
        textEdit_Transactionfees_4->setObjectName("textEdit_Transactionfees_4");
        textEdit_Transactionfees_4->setEnabled(false);
        textEdit_Transactionfees_4->setGeometry(QRect(20, 600, 231, 41));
        textEdit_Transactionfees_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_Transactionfees_4->setReadOnly(true);
        textEdit_userlevel_value_4 = new QTextEdit(widget_3);
        textEdit_userlevel_value_4->setObjectName("textEdit_userlevel_value_4");
        textEdit_userlevel_value_4->setEnabled(false);
        textEdit_userlevel_value_4->setGeometry(QRect(840, 120, 171, 41));
        textEdit_userlevel_value_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        textEdit_userlevel_value_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_userlevel_value_4->setReadOnly(true);
        textEdit_email_value_4 = new QTextEdit(widget_3);
        textEdit_email_value_4->setObjectName("textEdit_email_value_4");
        textEdit_email_value_4->setEnabled(false);
        textEdit_email_value_4->setGeometry(QRect(750, 180, 261, 41));
        textEdit_email_value_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_email_value_4->setReadOnly(true);
        textEdit_firstname_value_4 = new QTextEdit(widget_3);
        textEdit_firstname_value_4->setObjectName("textEdit_firstname_value_4");
        textEdit_firstname_value_4->setEnabled(false);
        textEdit_firstname_value_4->setGeometry(QRect(840, 420, 171, 41));
        textEdit_firstname_value_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_firstname_value_4->setReadOnly(true);
        textEdit_lastname_value_4 = new QTextEdit(widget_3);
        textEdit_lastname_value_4->setObjectName("textEdit_lastname_value_4");
        textEdit_lastname_value_4->setEnabled(false);
        textEdit_lastname_value_4->setGeometry(QRect(840, 480, 171, 41));
        textEdit_lastname_value_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_lastname_value_4->setReadOnly(true);
        recordchange_btn = new QPushButton(widget_3);
        recordchange_btn->setObjectName("recordchange_btn");
        recordchange_btn->setEnabled(true);
        recordchange_btn->setGeometry(QRect(30, 790, 161, 41));
        recordchange_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        recordchange_btn->setStyleSheet(QString::fromUtf8("          background-color: #27AE60 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        textEdit_Transactionfees_value_4 = new QTextEdit(widget_3);
        textEdit_Transactionfees_value_4->setObjectName("textEdit_Transactionfees_value_4");
        textEdit_Transactionfees_value_4->setEnabled(false);
        textEdit_Transactionfees_value_4->setGeometry(QRect(850, 600, 161, 41));
        textEdit_Transactionfees_value_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font: 16pt \"Orienta\";\n"
"color: #6f7988;\n"
"border:none;\n"
""));
        textEdit_Transactionfees_value_4->setReadOnly(true);
        lineEdit_41 = new QLineEdit(widget_3);
        lineEdit_41->setObjectName("lineEdit_41");
        lineEdit_41->setEnabled(false);
        lineEdit_41->setGeometry(QRect(20, 650, 990, 2));
        lineEdit_41->setMinimumSize(QSize(0, 1));
        lineEdit_41->setStyleSheet(QString::fromUtf8("background-color: #6f7988;\n"
""));
        lineEdit_username_4 = new QLineEdit(widget_3);
        lineEdit_username_4->setObjectName("lineEdit_username_4");
        lineEdit_username_4->setGeometry(QRect(790, 240, 161, 41));
        lineEdit_username_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_numberphone_4 = new QLineEdit(widget_3);
        lineEdit_numberphone_4->setObjectName("lineEdit_numberphone_4");
        lineEdit_numberphone_4->setEnabled(true);
        lineEdit_numberphone_4->setGeometry(QRect(790, 300, 161, 41));
        lineEdit_numberphone_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_address_4 = new QLineEdit(widget_3);
        lineEdit_address_4->setObjectName("lineEdit_address_4");
        lineEdit_address_4->setGeometry(QRect(690, 360, 321, 41));
        lineEdit_address_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_firstname_4 = new QLineEdit(widget_3);
        lineEdit_firstname_4->setObjectName("lineEdit_firstname_4");
        lineEdit_firstname_4->setGeometry(QRect(790, 420, 161, 41));
        lineEdit_firstname_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_lastname_4 = new QLineEdit(widget_3);
        lineEdit_lastname_4->setObjectName("lineEdit_lastname_4");
        lineEdit_lastname_4->setGeometry(QRect(790, 480, 161, 41));
        lineEdit_lastname_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        change_pas = new QPushButton(widget_3);
        change_pas->setObjectName("change_pas");
        change_pas->setGeometry(QRect(670, 550, 111, 21));
        change_pas->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        change_pas->setStyleSheet(QString::fromUtf8("            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 14px;\n"
"           border: none;  \n"
"	background-color: rgb(0, 170, 0);"));
        backt_btn = new QPushButton(widget_3);
        backt_btn->setObjectName("backt_btn");
        backt_btn->setEnabled(true);
        backt_btn->setGeometry(QRect(30, 20, 41, 31));
        backt_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backt_btn->setStyleSheet(QString::fromUtf8("			background-color: #10161f;\n"
"			color: #6f7988;\n"
"            border-radius: 10px;\n"
"            font-size: 40px;\n"
"            border: none;  "));
        lineEdit_password_4 = new QLineEdit(widget_3);
        lineEdit_password_4->setObjectName("lineEdit_password_4");
        lineEdit_password_4->setEnabled(true);
        lineEdit_password_4->setGeometry(QRect(790, 540, 161, 41));
        lineEdit_password_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        lineEdit_password_4->setEchoMode(QLineEdit::EchoMode::PasswordEchoOnEdit);
        lineEdit_password_4->setReadOnly(true);
        backt_btn_2 = new QPushButton(widget_3);
        backt_btn_2->setObjectName("backt_btn_2");
        backt_btn_2->setEnabled(true);
        backt_btn_2->setGeometry(QRect(210, 790, 101, 41));
        backt_btn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backt_btn_2->setStyleSheet(QString::fromUtf8("          background-color: #BF360C;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        captchaLabel = new QLabel(widget_3);
        captchaLabel->setObjectName("captchaLabel");
        captchaLabel->setGeometry(QRect(400, 660, 221, 71));
        captchaLabel->setScaledContents(true);
        inputField = new QLineEdit(widget_3);
        inputField->setObjectName("inputField");
        inputField->setGeometry(QRect(790, 660, 161, 41));
        inputField->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 14pt \"Orienta\";\n"
"padding-left:10px;\n"
"color: rgb(0, 0, 0);"));
        textEdit_captcha = new QTextEdit(widget_3);
        textEdit_captcha->setObjectName("textEdit_captcha");
        textEdit_captcha->setEnabled(false);
        textEdit_captcha->setGeometry(QRect(20, 660, 231, 41));
        textEdit_captcha->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"font-size: 18px;\n"
"font: 16pt \"Orienta\";\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
""));
        textEdit_captcha->setReadOnly(true);
        paswidget = new QWidget(profile);
        paswidget->setObjectName("paswidget");
        paswidget->setGeometry(QRect(0, 0, 1031, 911));
        paswidget->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget_4 = new QWidget(paswidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(220, 200, 601, 351));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        confirm_pas_btn = new QPushButton(widget_4);
        confirm_pas_btn->setObjectName("confirm_pas_btn");
        confirm_pas_btn->setEnabled(true);
        confirm_pas_btn->setGeometry(QRect(220, 280, 161, 41));
        confirm_pas_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        confirm_pas_btn->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_20 = new QLabel(widget_4);
        label_20->setObjectName("label_20");
        label_20->setEnabled(false);
        label_20->setGeometry(QRect(40, 120, 111, 41));
        label_20->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
"background-color: rgb(29, 38, 51);"));
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textEdit_24 = new QTextEdit(widget_4);
        textEdit_24->setObjectName("textEdit_24");
        textEdit_24->setEnabled(false);
        textEdit_24->setGeometry(QRect(190, 50, 201, 51));
        textEdit_24->setStyleSheet(QString::fromUtf8("color:#6f7988;\n"
"padding-left:10px;\n"
""));
        textEdit_24->setLineWrapMode(QTextEdit::LineWrapMode::WidgetWidth);
        textEdit_24->setLineWrapColumnOrWidth(10);
        textEdit_24->setReadOnly(true);
        textEdit_24->setOverwriteMode(true);
        textEdit_30 = new QTextEdit(widget_4);
        textEdit_30->setObjectName("textEdit_30");
        textEdit_30->setEnabled(false);
        textEdit_30->setGeometry(QRect(220, 40, 171, 40));
        textEdit_30->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"color: rgb(255, 255, 255);"));
        textEdit_30->setReadOnly(true);
        pas_lineEdit = new QLineEdit(widget_4);
        pas_lineEdit->setObjectName("pas_lineEdit");
        pas_lineEdit->setGeometry(QRect(130, 120, 371, 41));
        pas_lineEdit->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 20px; \n"
"    background-color: #1d2633   ; \n"
"color: rgb(255, 255, 255);\n"
"    font-size: 12px;\n"
"\n"
""));
        pas_lineEdit->setEchoMode(QLineEdit::EchoMode::PasswordEchoOnEdit);
        label_21 = new QLabel(widget_4);
        label_21->setObjectName("label_21");
        label_21->setEnabled(false);
        label_21->setGeometry(QRect(480, 120, 81, 41));
        label_21->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
"background-color: rgb(29, 38, 51);"));
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        backtoeditprof_btn = new QPushButton(widget_4);
        backtoeditprof_btn->setObjectName("backtoeditprof_btn");
        backtoeditprof_btn->setEnabled(true);
        backtoeditprof_btn->setGeometry(QRect(20, 10, 20, 21));
        backtoeditprof_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backtoeditprof_btn->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"color: #6f7988;\n"
"            border-radius: 10px;\n"
"            font-size: 30px;\n"
"           border: none;  "));
        label_22 = new QLabel(widget_4);
        label_22->setObjectName("label_22");
        label_22->setEnabled(false);
        label_22->setGeometry(QRect(40, 200, 111, 41));
        label_22->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
"background-color: rgb(29, 38, 51);"));
        label_22->setAlignment(Qt::AlignmentFlag::AlignCenter);
        reppas_lineEdit = new QLineEdit(widget_4);
        reppas_lineEdit->setObjectName("reppas_lineEdit");
        reppas_lineEdit->setGeometry(QRect(130, 200, 371, 41));
        reppas_lineEdit->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 20px; \n"
"    background-color: #1d2633   ; \n"
"color: rgb(255, 255, 255);\n"
"    font-size: 12px;\n"
"\n"
""));
        reppas_lineEdit->setEchoMode(QLineEdit::EchoMode::PasswordEchoOnEdit);
        label_23 = new QLabel(widget_4);
        label_23->setObjectName("label_23");
        label_23->setEnabled(false);
        label_23->setGeometry(QRect(480, 200, 81, 41));
        label_23->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
"background-color: rgb(29, 38, 51);"));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);
        confirm_pas_btn->raise();
        textEdit_24->raise();
        textEdit_30->raise();
        pas_lineEdit->raise();
        label_20->raise();
        label_21->raise();
        backtoeditprof_btn->raise();
        label_22->raise();
        reppas_lineEdit->raise();
        label_23->raise();
        paswidget->raise();
        widget_3->raise();
        widget_2->raise();
        widget->raise();

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QWidget *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "HELIACAL EXCHANGE", nullptr));
        profile_icon->setText(QString());
        edit_information_btn->setText(QCoreApplication::translate("profile", "Edit information", nullptr));
        Mywallets_btn->setText(QCoreApplication::translate("profile", "My wallets", nullptr));
        Transmission_btn->setText(QCoreApplication::translate("profile", "Transmission", nullptr));
        app_logo->setText(QString());
        Dashboard_btn->setText(QCoreApplication::translate("profile", "Dashboard", nullptr));
        Authentication_btn->setText(QCoreApplication::translate("profile", "Authentication", nullptr));
        app_name->setText(QCoreApplication::translate("profile", "heliacal exchange", nullptr));
        Profile_btn->setText(QCoreApplication::translate("profile", "Profile", nullptr));
        currentprice_btn->setText(QCoreApplication::translate("profile", "Current price", nullptr));
        deposit_btn->setText(QCoreApplication::translate("profile", "Deposit ", nullptr));
        market_btn->setText(QCoreApplication::translate("profile", "market", nullptr));
        withdrawal_btn->setText(QCoreApplication::translate("profile", " withdrawal", nullptr));
        easyexchange_btn->setText(QCoreApplication::translate("profile", " Exchange", nullptr));
        recordchange_btn->setText(QCoreApplication::translate("profile", "Record changes", nullptr));
        change_pas->setText(QCoreApplication::translate("profile", "change password", nullptr));
        backt_btn->setText(QCoreApplication::translate("profile", "\342\206\220", nullptr));
        backt_btn_2->setText(QCoreApplication::translate("profile", "cancel", nullptr));
        captchaLabel->setText(QString());
        confirm_pas_btn->setText(QCoreApplication::translate("profile", "confirm", nullptr));
        label_20->setText(QCoreApplication::translate("profile", "Password ", nullptr));
        textEdit_24->setPlaceholderText(QString());
        textEdit_30->setHtml(QCoreApplication::translate("profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_21->setText(QString());
        backtoeditprof_btn->setText(QCoreApplication::translate("profile", "\342\206\220", nullptr));
        label_22->setText(QCoreApplication::translate("profile", "Repeat", nullptr));
        label_23->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
