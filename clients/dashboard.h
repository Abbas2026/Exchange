#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>

namespace Ui {
class dashboard;
}

class dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();
    void setEmail(const QString &email);

private:
    Ui::dashboard *ui;
    QString m_email;
signals:
    void backToFormRequested();
public slots :
    void ServerResponse(const QString &response);
private slots:
    void on_backButton_clicked();
};

#endif
