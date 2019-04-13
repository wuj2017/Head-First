#pragma once
#include "Subject.h"
#include <vector>
#include "Observer.h"
#include <algorithm>
using namespace std;
class WeatherData : public Subject
{
public:
	WeatherData();
	void registerObserver(Observer* o);
	void removeObserver(Observer* o);
	void notifyObserver();
	
	void measurementsChange();
	void setMeasurements(float temperature,float humidity,float pressure);
	~WeatherData();
private:
	vector<Observer *> observers;
	float temperature;
	float humidity;
	float pressure;
};

