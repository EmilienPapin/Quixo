#include "quixo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Quixo w;
    w.show();

    return a.exec();
}
