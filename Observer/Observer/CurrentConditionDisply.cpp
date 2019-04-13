#include "stdafx.h"
#include "CurrentConditionDisply.h"


CurrentConditionDisply::CurrentConditionDisply(Subject* w)
{
	weatherData = w;
	weatherData->registerObserver(this);
}
void CurrentConditionDisply::update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	display();
}
void CurrentConditionDisply::display()
{
	std::cout << "Current condition:" << temperature << "F degree and" << humidity << "% humidity" << std::endl;
}
CurrentConditionDisply::~CurrentConditionDisply()
{
}
