#ifndef MYWALLET_H
#define MYWALLET_H

#include <QWidget>

namespace Ui {
class mywallet;
}

class mywallet : public QWidget
{
    Q_OBJECT

public:
    explicit mywallet(QWidget *parent = nullptr);
    ~mywallet();
    void applyStyles();
    void populateTable();
private:
    Ui::mywallet *ui;
};

#endif // MYWALLET_H
