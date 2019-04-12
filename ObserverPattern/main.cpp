#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"
#include "statisticdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData* weatherData = new WeatherData();

    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);

    StatisticDisplay* statisticDisplay = new StatisticDisplay(weatherData);

    weatherData->setData(26,56,1035);

    weatherData->setData(24, 42, 1076);

    weatherData->setData(35, 76, 1002);

    weatherData->setData(42, 76, 1002);

    weatherData->setData(35, 76, 1002);

    return a.exec();
}
