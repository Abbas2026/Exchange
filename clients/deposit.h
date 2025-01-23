#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QWidget>

namespace Ui {
class deposit;
}

class deposit : public QWidget
{
    Q_OBJECT

public:
    explicit deposit(QWidget *parent = nullptr);
    ~deposit();
    void applyStyles();


private slots:
    void on_radiobtc_clicked();

    void on_radioirt_clicked();

    void on_radioeth_clicked();

    void on_radiotrx_clicked();

    void on_radiousdt_clicked();

    void on_Dashboard_btn_clicked();

    void on_Mywallets_btn_clicked();

    void on_Profile_btn_clicked();

    void on_save_wallet_btn_clicked();

    void on_withdrawal_btn_clicked();

private:
    Ui::deposit *ui;
};

#endif // DEPOSIT_H
