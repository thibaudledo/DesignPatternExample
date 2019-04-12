#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <QObject>

#include "pizza.h"
#include "simplepizzafactory.h"

#include "cheesepizza.h"
#include "pepperonipizza.h"
#include "veggiepizza.h"

class PizzaStore
{
public:
    PizzaStore();
    ~PizzaStore();
    Pizza* orderPizza(QString type);

    virtual Pizza* createPizza(QString type) = 0;
};

Q_DECLARE_INTERFACE(PizzaStore, "PizzaStore/1.0")

#endif // PIZZASTORE_H
