#pragma once
#include "Observer.h"
#include "DisplayElment.h"
#include "Observer.h"
#include "Subject.h"
#include <iostream>

class CurrentConditionDisply :public Observer,public DisplayElment
{
public:
	CurrentConditionDisply();
	CurrentConditionDisply(Subject* weatherData);
	void update(float temperature, float humidity, float pressure);
	void display();
	~CurrentConditionDisply();
private:
	float temperature;
	float humidity;
	Subject* weatherData;
	
};

