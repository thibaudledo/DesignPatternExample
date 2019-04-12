#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <QString>
#include <QObject>

class Beverage
{
protected:
    QString description = "Unknow Beverage";
public:
    virtual ~Beverage(){;};
    virtual QString getDescription(){return description;}
    virtual double cost() = 0;
};

Q_DECLARE_INTERFACE(Beverage, "Beverage/1.0")

#endif // BEVERAGE_H
