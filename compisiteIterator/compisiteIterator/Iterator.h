#pragma once

#include "MenuComponent.h"
class Iterator
{
public:
	Iterator(){}
	virtual ~Iterator(){}
	virtual bool hasNext() = 0;
	virtual MenuComponent* next();
};

