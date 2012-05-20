#include <QApplication>
#include "facatsyncrfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Facatsyncrfile w;
    w.show();
    
    return a.exec();
}
