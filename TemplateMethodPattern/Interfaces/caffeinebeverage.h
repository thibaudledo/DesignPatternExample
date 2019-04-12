#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H

#include <QObject>
#include <QDebug>

class CaffeineBeverage
{
public:
    CaffeineBeverage();
    virtual void prepareRecipe() final; //  pourquoi virtual
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    virtual void boilWater();
    virtual void pourInCup();
    bool customerWantsCondiments();
};

Q_DECLARE_INTERFACE(CaffeineBeverage, "CaffeineBeverage/1.0")

#endif // CAFFEINEBEVERAGE_H
