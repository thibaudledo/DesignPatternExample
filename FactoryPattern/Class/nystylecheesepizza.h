#ifndef NYSTYLECHEESEPIZZA_H
#define NYSTYLECHEESEPIZZA_H

#include "Interface/pizza.h"

class NYStyleCheesePizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    NYStyleCheesePizza();
};

#endif // NYSTYLECHEESEPIZZA_H
