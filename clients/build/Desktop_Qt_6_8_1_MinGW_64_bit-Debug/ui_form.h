/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditName;
    QLabel *label_phone;
    QPushButton *pushButton;
    QLabel *label_address;
    QLabel *label_password;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEdit_2;
    QLabel *label_invitationcode;
    QPushButton *pushButton_gosignin;
    QLabel *label_email;
    QLineEdit *lineEdit;
    QLineEdit *lineEditPhone;
    QTextEdit *textEdit;
    QLineEdit *lineEditAddress;
    QLabel *label_name;
    QLineEdit *lineEditPassword;
    QLineEdit *invitationcode;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *form)
    {
        if (form->objectName().isEmpty())
            form->setObjectName("form");
        form->resize(1000, 600);
        form->setMinimumSize(QSize(1000, 600));
        form->setMaximumSize(QSize(10000, 600));
        form->setStyleSheet(QString::fromUtf8("background-color:#212121"));
        centralwidget = new QWidget(form);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:#212121"));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(750, 230, 201, 31));
        lineEditName->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #ffcc00; \n"
"    color: #333333; \n"
"    font-size: 12px;\n"
""));
        label_phone = new QLabel(centralwidget);
        label_phone->setObjectName("label_phone");
        label_phone->setGeometry(QRect(620, 350, 61, 20));
        label_phone->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(770, 470, 161, 41));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("          background-color: #BF360C;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_address = new QLabel(centralwidget);
        label_address->setObjectName("label_address");
        label_address->setGeometry(QRect(610, 290, 71, 20));
        label_address->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(590, 180, 91, 20));
        label_password->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        lineEditEmail = new QLineEdit(centralwidget);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(750, 130, 201, 28));
        lineEditEmail->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #ffcc00; \n"
"    color: #333333; \n"
"    font-size: 12px;\n"
"\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(800, 10, 101, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 26px;\n"
"           border: none;  "));
        label_invitationcode = new QLabel(centralwidget);
        label_invitationcode->setObjectName("label_invitationcode");
        label_invitationcode->setGeometry(QRect(560, 410, 121, 20));
        label_invitationcode->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        pushButton_gosignin = new QPushButton(centralwidget);
        pushButton_gosignin->setObjectName("pushButton_gosignin");
        pushButton_gosignin->setGeometry(QRect(900, 70, 61, 31));
        pushButton_gosignin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_email = new QLabel(centralwidget);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(620, 130, 61, 20));
        label_email->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(700, 70, 191, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(255, 255, 255);\n"
"    font-size: 14px;\n"
"\n"
""));
        lineEditPhone = new QLineEdit(centralwidget);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setGeometry(QRect(750, 350, 201, 31));
        lineEditPhone->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #ffcc00; \n"
"    color: #333333; \n"
"    font-size: 12px;\n"
""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(550, 470, 181, 41));
        textEdit->setStyleSheet(QString::fromUtf8("border:none;"));
        lineEditAddress = new QLineEdit(centralwidget);
        lineEditAddress->setObjectName("lineEditAddress");
        lineEditAddress->setGeometry(QRect(750, 290, 201, 28));
        lineEditAddress->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #ffcc00; \n"
"    color: #333333; \n"
"    font-size: 12px;\n"
""));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(620, 230, 61, 20));
        label_name->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(750, 180, 201, 28));
        lineEditPassword->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color:#ffcc00; \n"
"    color: #333333; \n"
"    font-size: 12px;\n"
""));
        invitationcode = new QLineEdit(centralwidget);
        invitationcode->setObjectName("invitationcode");
        invitationcode->setGeometry(QRect(750, 410, 201, 31));
        invitationcode->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #ffcc00; \n"
"    color: #333333; \n"
"    font-size: 12px;\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 60, 471, 461));
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"border:none;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("E:/Downloads/Jowhareh_galleries_poster_b232edcc-d05d-4849-9fd0-e503d64710f0.jpeg")));
        label_6->setScaledContents(true);
        form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(form);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 25));
        form->setMenuBar(menubar);
        statusbar = new QStatusBar(form);
        statusbar->setObjectName("statusbar");
        form->setStatusBar(statusbar);

        retranslateUi(form);

        QMetaObject::connectSlotsByName(form);
    } // setupUi

    void retranslateUi(QMainWindow *form)
    {
        form->setWindowTitle(QCoreApplication::translate("form", "form", nullptr));
        lineEditName->setPlaceholderText(QCoreApplication::translate("form", "\330\247\330\256\330\252\333\214\330\247\330\261\333\214", nullptr));
        label_phone->setText(QCoreApplication::translate("form", "phone:", nullptr));
        pushButton->setText(QCoreApplication::translate("form", "register", nullptr));
        label_address->setText(QCoreApplication::translate("form", "address:", nullptr));
        label_password->setText(QCoreApplication::translate("form", "password :", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("form", "Sign up", nullptr));
        label_invitationcode->setText(QCoreApplication::translate("form", "invitationcode:", nullptr));
        pushButton_gosignin->setText(QCoreApplication::translate("form", "Sign in", nullptr));
        label_email->setText(QCoreApplication::translate("form", "email :", nullptr));
        lineEdit->setText(QCoreApplication::translate("form", "Have an account? Sign in now.", nullptr));
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("form", "\330\247\330\256\330\252\333\214\330\247\330\261\333\214", nullptr));
        lineEditAddress->setPlaceholderText(QCoreApplication::translate("form", "\330\247\330\256\330\252\333\214\330\247\330\261\333\214", nullptr));
        label_name->setText(QCoreApplication::translate("form", "name:", nullptr));
        invitationcode->setPlaceholderText(QCoreApplication::translate("form", "\330\247\330\256\330\252\333\214\330\247\330\261\333\214", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class form: public Ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
