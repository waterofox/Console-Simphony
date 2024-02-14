#include "abstractpath.h"

AbstractPath::AbstractPath(QObject *parent)
    : QThread{parent}
{}

AbstractPath::~AbstractPath()
{

}

void AbstractPath::run()
{
    this->sleep(this->start_delay);

    this->simphony();

    this->exec();
}
