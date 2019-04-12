#include <QCoreApplication>

#include "Interface/pizza.h"
#include "Interface/pizzastore.h"

#include "Class/chicagostylepizzastore.h"
#include "Class/nystylepizzastore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PizzaStore* store = new NYStylePizzaStore;

    store->orderPizza("Cheese");

    return a.exec();
}
