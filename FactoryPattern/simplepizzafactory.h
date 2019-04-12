#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include <QObject>

#include "Interface/pizza.h"

class SimplePizzaFactory
{
public:
    SimplePizzaFactory();
    Pizza* createPizza(QString type);
};

#endif // SIMPLEPIZZAFACTORY_H
