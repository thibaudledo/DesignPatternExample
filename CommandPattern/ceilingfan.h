#ifndef CEILINGFAN_H
#define CEILINGFAN_H

#include <QObject>

class CeilingFan
{
private:
    QString m_location;
    int m_speed;
public:
    CeilingFan(QString location);
    ~CeilingFan();
    void high();
    void medium();
    void low();
    void off();
    int getSpeed();

    static const int HIGH = 3;
    static const int MEDIUM = 2;
    static const int LOW = 1;
    static const int OFF = 0;
};

#endif // CEILINGFAN_H
