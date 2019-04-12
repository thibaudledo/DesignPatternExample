#include "singleton.h"

Singleton* Singleton::getInstance()
{
    if(!uniqueinstance)
    {
        uniqueinstance = new Singleton();
    }
    return uniqueinstance;
}

void Singleton::setName(QString s)
{
    name = s;
}

Singleton::Singleton()
{
    name = "titi";
}
