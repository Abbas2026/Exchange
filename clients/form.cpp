#include "form.h"
#include "ui_form.h"

form::form(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::form)
{
    ui->setupUi(this);
    ui->label_6->setPixmap(QPixmap(":/image/form.png"));

    this->setWindowIcon(QIcon());
    extern Client client;
    QList<QLineEdit*> lineEdits = {ui->lineEditEmail, ui->lineEditName, ui->lineEditPassword, ui->confirmpassword, ui->lineEditPhone, ui->invitationcode};

    for (int i = 0; i < lineEdits.size() - 1; ++i) {
        connect(lineEdits[i], &QLineEdit::returnPressed, this, [=]() { lineEdits[i + 1]->setFocus(); });
    }
    QList<QLineEdit*> lineEdits1 = {ui->lineEditEmail, ui->lineEditName, ui->lineEditPassword, ui->confirmpassword, ui->lineEditPhone, ui->invitationcode};

    for (QLineEdit* lineEdit : lineEdits1) {
        lineEdit->installEventFilter(this);
    }
}

form::~form()
{
    delete ui;
}

bool isValidEmail(const QString &email)
{
    QRegularExpression regex(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z]{2,3}$)");
    return regex.match(email).hasMatch();
}

bool isValidPassword(const QString &password) {
    if (password.length() < 8) {
        return false;
    }
    QRegularExpression hasUpperCase("[A-Z]");
    QRegularExpression hasLowerCase("[a-z]");
    QRegularExpression hasDigit("\\d");

    return hasUpperCase.match(password).hasMatch() &&
           hasLowerCase.match(password).hasMatch() &&
           hasDigit.match(password).hasMatch();
}

void form::on_pushButton_clicked()
{

    QString email = ui->lineEditEmail->text();
    QString password = ui->lineEditPassword->text();
    QString name = ui->lineEditName->text();
    QString copassword = ui->confirmpassword->text();
    QString phone = ui->lineEditPhone->text();
    if(email.isEmpty()){
    styles::showWarning(this, "Please enter your email");
        return;
    }
    if(name.isEmpty()){
    styles::showWarning(this, "Please enter your username");
        return;}

    if(password.isEmpty()){
    styles::showWarning(this, "Please enter your password");
        return;
    }

    if (!isValidEmail(email)) {
    styles::showWarning(this, "The email is invalid. Please enter a valid email");
        return;
    }

    if (!isValidPassword(password)) {
    styles::showWarning(this, "The password is invalid. The password must be at least 8 Characters long, including one Uppercase Letter, one Lowercase Letter, and one Number");
        return;
    }
    if (password!=copassword){
    styles::showWarning(this, "the password and its repetition are not the same");
        return;
    }
    Client::globalEmail = email;
    extern Client client;
    client.sendCredentials(email, password, name, phone);
    closewindow();
}

void form::displayServerResponse(const QString &response)
{
    if (response.contains("error")) {
    styles::showWarning(this, response);
    }
}

void form::on_pushButton_gosignin_clicked()
{
    signin *sign = new signin();
    sign->setAttribute(Qt::WA_DeleteOnClose);
    extern Client client;
    QObject::connect(sign, &signin::sendservertologin, &client, &Client::sendservertologin);
    connect(&client, &Client::receivedMessagetosign, sign, &signin::Responsetosignin);
    connect(&client, &Client::triggerSigninSlot, sign, &signin::closewindow);
    sign->showFullScreen();
    QTimer::singleShot(1000, this, [this]() {this->close();});
}

void form::showEvent(QShowEvent *event) {
    QWidget::showEvent(event);
    ui->lineEditEmail->setFocus();
}

bool form::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
        QLineEdit *currentLineEdit = qobject_cast<QLineEdit*>(obj);

        if (currentLineEdit) {
            QList<QLineEdit*> lineEdits = {ui->lineEditEmail, ui->lineEditName, ui->lineEditPassword, ui->confirmpassword, ui->lineEditPhone, ui->invitationcode};
            int index = lineEdits.indexOf(currentLineEdit);

            if (keyEvent->key() == Qt::Key_Down) {
                if (index < lineEdits.size() - 1) {
                    lineEdits[index + 1]->setFocus();
                    return true;
                }
            } else if (keyEvent->key() == Qt::Key_Up) {
                if (index > 0) {
                    lineEdits[index - 1]->setFocus();
                    return true;
                }
            }
        }
    }
    return QWidget::eventFilter(obj, event);  
}

void form::on_exit_btn_clicked()
{
    this->close();
}

void form:: closewindow(){
    QTimer::singleShot(1000, this, [this]() {this->close();});
}
