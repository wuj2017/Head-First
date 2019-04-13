#pragma once
#include "CondimentDecorator.h"

/*
Ħ����һ��װ���ߣ��̳�Condimentdecorator
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

