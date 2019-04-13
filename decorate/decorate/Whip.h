#pragma once
#include "CondimentDecorator.h"
/*
奶泡是一个装饰者，继承Condimentdecorator
*/
class Whip : public CondimentDecorator
{
private:
	Beverage* beverage;
public:
	Whip(Beverage* beverage);
	string getDescription();
	float cost();
	~Whip();
};

