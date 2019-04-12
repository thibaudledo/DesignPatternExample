#include "pizzastore.h"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

Pizza *PizzaStore::orderPizza(QString type)
{
    Pizza* pizza;

    pizza = createPizza(type);

    pizza->prepare();

    pizza->bake();

    pizza->cut();

    pizza->box();

    return pizza;
}

Pizza *PizzaStore::createPizza(QString type)
{
    Pizza* pizza = nullptr;

    if(type == "Cheese")pizza = new CheesePizza();
    if(type == "Pepperoni")pizza = new PepperoniPizza();
    if(type == "Veggie")pizza = new VeggiePizza();

    return pizza;
}
