#pragma once
#include "Quackable.h"
#include <iostream>
class RedheadDuck : public Quackable
{
public:
	RedheadDuck(){}
	~RedheadDuck(){}
	void quack()
	{
		std::cout << "Quack\n";
	}
};

