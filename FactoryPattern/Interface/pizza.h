#ifndef PIZZA_H
#define PIZZA_H

#include <QObject>
#include <QDebug>

class Pizza
{
public:
    QString m_type;
    Pizza(){;}
    virtual ~Pizza(){;}
    virtual void prepare(){qDebug() << "Prepare the "+ m_type +" pizza";}
    virtual void bake(){qDebug() << "Bake the "+ m_type +" pizza";}
    virtual void cut(){qDebug() << "Cut the "+ m_type +" pizza";}
    virtual void box(){qDebug() << "Box the "+ m_type +" pizza";}
};

Q_DECLARE_INTERFACE(Pizza, "Pizza/1.0")

#endif // PIZZA_H
