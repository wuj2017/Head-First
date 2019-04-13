#pragma once
#include "Quackable.h"
#include <iostream>
#include "Observer.h"
#include "Obserable.h"
class DuckCall : public Quackable
{
private:
	Obserable* obserable;
public:
	DuckCall():obserable(new Obserable(this)){}
	void quack()
	{
		std::cout << "Kwak\n";
		notifyObserver();
	}
	void registerObserver(Observer* observer)
	{
		obserable->registerObserver(observer);
	}
	void notifyObserver()
	{
		obserable->notifyObserver();
	}
	std::string toString()
	{
		return "Duck Call";
	}
};

