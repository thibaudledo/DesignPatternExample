#include "currentconditionsdisplay.h"

#include <QDebug>

CurrentConditionsDisplay::CurrentConditionsDisplay(SubjectInterface* weatherData)
{
    WeatherData = weatherData;
    WeatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(int temperature, int humidity, int pressure)
{
    m_temperature = temperature;
    m_humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display()
{
    qDebug() << "Current condition : " + QString::number(m_temperature) +" °C and " + QString::number(m_humidity) + " % humidity";
}
