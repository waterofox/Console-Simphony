#include <QCoreApplication>
#include "paths/fisrtpath.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FisrtPath* first_path = new FisrtPath();
    first_path->start_delay = 0;

    first_path->run();

    return a.exec();
}
