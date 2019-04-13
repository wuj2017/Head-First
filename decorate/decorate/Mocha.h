#pragma once
#include "CondimentDecorator.h"

/*
摩卡是一个装饰者，继承Condimentdecorator
*/
class Mocha : public CondimentDecorator
{
private:
	Beverage* beverage;

public:
	Mocha(Beverage *beverage);
	string getDescription();
	float cost();

	~Mocha();
};

