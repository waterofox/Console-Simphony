#ifndef ABSTRACTPATH_H
#define ABSTRACTPATH_H
#include <QObject>
#include <QThread>

class AbstractPath : public QThread
{
    Q_OBJECT
public:

    int start_delay = 0; //in seconds

    explicit AbstractPath(QObject *parent = nullptr);
    ~AbstractPath();

    void run() override;
    virtual void simphony() = 0; //for your own simphony
};

#endif // ABSTRACTPATH_H
