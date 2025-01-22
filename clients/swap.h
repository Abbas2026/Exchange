#ifndef SWAP_H
#define SWAP_H

#include <QMainWindow>
#include "exchange.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onSwapButtonClicked();
    void onExchangeCompleted(const QString &fromCurrency, const QString &toCurrency, double exchangedAmount);
    void onErrorOccurred(const QString &error);

private:
    Ui::MainWindow *ui;
    Exchange exchange;
};

#endif // SWAP_H
