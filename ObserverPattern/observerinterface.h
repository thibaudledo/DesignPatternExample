#ifndef OBSERVERINTERFACE_H
#define OBSERVERINTERFACE_H

#include <QObject>

class ObserverInterface
{
public:
    virtual void update(int temperature, int humidity, int pressure){;};
};

Q_DECLARE_INTERFACE(ObserverInterface, "ObserverInterface/1.0")

#endif // OBSERVERINTERFACE_H
