#pragma once
#include "Quackable.h"
class QuackCounter : public Quackable
{
private:
	Quackable* duck;
	static int numberOfQuacks;
public:
	QuackCounter(Quackable* _duck) :duck(_duck){}
	~QuackCounter(){}
	void quack()
	{
		duck->quack();
		numberOfQuacks++;
	}
	static int getQuacks()
	{
		return numberOfQuacks;
	}
	void registerObserver(Observer* observer)
	{
		duck->registerObserver(observer);
	}
	void notifyObserver()
	{
		duck->notifyObserver();
	}
	std::string toString()
	{
		return duck->toString();
	}
};

