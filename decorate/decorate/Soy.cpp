#include "stdafx.h"
#include "Soy.h"


Soy::Soy(Beverage* beverage)
{
	this->beverage = beverage;
}
string Soy::getDescription()
{
	return beverage->getDescription() + ",Soy";
}

float Soy::cost()
{
	return beverage->cost() + 0.15;
}
Soy::~Soy()
{
}
