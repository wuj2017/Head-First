#pragma once
#include "Quackable.h"
class AbstractDuckFactory
{
public:
	AbstractDuckFactory(){}
	virtual ~AbstractDuckFactory() = 0{}
	virtual Quackable* createMallarDuck() = 0;
	virtual Quackable* createRedheadDuck() = 0;
	virtual Quackable* createDuckCall() = 0;
	virtual Quackable* createRubberDuck() const = 0;
};

