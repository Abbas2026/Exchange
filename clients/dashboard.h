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
    void setEmail(const QString &email);
    void applyStyles();

private:
    Ui::dashboard *ui;
    QString m_email;
signals:
    void backToFormRequested();
public slots :
    void ServerResponse(const QString &response);
private slots:
    void on_backButton_clicked();
    void on_Mywallets_btn_clicked();
    void on_Profile_btn_clicked();
    void on_market_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_Transmission_btn_clicked();
    void on_currentprice_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_Settings_btn_clicked();
};

#endif
