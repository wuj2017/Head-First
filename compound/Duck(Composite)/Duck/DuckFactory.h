#pragma once
#include "AbstractDuckFactory.h"
#include "DuckCall.h"
#include "MallarDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
class DuckFactory :	public AbstractDuckFactory
{
public:
	DuckFactory(){}
	~DuckFactory(){}
	Quackable* createMallarDuck()
	{
		return new MallarDuck;
	}
	Quackable* createDuckCall()
	{
		return new DuckCall;
	}
	Quackable* createRedheadDuck()
	{
		return new RedheadDuck;
	}
	Quackable* createRubberDuck() const{
		return new RubberDuck;
	}
};

