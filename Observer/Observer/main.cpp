// Observer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "CurrentConditionDisply.h"
#include "WeatherData.h"


int main()
{
	//����һ��weatherdata����
	WeatherData weatherData;
	//�����۲��߶���
	CurrentConditionDisply curentDisplay(&weatherData);

	weatherData.setMeasurements(80, 65, 30.4f);
	weatherData.setMeasurements(82, 70, 29.3f);
	weatherData.setMeasurements(78, 90, 29.2f);
	return 0;
}