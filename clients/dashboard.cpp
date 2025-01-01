#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>

dashboard::dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &dashboard::on_backButton_clicked);
}

dashboard::~dashboard()
{
    delete ui;
}
void dashboard::setEmail(const QString &email)
{
    m_email = email;

}
void dashboard::on_backButton_clicked()
{
    emit backToFormRequested();
    this->close();
}
void dashboard::ServerResponse(const QString &response)
{
    if (response.contains("خطا")) {
        QMessageBox::warning(this, "warning", response);
    } else {
        ui->textEdit->setText(response);
    }


}
