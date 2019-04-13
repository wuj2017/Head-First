#pragma once
#include "CondimentDecorator.h"
/*
豆浆是一个装饰者，继承Condimentdecorator
*/
class Soy : public CondimentDecorator
{
private:
	Beverage* beverage;
public:
	Soy(Beverage* beverage);
	string getDescription();
	float cost();
	~Soy();
};

