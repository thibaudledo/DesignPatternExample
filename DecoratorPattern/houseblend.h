#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "beverage.h"

class HouseBlend : public Beverage
{
    Q_INTERFACES(Beverage)
public:
    HouseBlend();
    double cost();
};

#endif // HOUSEBLEND_H
