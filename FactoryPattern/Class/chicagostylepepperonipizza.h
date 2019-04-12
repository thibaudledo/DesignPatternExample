#ifndef CHICAGOSTYLEPEPPERONIPIZZA_H
#define CHICAGOSTYLEPEPPERONIPIZZA_H

#include "Interface/pizza.h"

class ChicagoStylePepperoniPizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    ChicagoStylePepperoniPizza();
};

#endif // CHICAGOSTYLEPEPPERONIPIZZA_H
