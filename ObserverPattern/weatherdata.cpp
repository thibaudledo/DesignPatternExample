#include "weatherdata.h"

#include <QDebug>

WeatherData::WeatherData()
{

}

WeatherData::~WeatherData()
{

}

void WeatherData::setTemperature(int value)
{
    temperature = value;
    mesurementsChanged();
}

void WeatherData::setHumidity(int value)
{
    humidity = value;
    mesurementsChanged();
}

void WeatherData::setPressure(int value)
{
    pressure = value;
    mesurementsChanged();
}

void WeatherData::setData(int Temperature, int Humidity, int Pressure)
{
    temperature = Temperature;
    humidity = Humidity;
    pressure = Pressure;
    mesurementsChanged();
}

int WeatherData::getTemperature() const
{
    return temperature;
}

int WeatherData::getHumidity() const
{
    return humidity;
}

int WeatherData::getPressure() const
{
    return pressure;
}

void WeatherData::mesurementsChanged()
{
    notifyObserver();
}

void WeatherData::registerObserver(ObserverInterface* o)
{
    /*
    int index = m_list.size();
    m_list.insert(index, o);*/
    m_list.append(o);
}

void WeatherData::removeObserver(ObserverInterface* o)
{
    /*
    int index = 0;
    for(auto ob : m_list)
    {
        if(ob->m_name == o->m_name) m_list.erase(m_list.begin()+index);
        index++;
    }*/
    m_list.removeOne(o);
}

void WeatherData::notifyObserver()
{
    for(auto o : m_list)
    {
        o->update(getTemperature(),getHumidity(),getPressure());
    }
}
