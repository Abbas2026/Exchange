#ifndef MYWALLET_H
#define MYWALLET_H

#include <QWidget>

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
    void processRowData(int row,const QString &name, const QString &address, double balance);
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


private:
    Ui::mywallet *ui;
};

#endif // MYWALLET_H
