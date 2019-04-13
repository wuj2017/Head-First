#pragma once
#include "Quackable.h"
#include <iostream>
class RubberDuck : public Quackable
{
	Obserable* obserable;
public:
	RubberDuck():obserable(new Obserable(this)){}
	~RubberDuck(){}
	void quack()
	{
		std::cout << "Squeak\n";
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
		return "Rubber Duck";
	}
};

