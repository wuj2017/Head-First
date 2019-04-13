
#include "stdafx.h"
#include "Obserable.h"

Obserable::Obserable(QuackObservable* _duck) :duck(_duck){}
void Obserable::registerObserver(Observer* _observer)
{
	observer.push_back(_observer);
}
void Obserable::notifyObserver()
{
	std::vector<Observer*> ::iterator it = observer.begin();
	while (it != observer.end())
	{
		Observer* _observer = *it;
		_observer->update(duck);
		it++;
	}
}
std::vector<Observer*> Obserable::getObservers(){
	return observer;
}