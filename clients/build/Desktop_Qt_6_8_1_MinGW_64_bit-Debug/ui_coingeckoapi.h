/********************************************************************************
** Form generated from reading UI file 'coingeckoapi.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINGECKOAPI_H
#define UI_COINGECKOAPI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoinGeckoAPI
{
public:

    void setupUi(QWidget *CoinGeckoAPI)
    {
        if (CoinGeckoAPI->objectName().isEmpty())
            CoinGeckoAPI->setObjectName("CoinGeckoAPI");
        CoinGeckoAPI->resize(400, 300);

        retranslateUi(CoinGeckoAPI);

        QMetaObject::connectSlotsByName(CoinGeckoAPI);
    } // setupUi

    void retranslateUi(QWidget *CoinGeckoAPI)
    {
        CoinGeckoAPI->setWindowTitle(QCoreApplication::translate("CoinGeckoAPI", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoinGeckoAPI: public Ui_CoinGeckoAPI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINGECKOAPI_H
