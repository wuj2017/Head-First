#pragma once
#include "Iterator.h"
#include "MenuComponent.h"
class NullIterator : public Iterator
{
public:
	NullIterator(){}
	~NullIterator(){}
	MenuComponent* next()
	{
		return NULL;
	}
	bool hasNext()
	{
		return false;
	}
	void remove()
	{
		throw new UnsupportedOperationException();
	}
};

