#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

namespace Ui {
class dashboard;
}

class dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();
    void applyStyles();

private:
    Ui::dashboard *ui;
signals:
    void backToFormRequested();
public slots :
    void ServerResponse(const QString &response);
    void on_Mywallets_btn_clicked();
    void on_backButton_clicked();
    void on_Profile_btn_clicked();
    void on_market_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_Transmission_btn_clicked();
    void on_currentprice_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_deposit_btn_clicked();
    void on_withdrawal_btn_clicked();

private slots:


    void on_backButton_2_clicked();
};

#endif
