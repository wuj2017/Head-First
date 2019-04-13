#pragma once
#include "Quackable.h"
#include <iostream>
class MallarDuck : public Quackable
{
public:
	MallarDuck(){}
	~MallarDuck(){}
	void quack()
	{
		std::cout << "Quack\n";
	}
};

