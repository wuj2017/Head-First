// Observer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CurrentConditionDisply.h"
#include "WeatherData.h"


int main()
{
	//建立一个weatherdata对象
	WeatherData weatherData;
	//建立观察者对象
	CurrentConditionDisply curentDisplay(&weatherData);

	weatherData.setMeasurements(80, 65, 30.4f);
	weatherData.setMeasurements(82, 70, 29.3f);
	weatherData.setMeasurements(78, 90, 29.2f);
	return 0;
}