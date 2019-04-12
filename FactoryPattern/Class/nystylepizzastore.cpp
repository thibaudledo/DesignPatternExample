#include "nystylepizzastore.h"

NYStylePizzaStore::NYStylePizzaStore()
{

}

Pizza *NYStylePizzaStore::createPizza(QString type)
{
    Pizza* pizza = nullptr;

    if(type == "Cheese")pizza = new NYStyleCheesePizza;
    if(type == "Pepperoni")pizza = new NYStylePepperoniPizza;
    if(type == "Veggie")pizza = new NYStyleVeggiePizza;

    return pizza;
}
