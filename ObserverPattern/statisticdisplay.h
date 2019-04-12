#ifndef STATISTICDISPLAY_H
#define STATISTICDISPLAY_H

#include "observerinterface.h"
#include "displayinterface.h"
#include "subjectinterface.h"

class StatisticDisplay : public ObserverInterface, public DisplayInterface
{
    Q_INTERFACES(ObserverInterface DisplayInterface)
public:
    StatisticDisplay(SubjectInterface*);
    virtual void update(int temperature, int humidity, int pressure);
    virtual void display();
private:
    int m_temperatureMin = 30000;
    int m_temperatureMax = 0;
    int m_currentTemperature;
    SubjectInterface* m_weatherData;
};

#endif // STATISTICDISPLAY_H
