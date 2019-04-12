#ifndef NYSTYLEPIZZASTORE_H
#define NYSTYLEPIZZASTORE_H

#include "Interface/pizzastore.h"
#include "Interface/pizza.h"
#include "Class/nystylecheesepizza.h"
#include "Class/nystylepepperonipizza.h"
#include "Class/nystyleveggiepizza.h"

class NYStylePizzaStore : public PizzaStore
{
    Q_INTERFACES(PizzaStore)
public:
    NYStylePizzaStore();
    Pizza* createPizza(QString type);
};

#endif // NYSTYLEPIZZASTORE_H
