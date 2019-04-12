#ifndef LIGHT_H
#define LIGHT_H

#include <QDebug>
#include <QObject>

class Light
{
public:
    Light(QString room);
    ~Light();

    QString m_room;

    void on();
    void off();
};

#endif // LIGHT_H
