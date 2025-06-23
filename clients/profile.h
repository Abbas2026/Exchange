#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
#include <QSvgRenderer>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include "client.h"
#include <QDebug>
#include "dashboard.h"
#include "mywallet.h"
#include <QMessageBox>
#include <QRegularExpression>
#include "deposit.h"
#include <QRandomGenerator>
#include <QPixmap>
#include <QPainter>
#include "withdrawal.h"
#include "CurrentPrice.h"
#include "styles.h"

namespace Ui {
class profile;
}

class profile : public QWidget
{
    Q_OBJECT

public:

    explicit profile(QWidget *parent = nullptr);
    ~profile();
    void applyStyles();
    bool isValidPassword(const QString &password);
    bool verifyCaptcha(const QString &input, const QString &correctCaptcha);
    QPixmap generateCaptchaImage(const QString &captchaText);
    QString generateCaptcha(int length);

public slots:

    void receiveduserprofile(const QString email,const QString name,const QString password,const QString phone,const QString address,const QString firstname,const QString lastname);
    void on_edit_information_btn_clicked();

private slots:

    void on_Dashboard_btn_clicked();
    void on_Mywallets_btn_clicked();
    void on_recordchange_btn_clicked();
    void on_change_pas_clicked();
    void on_backtoeditprof_btn_clicked();
    void on_backt_btn_clicked();
    void on_confirm_pas_btn_clicked();
    void on_backt_btn_2_clicked();
    void on_deposit_btn_clicked();
    void on_withdrawal_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_currentprice_btn_clicked();

    void on_exit_btn_clicked();

private:

    Ui::profile *ui;
      QString captchaText;
};
#endif
