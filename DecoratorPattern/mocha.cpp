#include "mocha.h"

#include <QDebug>

Mocha::Mocha(Beverage *beverage)
{
    m_beverage = beverage;
}

QString Mocha::getDescription()
{
    return m_beverage->getDescription()+", Mocha";
}

double Mocha::cost()
{
    return m_beverage->cost()+double(.20);
}
