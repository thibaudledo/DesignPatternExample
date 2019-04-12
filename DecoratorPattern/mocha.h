#ifndef MOCHA_H
#define MOCHA_H

#include "condimentdecorator.h"
#include "beverage.h"

class Mocha : public CondimentDecorator
{
    Q_INTERFACES(CondimentDecorator)
private:
    Beverage* m_beverage;
public:
    Mocha(Beverage*);
    QString getDescription();
    double cost();
};

#endif // MOCHA_H
