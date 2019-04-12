#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"

#include <QString>

class CondimentDecorator : public Beverage
{
    Q_INTERFACES(Beverage)
public:
    virtual QString getDescription() = 0;
};

Q_DECLARE_INTERFACE(CondimentDecorator, "CondimentDecorator/1.0")

#endif // CONDIMENTDECORATOR_H
