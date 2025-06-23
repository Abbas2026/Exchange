#ifndef WALLDETAILS_H
#define WALLDETAILS_H

#include <QWidget>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QPushButton>
#include <QSvgRenderer>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include "mywallet.h"
#include "client.h"
#include "form.h"
#include "dashboard.h"
#include "priceupdater.h"
#include <QLocale>
#include "profile.h"
#include "deposit.h"
#include "withdrawal.h"
#include "CurrentPrice.h"
#include <QMessageBox>
#include <QHBoxLayout>
#include "styles.h"

namespace Ui {
class Walldetails;
}

class Walldetails : public QWidget
{
    Q_OBJECT

public:

    explicit Walldetails(QWidget *parent = nullptr);
    ~Walldetails();
    void applyStyles();
    void populateTable();

    public slots:

        void addcointotable(const QString &name1, const double &inventory1,const double &Currentvalue1);

    private slots:

    void on_backtomywallet_btn_clicked();
    void on_Profile_btn_clicked();
    void on_Dashboard_btn_clicked();
    void on_deposit_btn_clicked();
    void on_withdrawal_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_currentprice_btn_clicked();

    void on_exit_btn_clicked();

private:

    Ui::Walldetails *ui;
};

#endif
