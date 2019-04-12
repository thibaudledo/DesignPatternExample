#ifndef COFFEE_H
#define COFFEE_H

#include <QDebug>

#include "Interfaces/caffeinebeverage.h"

class Coffee : public CaffeineBeverage
{
    Q_INTERFACES(CaffeineBeverage)
public:
    Coffee();
    void brew();
    void addCondiments();
};

#endif // COFFEE_H
