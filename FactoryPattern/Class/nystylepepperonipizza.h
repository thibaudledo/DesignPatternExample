#ifndef NYSTYLEPEPPERONIPIZZA_H
#define NYSTYLEPEPPERONIPIZZA_H

#include "Interface/pizza.h"

class NYStylePepperoniPizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    NYStylePepperoniPizza();
};

#endif // NYSTYLEPEPPERONIPIZZA_H
