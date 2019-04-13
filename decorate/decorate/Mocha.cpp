#include "stdafx.h"
#include "Mocha.h"


Mocha::Mocha(Beverage* beverage)
{
	this->beverage = beverage;
}

string Mocha::getDescription()
{
	return beverage->getDescription() + ",Mocha";
}

float Mocha::cost()
{
	return beverage->cost() + 0.2;
}
Mocha::~Mocha()
{
}
