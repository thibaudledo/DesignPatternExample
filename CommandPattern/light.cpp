#include "light.h"
#include <QDebug>


Light::Light(QString room)
{
    qDebug() << "constructeur de Light";
    m_room = room;
}

Light::~Light()
{
    qDebug() << "destructeur de Light";
}

void Light::on()
{
    qDebug() << m_room + " Light on!";
}

void Light::off()
{
    qDebug() << m_room + " Light off!";
}
