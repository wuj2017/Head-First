#include "stdafx.h"
#include "WeatherData.h"


WeatherData::WeatherData()
{
	observers = vector<Observer *>();
}
void WeatherData::registerObserver(Observer* o)
{
	observers.push_back(o);
}
void WeatherData::removeObserver(Observer* o)
{
	vector<Observer *>::iterator it = find(observers.begin(), observers.end(), o);
	if (it != observers.end())
		observers.erase(it);
}
void WeatherData::notifyObserver()
{
	for (int i = 0; i < observers.size(); i++)
	{
		observers[i]->update(temperature, humidity, pressure);
	}
}
void WeatherData::measurementsChange()
{
	notifyObserver();
}
void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChange();
}
WeatherData::~WeatherData()
{
}
