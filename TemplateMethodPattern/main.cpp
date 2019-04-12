#include <QCoreApplication>

#include "Interfaces/caffeinebeverage.h"
#include "Class/coffee.h"
#include "Class/tea.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Tea* myTea = new Tea;
    myTea->prepareRecipe();

    return a.exec();
}
