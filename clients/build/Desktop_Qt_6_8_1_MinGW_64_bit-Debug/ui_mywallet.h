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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mywallet
{
public:
    QWidget *widget;
    QPushButton *Mywallets_btn;
    QPushButton *Transmission_btn;
    QLabel *app_logo;
    QPushButton *Dashboard_btn;
    QPushButton *Authentication_btn;
    QLabel *app_name;
    QPushButton *easyexchange_btn;
    QPushButton *Profile_btn;
    QPushButton *currentprice_btn;
    QPushButton *Settings_btn;
    QPushButton *market_btn;
    QPushButton *creatwallet_btn;
    QTableWidget *tableWidget;
    QWidget *createwallet_widget;
    QWidget *widget_2;
    QPushButton *continue_btn;
    QLabel *label_1;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_14;
    QWidget *createwallet_widget_2;
    QWidget *widget_3;
    QPushButton *save_wallet_btn;
    QLabel *label_20;
    QTextEdit *textEdit_24;
    QTextEdit *textEdit_30;
    QLineEdit *namewalllet_lineedit;
    QLabel *label_21;

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
        app_logo = new QLabel(widget);
        app_logo->setObjectName("app_logo");
        app_logo->setEnabled(true);
        app_logo->setGeometry(QRect(0, 0, 251, 151));
        app_logo->setPixmap(QPixmap(QString::fromUtf8("E:/Downloads/logo for a currency exchange named heliacal (1).png")));
        app_logo->setScaledContents(true);
        app_logo->setIndent(-6);
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
        app_name = new QLabel(widget);
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
        creatwallet_btn = new QPushButton(mywallet);
        creatwallet_btn->setObjectName("creatwallet_btn");
        creatwallet_btn->setGeometry(QRect(820, 20, 201, 41));
        creatwallet_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        creatwallet_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
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
        createwallet_widget = new QWidget(mywallet);
        createwallet_widget->setObjectName("createwallet_widget");
        createwallet_widget->setGeometry(QRect(0, 0, 1031, 911));
        createwallet_widget->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget_2 = new QWidget(createwallet_widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(220, 200, 601, 531));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        continue_btn = new QPushButton(widget_2);
        continue_btn->setObjectName("continue_btn");
        continue_btn->setEnabled(true);
        continue_btn->setGeometry(QRect(220, 440, 161, 41));
        continue_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        continue_btn->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_1 = new QLabel(widget_2);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(60, 180, 41, 41));
        label_1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_1->setStyleSheet(QString::fromUtf8("color:#6f7988;\n"
""));
        label_1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 180, 41, 41));
        label_4->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
""));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(100, 180, 141, 40));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 22px;\n"
"padding-left:10px;\n"
""));
        textEdit->setReadOnly(true);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 270, 41, 41));
        label_5->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
""));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(350, 270, 41, 41));
        label_6->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
""));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 360, 41, 41));
        label_7->setStyleSheet(QString::fromUtf8("color:#6f7988;\n"
""));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(350, 360, 41, 41));
        label_8->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
""));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textEdit_2 = new QTextEdit(widget_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(140, 90, 341, 51));
        textEdit_2->setStyleSheet(QString::fromUtf8("color:#6f7988;\n"
"padding-left:10px;\n"
""));
        textEdit_2->setLineWrapMode(QTextEdit::LineWrapMode::WidgetWidth);
        textEdit_2->setLineWrapColumnOrWidth(10);
        textEdit_2->setReadOnly(true);
        textEdit_2->setOverwriteMode(true);
        textEdit_3 = new QTextEdit(widget_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(100, 270, 141, 40));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 22px;\n"
"padding-left:10px;\n"
""));
        textEdit_3->setReadOnly(true);
        textEdit_4 = new QTextEdit(widget_2);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(390, 270, 141, 40));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 22px;\n"
"padding-left:10px;\n"
""));
        textEdit_4->setReadOnly(true);
        textEdit_5 = new QTextEdit(widget_2);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(100, 360, 141, 40));
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 22px;\n"
"padding-left:10px;\n"
""));
        textEdit_5->setReadOnly(true);
        textEdit_6 = new QTextEdit(widget_2);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setEnabled(false);
        textEdit_6->setGeometry(QRect(390, 360, 141, 40));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 22px;\n"
"padding-left:10px;\n"
""));
        textEdit_6->setReadOnly(true);
        textEdit_13 = new QTextEdit(widget_2);
        textEdit_13->setObjectName("textEdit_13");
        textEdit_13->setEnabled(false);
        textEdit_13->setGeometry(QRect(390, 180, 141, 40));
        textEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size: 22px;\n"
"padding-left:10px;\n"
""));
        textEdit_13->setReadOnly(true);
        textEdit_14 = new QTextEdit(widget_2);
        textEdit_14->setObjectName("textEdit_14");
        textEdit_14->setEnabled(false);
        textEdit_14->setGeometry(QRect(230, 50, 171, 40));
        textEdit_14->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"color: rgb(255, 255, 255);"));
        textEdit_14->setReadOnly(true);
        createwallet_widget_2 = new QWidget(mywallet);
        createwallet_widget_2->setObjectName("createwallet_widget_2");
        createwallet_widget_2->setGeometry(QRect(0, 0, 1031, 911));
        createwallet_widget_2->setStyleSheet(QString::fromUtf8("background-color:#040609;"));
        widget_3 = new QWidget(createwallet_widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(220, 200, 601, 351));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: #10161f;\n"
