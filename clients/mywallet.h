#ifndef MYWALLET_H
#define MYWALLET_H

#include <QWidget>
#include <QPushButton>
#include <QTableWidgetItem>
#include <QClipboard>
#include <QTableWidget>
#include "dashboard.h"
#include <QMessageBox>
#include <qfile.h>
#include <QTime>
#include <QtGlobal>
#include <string>
#include <random>
#include <QDebug>
#include "client.h"
#include "form.h"
#include <QIcon>
#include "walldetails.h"
#include "client.h"
#include "priceupdater.h"
#include "profile.h"
#include "deposit.h"
#include "withdrawal.h"
#include "CurrentPrice.h"
#include "styles.h"
namespace Ui {
class mywallet;
}

class mywallet : public QWidget
{
    Q_OBJECT

public:

    explicit mywallet(QWidget *parent = nullptr);
    ~mywallet();
    void applyStyles();
    void populateTable();
    void addtotable(const QString &name1, const QString &address1, double balance1);
    void processRowData(const QString &name, const QString &address, double balance);
    void sendWalletToServer(const QStringList &words,const QString namewallet,const QString addresswallet);


public slots:

       void addWalletToTable(const QString &name, const QString &address, double balance);

private slots:

    void on_Dashboard_btn_clicked();
    void on_creatwallet_btn_clicked();
    void on_continue_btn_clicked();
    void on_save_wallet_btn_clicked();
    void on_backtowords_btn_clicked();
    void on_close_btn_clicked();
    void on_close_btn_2_clicked();
    void on_tableWidget_cellClicked(int row, int column);
    void on_Profile_btn_clicked();
    void on_deposit_btn_clicked();
    void on_withdrawal_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_currentprice_btn_clicked();

    void on_exit_btn_clicked();

private:

    Ui::mywallet *ui;
};

#endif
