#ifndef EXCHANGE_H
#define EXCHANGE_H

#include <QWidget>

namespace Ui {
class exchange;
}

class exchange : public QWidget
{
    Q_OBJECT

public:
    explicit exchange(QWidget *parent = nullptr);
    ~exchange();
    void applyStyles();

private:
    Ui::exchange *ui;


public slots:
    void setsupply(const QMap<QString, double>& walletCurrencies);

private slots:
    void on_radiobtc_clicked();
    void on_radioirt_clicked();
    void on_radioeth_clicked();
    void on_radiotrx_clicked();
    void on_radiousdt_clicked();
    void on_radiobtc_2_clicked();
    void on_radioirt_2_clicked();
    void on_radioeth_3_clicked();
    void on_radiotrx_3_clicked();
    void on_radiousdt_2_clicked();
    void on_exchange_btn_clicked();
    void on_Dashboard_btn_clicked();
    void on_Mywallets_btn_clicked();
    void on_Profile_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_deposit_btn_clicked();
    void on_withdrawal_btn_clicked();
    void on_send_exchange_clicked();
    void on_currentprice_btn_clicked();
};

#endif // EXCHANGE_H
