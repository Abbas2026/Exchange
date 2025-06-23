#include "signin.h"
#include "ui_signin.h"

signin::signin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::signin)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/image/signin.png"));
    ui->lineEditEmail_sign_2->setVisible(false);
    ui->lineEditName_sign->setVisible(false);
    ui->label_email_sign_2->setVisible(false);
    ui->label_name_sign->setVisible(false);
    ui->forgotbtnsend->setVisible(false);

    QList<QLineEdit*> lineEdits = {ui->lineEditEmail_sign, ui->lineEditPassword_sign};

    for (int i = 0; i < lineEdits.size() - 1; ++i) {
        connect(lineEdits[i], &QLineEdit::returnPressed, this, [=]() { lineEdits[i + 1]->setFocus(); });
    }
}

signin::~signin()
{
    delete ui;
}

void signin::on_pushButton_gosignin_clicked()
{
    form *fr = new form();
    fr->setAttribute(Qt::WA_DeleteOnClose);
    fr->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void signin::on_login_button_clicked()
{
    QString email = ui->lineEditEmail_sign->text();
    QString password = ui->lineEditPassword_sign->text();

    if (email.isEmpty() || password.isEmpty()) {
    styles::showWarning(this, "Please enter your email and username");
        return;
    }

    Client::globalEmail = email;

    emit sendservertologin(email, password);
}

void signin::Responsetosignin(const QString &response)
{
    styles::showWarning(this,response);
    return;
}

void signin::on_forgot_password_clicked()
{
    ui->lineEditEmail_sign_2->setVisible(true);
    ui->lineEditName_sign->setVisible(true);
    ui->label_email_sign_2->setVisible(true);
    ui->label_name_sign->setVisible(true);
    ui->forgotbtnsend->setVisible(true);

}

void signin::on_forgotbtnsend_clicked()
{
    QString email = ui->lineEditEmail_sign_2->text();
    QString username = ui->lineEditName_sign->text();

    if (email.isEmpty() || username.isEmpty()) {
    styles::showWarning(this, "Please enter your email and username");
        return;
    }
    extern Client client;
    client.sendForgotPasswordRequest(email, username);
}

void signin:: closewindow(){
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void signin::showEvent(QShowEvent *event) {
    QWidget::showEvent(event);
    ui->lineEditEmail_sign->setFocus();
}

void signin::on_exit_btn_clicked()
{
    this->close();
}

