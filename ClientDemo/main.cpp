#include "widget.h"

#include <QApplication>

#include "clientwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    ClientWidget w1;
    w1.show();
    return a.exec();
}
