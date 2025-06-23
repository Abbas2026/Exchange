#ifndef CURRENTPRICE_H
#define CURRENTPRICE_H

#include <QWidget>
#include "mywallet.h"
#include "client.h"
#include "profile.h"
#include "deposit.h"
#include "withdrawal.h"
#include "exchange.h"
#include "styles.h"
#include "dashboard.h"
namespace Ui {
class currentprice;
}

class currentprice : public QWidget
{
    Q_OBJECT

public:
    explicit currentprice(QWidget *parent = nullptr);
    ~currentprice();
    void applyStyles();

private slots:

    void on_Dashboard_btn_clicked();
    void on_Mywallets_btn_clicked();
    void on_Profile_btn_clicked();
    void on_withdrawal_btn_clicked();
    void on_deposit_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_exit_btn_clicked();

private:
    Ui::currentprice *ui;
};

#endif // CURRENTPRICE_H
