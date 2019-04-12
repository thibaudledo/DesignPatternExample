#include "milk.h"

Milk::Milk(Beverage* beverage)
{
    m_beverage = beverage;
}

QString Milk::getDescription()
{
    return m_beverage->getDescription()+", Milk";
}

double Milk::cost()
{
    return m_beverage->cost()+double(.25);
}
