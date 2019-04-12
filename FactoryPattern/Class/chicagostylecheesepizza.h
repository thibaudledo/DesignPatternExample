#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H

#include "Interface/pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    ChicagoStyleCheesePizza();
};

#endif // CHICAGOSTYLECHEESEPIZZA_H
