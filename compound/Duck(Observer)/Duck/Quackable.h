#pragma once
#include "QuackObservable.h"
#include <string>
class Quackable : public QuackObservable
{
public:
	virtual ~Quackable()=0 {}
	virtual void quack() = 0;
	virtual std::string toString() = 0;
};

