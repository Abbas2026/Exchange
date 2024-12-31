#include "form.h"
#include <QDebug>
#include <QApplication>
#include "client.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    form w;
    w.show();
    return a.exec();
}

