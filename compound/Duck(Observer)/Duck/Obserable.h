#pragma once

#include "Observer.h"
#include <vector>
#include "QuackObservable.h"
class Obserable : public QuackObservable
{
private:
	std::vector<Observer*> observer;
	QuackObservable* duck;
public:
	Obserable(QuackObservable* _duck) :duck(_duck){}
	void registerObserver(Observer* _observer)
	{
		observer.push_back(_observer);
	}
	void notifyObserver()
	{
		std::vector<Observer*> ::iterator it = observer.begin();
		while (it != observer.end())
		{
			Observer* _observer = *it;
			_observer->update(duck);
			it++;
		}
	}
	std::vector<Observer*> getObservers(){
		return observer;
	}
};

