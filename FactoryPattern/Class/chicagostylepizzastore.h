#ifndef CHICAGOSTYLEPIZZASTORE_H
#define CHICAGOSTYLEPIZZASTORE_H

#include "Interface/pizzastore.h"
#include "Interface/pizza.h"
#include "Class/chicagostylecheesepizza.h"
#include "Class/chicagostylepepperonipizza.h"
#include "Class/chicagostyleveggiepizza.h"

class ChicagoStylePizzaStore : public PizzaStore
{
    Q_INTERFACES(PizzaStore)
public:
    ChicagoStylePizzaStore();
    Pizza* createPizza(QString type);
};

#endif // CHICAGOSTYLEPIZZASTORE_H
