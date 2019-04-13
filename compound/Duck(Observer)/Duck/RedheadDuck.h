#pragma once
#include "Quackable.h"
#include <iostream>
class RedheadDuck : public Quackable
{
private:
	Obserable* obserable;
public:
	RedheadDuck():obserable(new Obserable(this)){}
	~RedheadDuck(){}
	void quack()
	{
		std::cout << "Quack\n";
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
		return "Redhead Duck";
	}
};

