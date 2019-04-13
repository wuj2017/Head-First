#pragma once
#include "Beverage.h"
/*
首先，让Esresso扩展自Beverage类，因为Espresso是一种饮料
*/
class Espresso : public Beverage //浓咖啡
{
public:
	Espresso();
	float cost();
	~Espresso();
};

