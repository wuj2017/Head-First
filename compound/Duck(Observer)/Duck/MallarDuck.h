#pragma once
#include "Quackable.h"
#include "Obserable.h"
#include "MallarDuck.h"
#include <iostream>

class MallarDuck : public Quackable
{
private:
	Obserable* obseverable;
public:
	MallarDuck() :obseverable(new Obserable(this)){}
	void quack()
	{
		std::cout << "Quack\n";
		notifyObserver();
	}
	void registerObserver(Observer* _observer)
	{
		obseverable->registerObserver(_observer);
	}
	void notifyObserver()
	{
		obseverable->notifyObserver();
	}
	std::string toString()
	{
		return "Mallard Duck";
	}
};

