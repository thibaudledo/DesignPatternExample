#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "subjectinterface.h"
#include "observerinterface.h"
#include "displayinterface.h"

class CurrentConditionsDisplay : public ObserverInterface, public DisplayInterface
{
    Q_INTERFACES(ObserverInterface DisplayInterface)
public:
    CurrentConditionsDisplay(SubjectInterface*);
    virtual void update(int temperature, int humidity, int pressure);
    virtual void display();

private:
    int m_temperature;
    int m_humidity;
    SubjectInterface* WeatherData;
};

#endif // CURRENTCONDITIONSDISPLAY_H
