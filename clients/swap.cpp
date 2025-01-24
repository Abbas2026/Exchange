// #include "swap.h"
// #include "ui_ExchangeForm.h"

// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent), ui(new Ui::MainWindow) {
//     ui->setupUi(this);

//     // Configure Exchange object
//     // exchange.setAPIUrl("https://api.coingecko.com/api/v3/simple/price");
//     exchange.setAPIUrl("https://api.coingecko.com/api/v3/simple/price?ids=bitcoin,ethereum,Tron&vs_currencies=usd");


//     // Set your actual API URL
//     exchange.setWallet({{"Bitcoin", 10.0}, {"Ethereum", 50.0}, {"Tron", 1000000.0}});  // Example wallet

//     // Connect signals and slots
//     connect(ui->swap_But, &QPushButton::clicked, this, &MainWindow::onSwapButtonClicked);
//     connect(&exchange, &Exchange::exchangeCompleted, this, &MainWindow::onExchangeCompleted);
//     connect(&exchange, &Exchange::errorOccurred, this, &MainWindow::onErrorOccurred);
// }

// MainWindow::~MainWindow() {
//     delete ui;
// }

// void MainWindow::onSwapButtonClicked() {
//     QString fromCurrency = ui->convert_From->currentText();
//     QString toCurrency = ui->convert_To->currentText();
//     double amount = ui->amount->text().toDouble();

//     if (fromCurrency.isEmpty() || toCurrency.isEmpty()) {
//         ui->Result->setText("Please select both currencies.");
//         return;
//     }

//     if (amount <= 0) {
//         ui->Result->setText("Enter a valid amount.");
//         return;
//     }

//     exchange.performExchange(fromCurrency, toCurrency, amount);
// }

// void MainWindow::onExchangeCompleted(const QString &fromCurrency, const QString &toCurrency, double exchangedAmount) {
//     ui->Result->setText(QString("Converted %1 %2 to %3 %4 (Fee deducted)")
//                             .arg(fromCurrency)
//                             .arg(exchange.getAmountTemp())
//                             .arg(exchangedAmount)
//                             .arg(toCurrency));
// }

// void MainWindow::onErrorOccurred(const QString &error) {
//     ui->Result->setText("Error: " + error);
// }
