#include "stdafx.h"
#include "Whip.h"


Whip::Whip(Beverage* beverage)
{
	this->beverage = beverage;
}
string Whip::getDescription()
{
	return beverage->getDescription() + ",Whip";
}

float Whip::cost()
{
	return beverage->cost() + 0.1;
}
Whip::~Whip()
{
}
