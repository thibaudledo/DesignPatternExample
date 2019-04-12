#ifndef MILK_H
#define MILK_H

#include "condimentdecorator.h"
#include "beverage.h"

class Milk : public CondimentDecorator
{
    Q_INTERFACES(CondimentDecorator)
private:
    Beverage* m_beverage;
public:
    Milk(Beverage*);
    QString getDescription();
    double cost();
};

#endif // MILK_H
