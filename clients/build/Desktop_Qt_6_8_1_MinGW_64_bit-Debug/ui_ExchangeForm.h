/********************************************************************************
** Form generated from reading UI file 'ExchangeForm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCHANGEFORM_H
#define UI_EXCHANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QComboBox *convert_From;
    QComboBox *convert_To;
    QLineEdit *amount;
    QPushButton *swap_But;
    QLabel *Result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 180, 251, 251));
        convert_From = new QComboBox(widget);
        convert_From->addItem(QString());
        convert_From->addItem(QString());
        convert_From->addItem(QString());
        convert_From->setObjectName("convert_From");
        convert_From->setGeometry(QRect(60, 30, 81, 22));
        convert_To = new QComboBox(widget);
        convert_To->addItem(QString());
        convert_To->addItem(QString());
        convert_To->addItem(QString());
        convert_To->setObjectName("convert_To");
        convert_To->setGeometry(QRect(60, 70, 81, 22));
        amount = new QLineEdit(widget);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(40, 110, 113, 20));
        swap_But = new QPushButton(widget);
        swap_But->setObjectName("swap_But");
        swap_But->setGeometry(QRect(70, 150, 41, 20));
        Result = new QLabel(widget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(10, 200, 231, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        convert_From->setItemText(0, QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        convert_From->setItemText(1, QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        convert_From->setItemText(2, QCoreApplication::translate("MainWindow", "Tron", nullptr));

        convert_To->setItemText(0, QCoreApplication::translate("MainWindow", "Bitcoin", nullptr));
        convert_To->setItemText(1, QCoreApplication::translate("MainWindow", "Ethereum", nullptr));
        convert_To->setItemText(2, QCoreApplication::translate("MainWindow", "Tron", nullptr));

        amount->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter the amount to swap", nullptr));
        swap_But->setText(QCoreApplication::translate("MainWindow", "swap", nullptr));
        Result->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCHANGEFORM_H
