#include "chicagostylepizzastore.h"

ChicagoStylePizzaStore::ChicagoStylePizzaStore()
{

}

Pizza *ChicagoStylePizzaStore::createPizza(QString type)
{
    Pizza* pizza = nullptr;

    if(type == "Cheese")pizza = new ChicagoStyleCheesePizza;
    if(type == "Pepperoni")pizza = new ChicagoStylePepperoniPizza;
    if(type == "Veggie")pizza = new ChicagoStyleVeggiePizza;

    return pizza;
}
