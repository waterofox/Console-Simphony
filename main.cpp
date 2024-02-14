#include <QCoreApplication>
#include "paths/fisrtpath.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FisrtPath* test_object = new FisrtPath();
    test_object->run();
    return a.exec();
}
