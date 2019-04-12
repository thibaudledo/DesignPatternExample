#include "caffeinebeverage.h"

CaffeineBeverage::CaffeineBeverage()
{

}

void CaffeineBeverage::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    if(customerWantsCondiments())
    {
        addCondiments();
    }
}

void CaffeineBeverage::boilWater()
{
    qDebug() << "Boiling water";
}

void CaffeineBeverage::pourInCup()
{
    qDebug() << "Pouring into cup";
}

bool CaffeineBeverage::customerWantsCondiments()    //  Hook
{
    return true;
}
