#pragma once
#include "AbstractDuckFactory.h"
#include "DuckCall.h"
#include "MallarDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "QuackCounter.h"
class CoutingDuckFactory : public AbstractDuckFactory
{
public:
	CoutingDuckFactory(){}
	~CoutingDuckFactory(){}
	Quackable* createMallarDuck()
	{
		return new QuackCounter(new MallarDuck);
	}
	Quackable* createDuckCall()
	{
		return new QuackCounter(new DuckCall);
	}
	Quackable* createRedheadDuck()
	{
		return new QuackCounter(new RedheadDuck);
	}
	Quackable* createRubberDuck() const { 
		return new QuackCounter(new RubberDuck);
	}
};

