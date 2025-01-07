#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>

dashboard::dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &dashboard::on_backButton_clicked);
    applyStyles();
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
void dashboard::applyStyles()
{
    ui->Dashboard_btn->setStyleSheet("QPushButton { color: #c97940;border:none;font: 28pt 'Bangers';border:none; }"
                                     "QPushButton:hover {color: #c97940 }");
    ui->Mywallets_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';letter-spacing: 1px;border:none;}"
                                     "QPushButton:hover { color: #c97940  }");
    ui->Profile_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                   "QPushButton:hover { color: #c97940  }");
    ui->market_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                  "QPushButton:hover { color: #c97940  }");
    ui->easyexchange_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                        "QPushButton:hover { color: #c97940  }");
    ui->Transmission_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                        "QPushButton:hover { color: #c97940  }");
    ui->currentprice_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                        "QPushButton:hover { color: #c97940  }");
    ui->Authentication_btn->setStyleSheet("QPushButton { color:black; ;border:none;font: 28pt 'Bangers';border:none; }"
                                          "QPushButton:hover { color: #c97940  }");
}















void dashboard::on_Mywallets_btn_clicked()
{

}


void dashboard::on_Profile_btn_clicked()
{

}


void dashboard::on_market_btn_clicked()
{

}


void dashboard::on_easyexchange_btn_clicked()
{

}


void dashboard::on_Transmission_btn_clicked()
{

}


void dashboard::on_currentprice_btn_clicked()
{

}


void dashboard::on_Authentication_btn_clicked()
{

}

