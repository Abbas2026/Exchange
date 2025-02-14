#ifndef GUID_H
#define GUID_H

#include <QWidget>

namespace Ui {
class guid;
}

class guid : public QWidget
{
    Q_OBJECT

public:

    explicit guid(QWidget *parent = nullptr);
    ~guid();

private slots:

    void on_backButton_clicked();

private:

    Ui::guid *ui;
};

#endif
