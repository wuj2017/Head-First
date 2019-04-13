#include "stdafx.h"
#include "Beverage.h"


Beverage::Beverage() :description("Unknown Beverage")
{
}

string Beverage::getDescription()
{
	return description;
}


Beverage::~Beverage()
{
}
