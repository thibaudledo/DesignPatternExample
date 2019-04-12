#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage
{
    Q_INTERFACES(Beverage)
public:
    Espresso();
    double cost();
};

#endif // ESPRESSO_H
