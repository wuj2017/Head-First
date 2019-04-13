#pragma once
#include "Beverage.h"

/*
首先，必须让ConditionDecorator能够取代Beverage，
所以将ConditionDecorato扩展来自Beverage
*/

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator();

	virtual string getDescription() = 0;//所有的调料装饰者都必须重新实现getDescription。

	~CondimentDecorator();
};

