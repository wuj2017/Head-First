#pragma once
#include "Beverage.h"
/*
这是另一种饮料，和Espresso
*/
class HouseBlend : public Beverage
{
public:
	HouseBlend();
	float cost();
	~HouseBlend();
};

