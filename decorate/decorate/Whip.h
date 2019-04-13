#pragma once
#include "CondimentDecorator.h"
/*
������һ��װ���ߣ��̳�Condimentdecorator
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

