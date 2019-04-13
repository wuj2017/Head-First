#pragma once
#include "Observer.h"

class Observer;

class QuackObservable
{
public:
	virtual ~QuackObservable()=0{}
	virtual void registerObserver(Observer* observer) = 0;
	virtual void notifyObserver()=0;
};
