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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
        widget->setGeometry(QRect(-110, -50, 741, 491));
        coinInput = new QLineEdit(widget);
        coinInput->setObjectName("coinInput");
        coinInput->setGeometry(QRect(210, 130, 231, 20));
        detailsButton = new QPushButton(widget);
        detailsButton->setObjectName("detailsButton");
        detailsButton->setGeometry(QRect(200, 230, 80, 18));
        resultDisplay = new QTextEdit(widget);
        resultDisplay->setObjectName("resultDisplay");
        resultDisplay->setGeometry(QRect(190, 310, 531, 171));
        resultDisplay->setReadOnly(true);
        priceButton = new QPushButton(widget);
        priceButton->setObjectName("priceButton");
        priceButton->setGeometry(QRect(400, 230, 80, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTPRICE_H
