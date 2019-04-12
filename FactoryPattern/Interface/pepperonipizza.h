#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "pizza.h"

class PepperoniPizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    PepperoniPizza();
};

Q_DECLARE_INTERFACE(PepperoniPizza, "PepperoniPizza/1.0")

#endif // PEPPERONIPIZZA_H
