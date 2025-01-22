#ifndef WALLDETAILS_H
#define WALLDETAILS_H

#include <QWidget>

namespace Ui {
class Walldetails;
}

class Walldetails : public QWidget
{
    Q_OBJECT

public:
    explicit Walldetails(QWidget *parent = nullptr);
    ~Walldetails();
        void applyStyles();
    void populateTable();

    public slots:
        void addcointotable(const QString &name1, const double &inventory1,const double &Currentvalue1);
signals:


    private slots:
    void on_backtomywallet_btn_clicked();

        void on_Profile_btn_clicked();

    void on_Dashboard_btn_clicked();

        void on_deposit_btn_clicked();

    private:
    Ui::Walldetails *ui;
};

#endif // WALLDETAILS_H
