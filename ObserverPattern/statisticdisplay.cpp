#include "statisticdisplay.h"

#include <QDebug>

StatisticDisplay::StatisticDisplay(SubjectInterface* weatherData)
{
    m_weatherData = weatherData;
    m_weatherData->registerObserver(this);
}

void StatisticDisplay::update(int temperature, int humidity, int pressure)
{
    if(temperature < m_temperatureMin)
    {
        m_temperatureMin = temperature;
    }
    if(temperature > m_temperatureMax)
    {
        m_temperatureMax = temperature;
    }
    m_currentTemperature = temperature;
    display();
}

void StatisticDisplay::display()
{
    qDebug() << "Temperature statistic current/Max/Min : " + QString::number(m_currentTemperature) +" / " + QString::number(m_temperatureMax) + " / " + QString::number(m_temperatureMin);
}
