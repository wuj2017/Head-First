#pragma once
#include "CondimentDecorator.h"
/*
������һ��װ���ߣ��̳�Condimentdecorator
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