"            color: white;\n"
"            border-radius: 18px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        save_wallet_btn = new QPushButton(widget_3);
        save_wallet_btn->setObjectName("save_wallet_btn");
        save_wallet_btn->setEnabled(true);
        save_wallet_btn->setGeometry(QRect(220, 270, 161, 41));
        save_wallet_btn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        save_wallet_btn->setStyleSheet(QString::fromUtf8("          background-color: #45aef5 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_20 = new QLabel(widget_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(40, 180, 111, 41));
        label_20->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
"background-color: rgb(29, 38, 51);"));
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textEdit_24 = new QTextEdit(widget_3);
        textEdit_24->setObjectName("textEdit_24");
        textEdit_24->setEnabled(false);
        textEdit_24->setGeometry(QRect(140, 90, 341, 51));
        textEdit_24->setStyleSheet(QString::fromUtf8("color:#6f7988;\n"
"padding-left:10px;\n"
""));
        textEdit_24->setLineWrapMode(QTextEdit::LineWrapMode::WidgetWidth);
        textEdit_24->setLineWrapColumnOrWidth(10);
        textEdit_24->setReadOnly(true);
        textEdit_24->setOverwriteMode(true);
        textEdit_30 = new QTextEdit(widget_3);
        textEdit_30->setObjectName("textEdit_30");
        textEdit_30->setEnabled(false);
        textEdit_30->setGeometry(QRect(230, 50, 171, 40));
        textEdit_30->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"color: rgb(255, 255, 255);"));
        textEdit_30->setReadOnly(true);
        namewalllet_lineedit = new QLineEdit(widget_3);
        namewalllet_lineedit->setObjectName("namewalllet_lineedit");
        namewalllet_lineedit->setGeometry(QRect(130, 180, 371, 41));
        namewalllet_lineedit->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 20px; \n"
"    background-color: #1d2633   ; \n"
"color: rgb(255, 255, 255);\n"
"    font-size: 12px;\n"
"\n"
""));
        label_21 = new QLabel(widget_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(480, 180, 81, 41));
        label_21->setStyleSheet(QString::fromUtf8("color: #6f7988;\n"
"background-color: rgb(29, 38, 51);"));
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        save_wallet_btn->raise();
        textEdit_24->raise();
        textEdit_30->raise();
        namewalllet_lineedit->raise();
        label_20->raise();
        label_21->raise();

        retranslateUi(mywallet);

        QMetaObject::connectSlotsByName(mywallet);
    } // setupUi

    void retranslateUi(QWidget *mywallet)
    {
        mywallet->setWindowTitle(QCoreApplication::translate("mywallet", "Form", nullptr));
        Mywallets_btn->setText(QCoreApplication::translate("mywallet", "My wallets", nullptr));
        Transmission_btn->setText(QCoreApplication::translate("mywallet", "Transmission", nullptr));
        app_logo->setText(QString());
        Dashboard_btn->setText(QCoreApplication::translate("mywallet", "Dashboard", nullptr));
        Authentication_btn->setText(QCoreApplication::translate("mywallet", "Authentication", nullptr));
        app_name->setText(QCoreApplication::translate("mywallet", "heliacal exchange", nullptr));
        easyexchange_btn->setText(QCoreApplication::translate("mywallet", "Easy exchange", nullptr));
        Profile_btn->setText(QCoreApplication::translate("mywallet", "Profile", nullptr));
        currentprice_btn->setText(QCoreApplication::translate("mywallet", "Current price", nullptr));
        Settings_btn->setText(QCoreApplication::translate("mywallet", "Settings", nullptr));
        market_btn->setText(QCoreApplication::translate("mywallet", "market", nullptr));
        creatwallet_btn->setText(QCoreApplication::translate("mywallet", "Create a wallet", nullptr));
        continue_btn->setText(QCoreApplication::translate("mywallet", "Continue", nullptr));
        label_1->setText(QCoreApplication::translate("mywallet", "1.", nullptr));
        label_4->setText(QCoreApplication::translate("mywallet", "2.", nullptr));
        label_5->setText(QCoreApplication::translate("mywallet", "3.", nullptr));
        label_6->setText(QCoreApplication::translate("mywallet", "4.", nullptr));
        label_7->setText(QCoreApplication::translate("mywallet", "5.", nullptr));
        label_8->setText(QCoreApplication::translate("mywallet", "6.", nullptr));
        textEdit_2->setPlaceholderText(QString());
        textEdit_14->setHtml(QCoreApplication::translate("mywallet", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        save_wallet_btn->setText(QCoreApplication::translate("mywallet", "Save", nullptr));
        label_20->setText(QCoreApplication::translate("mywallet", "Wallet name", nullptr));
        textEdit_24->setPlaceholderText(QString());
        textEdit_30->setHtml(QCoreApplication::translate("mywallet", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_21->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mywallet: public Ui_mywallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWALLET_H
