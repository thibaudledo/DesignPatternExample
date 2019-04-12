#include <QCoreApplication>

#include "singleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton* s1 = Singleton::getInstance();

    s1->setName("toto");
    //Singleton* s2 = Singleton::getInstance();



    return a.exec();
}
