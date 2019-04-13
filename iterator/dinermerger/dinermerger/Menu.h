#pragma once
#include "Iterator.h"
#include "MenuItem.h"
class Menu
{
public:
	Menu(){}
	virtual ~Menu(){}
	virtual Iterator<MenuItem>* createIterator() = 0;
};

