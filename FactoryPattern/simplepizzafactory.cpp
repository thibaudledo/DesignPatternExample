#include "simplepizzafactory.h"

#include "Interface/cheesepizza.h"
#include "Interface/pepperonipizza.h"
#include "Interface/veggiepizza.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}

Pizza *SimplePizzaFactory::createPizza(QString type)
{
    Pizza* pizza = nullptr;

    if(type == "Cheese")pizza = new CheesePizza();
    if(type == "Pepperoni")pizza = new PepperoniPizza();
    if(type == "Veggie")pizza = new VeggiePizza();

    return pizza;
}
