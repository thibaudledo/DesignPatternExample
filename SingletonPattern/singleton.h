#ifndef SINGLETON_H
#define SINGLETON_H

#include <QObject>

class Singleton
{
public:
    static Singleton* getInstance();
    void setName(QString s);
private:
    static Singleton* uniqueinstance;
    Singleton();
    QString name = "test";

};

#endif // SINGLETON_H
