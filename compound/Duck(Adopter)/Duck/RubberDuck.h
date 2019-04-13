#pragma once
#include "Quackable.h"
#include <iostream>
class RubberDuck : public Quackable
{
public:
	RubberDuck();
	~RubberDuck();
	void quack()
	{
		std::cout << "Squeak\n";
	}
};

