#ifndef CURRENTPRICE_H
#define CURRENTPRICE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void applyStyles();

private slots:

    void on_Dashboard_btn_clicked();
    void on_Profile_btn_clicked();
    void on_deposit_btn_clicked();
    void on_withdrawal_btn_clicked();
    void on_Authentication_btn_clicked();
    void on_easyexchange_btn_clicked();
    void on_Mywallets_btn_clicked();

private:

    Ui::MainWindow *ui;
};

#endif
