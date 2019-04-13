#pragma once
#include "Quackable.h"
#include <vector>
class Flock : public Quackable
{
private:
	std::vector<Quackable*> ducks;
public:
	Flock(){}
	~Flock(){}
	void add(Quackable* _duck)
	{
		ducks.push_back(_duck);
	}
	void quack()
	{
		std::vector<Quackable*>::iterator it = ducks.begin();
		while (it != ducks.end())
		{
			Quackable* _quack = *it;
			_quack->quack();
			it++;
		}
	}
	void registerObserver(Observer* observer)
	{
		std::vector<Quackable*>::iterator it = ducks.begin();
		while (it != ducks.end())
		{
			Quackable* _quack = *it;
			_quack->registerObserver(observer);
			it++;
		}
	}
	void notifyObserver()
	{}
	std::string toString()
	{
		return "Flock of Duck";
	}
};

