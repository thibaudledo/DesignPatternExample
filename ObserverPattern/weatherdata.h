#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subjectinterface.h"
#include "observerinterface.h"

class WeatherData : public SubjectInterface
{
    Q_INTERFACES(SubjectInterface)
public:
    WeatherData();
    ~WeatherData();

    int getTemperature() const;
    int getHumidity() const;
    int getPressure() const;

    void setTemperature(int value);
    void setHumidity(int value);
    void setPressure(int value);

    void setData(int, int, int);

    void mesurementsChanged(void);

    virtual void registerObserver(ObserverInterface*);
    virtual void removeObserver(ObserverInterface*);
    virtual void notifyObserver(void);

private:

    int temperature = 0;
    int humidity = 0;
    int pressure = 0;

};

#endif // WEATHERDATA_H
