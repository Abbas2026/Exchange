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
    QLabel *label_copas;
    QLabel *label_password;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEdit_2;
    QLabel *label_invitationcode;
    QPushButton *pushButton_gosignin;
    QLabel *label_email;
    QLineEdit *lineEdit;
    QLineEdit *lineEditPhone;
    QTextEdit *textEdit;
    QLineEdit *confirmpassword;
    QLabel *label_name;
    QLineEdit *lineEditPassword;
    QLineEdit *invitationcode;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *form)
    {
        if (form->objectName().isEmpty())
            form->setObjectName("form");
        form->resize(1000, 600);
        form->setMinimumSize(QSize(1000, 600));
        form->setMaximumSize(QSize(1000, 600));
        form->setStyleSheet(QString::fromUtf8("background-color:#0A0C0E  ;"));
        centralwidget = new QWidget(form);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:#0A0C0E  ;"));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(750, 180, 201, 41));
        lineEditName->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: rgb(255, 255, 127); \n"
"    color: #333333; \n"
"    font-size: 14px;\n"
""));
        label_phone = new QLabel(centralwidget);
        label_phone->setObjectName("label_phone");
        label_phone->setGeometry(QRect(620, 370, 61, 20));
        label_phone->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"background-color:#0A0C0E;\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(770, 480, 161, 41));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("          background-color: #BF360C;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_copas = new QLabel(centralwidget);
        label_copas->setObjectName("label_copas");
        label_copas->setGeometry(QRect(530, 310, 161, 20));
        label_copas->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"background-color:#0A0C0E;\n"
""));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(590, 250, 111, 20));
        label_password->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"background-color:#0A0C0E;\n"
""));
        lineEditEmail = new QLineEdit(centralwidget);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(750, 120, 201, 41));
        lineEditEmail->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: rgb(255, 255, 127); \n"
"    color: #333333; \n"
"    font-size: 14px;\n"
"\n"
""));
        lineEditEmail->setCursorPosition(0);
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
        label_invitationcode->setGeometry(QRect(560, 430, 121, 20));
        label_invitationcode->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"background-color:#0A0C0E;\n"
""));
        pushButton_gosignin = new QPushButton(centralwidget);
        pushButton_gosignin->setObjectName("pushButton_gosignin");
        pushButton_gosignin->setGeometry(QRect(900, 60, 61, 31));
        pushButton_gosignin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        label_email = new QLabel(centralwidget);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(620, 130, 81, 20));
        label_email->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"background-color:#0A0C0E;\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(700, 60, 191, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(255, 255, 255);\n"
"    font-size: 14px;\n"
"\n"
""));
        lineEditPhone = new QLineEdit(centralwidget);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setGeometry(QRect(750, 360, 201, 41));
        lineEditPhone->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: rgb(255, 255, 127); \n"
"    color: #333333; \n"
"    font-size: 14px;\n"
""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(530, 480, 201, 41));
        textEdit->setStyleSheet(QString::fromUtf8("border:none;"));
        confirmpassword = new QLineEdit(centralwidget);
        confirmpassword->setObjectName("confirmpassword");
        confirmpassword->setGeometry(QRect(750, 300, 201, 41));
        confirmpassword->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: rgb(255, 255, 127); \n"
"    color: #333333; \n"
"    font-size: 14px;\n"
""));
        confirmpassword->setEchoMode(QLineEdit::EchoMode::Password);
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(590, 190, 111, 20));
        label_name->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"background-color:#0A0C0E;\n"
""));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(750, 240, 201, 41));
        lineEditPassword->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: rgb(255, 255, 127); \n"
"    color: #333333; \n"
"    font-size: 14px;\n"
""));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);
        invitationcode = new QLineEdit(centralwidget);
        invitationcode->setObjectName("invitationcode");
        invitationcode->setGeometry(QRect(750, 420, 201, 41));
        invitationcode->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: rgb(255, 255, 127); \n"
"    color: #333333; \n"
"    font-size: 14px;\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 60, 471, 461));
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"border:none;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("image/Jowhareh_galleries_poster_b232edcc-d05d-4849-9fd0-e503d64710f0.jpeg")));
        label_6->setScaledContents(true);
        form->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(form);
        statusbar->setObjectName("statusbar");
        form->setStatusBar(statusbar);

        retranslateUi(form);

        QMetaObject::connectSlotsByName(form);
    } // setupUi

    void retranslateUi(QMainWindow *form)
    {
        form->setWindowTitle(QCoreApplication::translate("form", "HELIACAL EXCHANGE", nullptr));
        lineEditName->setPlaceholderText(QString());
        label_phone->setText(QCoreApplication::translate("form", "phone:", nullptr));
        pushButton->setText(QCoreApplication::translate("form", "register", nullptr));
        label_copas->setText(QCoreApplication::translate("form", "confirm password : *", nullptr));
        label_password->setText(QCoreApplication::translate("form", "password :  *", nullptr));
        lineEditEmail->setText(QString());
        lineEdit_2->setText(QCoreApplication::translate("form", "Sign up", nullptr));
        label_invitationcode->setText(QCoreApplication::translate("form", "invitationcode:", nullptr));
        pushButton_gosignin->setText(QCoreApplication::translate("form", "Sign in", nullptr));
        label_email->setText(QCoreApplication::translate("form", "email :  *", nullptr));
        lineEdit->setText(QCoreApplication::translate("form", "Have an account? Sign in now.", nullptr));
        lineEditPhone->setPlaceholderText(QCoreApplication::translate("form", "\330\247\330\256\330\252\333\214\330\247\330\261\333\214", nullptr));
        confirmpassword->setPlaceholderText(QString());
        label_name->setText(QCoreApplication::translate("form", "user name:  *", nullptr));
        invitationcode->setPlaceholderText(QCoreApplication::translate("form", "\330\247\330\256\330\252\333\214\330\247\330\261\333\214", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class form: public Ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
