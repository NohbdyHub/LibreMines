#include "mines_bollos.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mines_Bollos w;
    w.show();
    return a.exec();
}
