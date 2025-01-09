/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signin
{
public:
    QLabel *label;
    QPushButton *pushButton_gosignin;
    QPushButton *forgot_password;
    QLabel *label_email_sign_2;
    QLabel *label_email_sign;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEditEmail_sign_2;
    QLineEdit *lineEditName_sign;
    QPushButton *login_button;
    QLineEdit *lineEditPassword_sign;
    QPushButton *forgotbtnsend;
    QLineEdit *lineEditEmail_sign;
    QLabel *label_password_sign;
    QLabel *label_name_sign;

    void setupUi(QWidget *signin)
    {
        if (signin->objectName().isEmpty())
            signin->setObjectName("signin");
        signin->resize(1000, 600);
        signin->setStyleSheet(QString::fromUtf8("background-color:#0A0C0E  ;"));
        label = new QLabel(signin);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 80, 471, 461));
        label->setPixmap(QPixmap(QString::fromUtf8("E:/Downloads/Jowhareh_galleries_8_poster_7cf4646d-dfc0-4736-9780-c4c43bb850eb.jpeg")));
        label->setScaledContents(true);
        pushButton_gosignin = new QPushButton(signin);
        pushButton_gosignin->setObjectName("pushButton_gosignin");
        pushButton_gosignin->setGeometry(QRect(860, 130, 61, 31));
        pushButton_gosignin->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_gosignin->setStyleSheet(QString::fromUtf8("          background-color: #BF360C;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        forgot_password = new QPushButton(signin);
        forgot_password->setObjectName("forgot_password");
        forgot_password->setGeometry(QRect(700, 290, 231, 31));
        forgot_password->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        forgot_password->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
"	border:none;\n"
""));
        label_email_sign_2 = new QLabel(signin);
        label_email_sign_2->setObjectName("label_email_sign_2");
        label_email_sign_2->setEnabled(false);
        label_email_sign_2->setGeometry(QRect(650, 430, 51, 20));
        label_email_sign_2->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        label_email_sign = new QLabel(signin);
        label_email_sign->setObjectName("label_email_sign");
        label_email_sign->setEnabled(false);
        label_email_sign->setGeometry(QRect(650, 190, 51, 20));
        label_email_sign->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        lineEdit_2 = new QLineEdit(signin);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(770, 50, 101, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 26px;\n"
"           border: none;  "));
        lineEdit = new QLineEdit(signin);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(540, 130, 311, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        lineEditEmail_sign_2 = new QLineEdit(signin);
        lineEditEmail_sign_2->setObjectName("lineEditEmail_sign_2");
        lineEditEmail_sign_2->setGeometry(QRect(720, 430, 201, 28));
        lineEditEmail_sign_2->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"  \n"
"background-color: rgb(85, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"    font-size: 12px;\n"
"\n"
"\n"
""));
        lineEditName_sign = new QLineEdit(signin);
        lineEditName_sign->setObjectName("lineEditName_sign");
        lineEditName_sign->setGeometry(QRect(720, 480, 201, 28));
        lineEditName_sign->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"background-color: rgb(85, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"    font-size: 12px;\n"
"\n"
""));
        login_button = new QPushButton(signin);
        login_button->setObjectName("login_button");
        login_button->setEnabled(true);
        login_button->setGeometry(QRect(740, 330, 161, 41));
        login_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        login_button->setStyleSheet(QString::fromUtf8("          background-color: #27AE60 ;\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEditPassword_sign = new QLineEdit(signin);
        lineEditPassword_sign->setObjectName("lineEditPassword_sign");
        lineEditPassword_sign->setGeometry(QRect(720, 250, 201, 28));
        lineEditPassword_sign->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #16A085   ; \n"
"color: rgb(255, 255, 255);\n"
"    font-size: 12px;\n"
"\n"
""));
        lineEditPassword_sign->setEchoMode(QLineEdit::EchoMode::Password);
        forgotbtnsend = new QPushButton(signin);
        forgotbtnsend->setObjectName("forgotbtnsend");
        forgotbtnsend->setEnabled(true);
        forgotbtnsend->setGeometry(QRect(740, 530, 161, 41));
        forgotbtnsend->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        forgotbtnsend->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 85, 127);\n"
"            color: white;\n"
"            border-radius: 10px;\n"
"            font-size: 16px;\n"
"           border: none;  "));
        lineEditEmail_sign = new QLineEdit(signin);
        lineEditEmail_sign->setObjectName("lineEditEmail_sign");
        lineEditEmail_sign->setGeometry(QRect(720, 190, 201, 28));
        lineEditEmail_sign->setStyleSheet(QString::fromUtf8("    border-radius: 8px; \n"
"    padding: 0px 12px; \n"
"    background-color: #16A085   ; \n"
"color: rgb(255, 255, 255);\n"
"    font-size: 12px;\n"
"\n"
""));
        label_password_sign = new QLabel(signin);
        label_password_sign->setObjectName("label_password_sign");
        label_password_sign->setEnabled(false);
        label_password_sign->setGeometry(QRect(620, 250, 81, 20));
        label_password_sign->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));
        label_name_sign = new QLabel(signin);
        label_name_sign->setObjectName("label_name_sign");
        label_name_sign->setEnabled(false);
        label_name_sign->setGeometry(QRect(610, 480, 91, 20));
        label_name_sign->setStyleSheet(QString::fromUtf8("    font-size: 16px;\n"
"    font-weight: bold;\n"
""));

        retranslateUi(signin);

        QMetaObject::connectSlotsByName(signin);
    } // setupUi

    void retranslateUi(QWidget *signin)
    {
        signin->setWindowTitle(QCoreApplication::translate("signin", "Form", nullptr));
        label->setText(QString());
        pushButton_gosignin->setText(QCoreApplication::translate("signin", "Sign up", nullptr));
        forgot_password->setText(QCoreApplication::translate("signin", "Forgot your password?", nullptr));
        label_email_sign_2->setText(QCoreApplication::translate("signin", "email :", nullptr));
        label_email_sign->setText(QCoreApplication::translate("signin", "email :", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("signin", "Sign in", nullptr));
        lineEdit->setText(QCoreApplication::translate("signin", "Don't have an account? Create one now", nullptr));
        login_button->setText(QCoreApplication::translate("signin", "login", nullptr));
        forgotbtnsend->setText(QCoreApplication::translate("signin", "login", nullptr));
        label_password_sign->setText(QCoreApplication::translate("signin", "password :", nullptr));
        label_name_sign->setText(QCoreApplication::translate("signin", "user name :  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signin: public Ui_signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
