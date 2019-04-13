#pragma once
#include "UnsupportedOperationException.h"
#include <string>
class MenuComponent
{
public:
	MenuComponent(){}
	virtual ~MenuComponent(){}
	virtual void add(MenuComponent* menuComponent)
	{
		throw new UnsupportedOperationException();
	}
	virtual void remove(MenuComponent* menuComponent)
	{
		throw new UnsupportedOperationException();
	}
	virtual MenuComponent* getChild(int i)
	{
		throw new UnsupportedOperationException();
	}
	virtual std::string getName()
	{
		throw new UnsupportedOperationException();
	}
	virtual std::string getDescription()
	{
		throw new UnsupportedOperationException();
	}
	virtual float getPrice()
	{
		throw new UnsupportedOperationException();
	}
	virtual bool isVegetarian()
	{
		throw new UnsupportedOperationException();
	}
	virtual void print()
	{
		throw new UnsupportedOperationException();
	}
};

