#pragma once
#include "Quackable.h"
#include <vector>
class Flock : public Quackable
{
private:
	std::vector<Quackable*> quacks;
public:
	Flock(){}
	~Flock(){}
	void add(Quackable* quack)
	{
		quacks.push_back(quack);
	}
	void quack()
	{
		std::vector<Quackable*>::iterator it = quacks.begin();
		while (it!=quacks.end())
		{
			Quackable* _quack = *it;
			_quack->quack();
			it++;
		}
	}
};

