#include <QCoreApplication>

#include "beverage.h"
#include "condimentdecorator.h"

#include "espresso.h"
#include "houseblend.h"
#include "milk.h"
#include "mocha.h"

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beverage* beverage = new Espresso();

    qDebug() << beverage->getDescription() + ", " + QString::number(beverage->cost())+"$";

    Beverage* beverage2 = new HouseBlend();
    beverage2 = new Mocha(beverage2);

    qDebug() << beverage2->getDescription() + ", " + QString::number(beverage2->cost())+"$";

    Beverage* beverage3 = new Espresso();
    beverage3 = new Mocha(beverage3);
    beverage3 = new Milk(beverage3);

    qDebug() << beverage3->getDescription() + ", " + QString::number(beverage3->cost())+"$";

    Beverage* beverage4 = new HouseBlend();
    qDebug() << beverage4->getDescription() + ", " + QString::number(beverage4->cost())+"$";

    return a.exec();
}
