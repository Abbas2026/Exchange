#include "guid.h"
#include "ui_guid.h"
guid::guid(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::guid)
{
    ui->setupUi(this);
}

guid::~guid()
{
    delete ui;
}

void guid::on_backButton_clicked()
{
    this->close();
    dashboard *da = new dashboard();
    da->setAttribute(Qt::WA_DeleteOnClose);
    da->show();
}

