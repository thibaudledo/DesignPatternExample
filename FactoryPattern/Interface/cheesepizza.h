#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"

class CheesePizza : public Pizza
{
    Q_INTERFACES(Pizza)
public:
    CheesePizza();
};

Q_DECLARE_INTERFACE(CheesePizza, "CheesePizza/1.0")

#endif // CHEESEPIZZA_H
