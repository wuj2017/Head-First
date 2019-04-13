#pragma once
#include "Quackable.h"
#include <iostream>
class DuckCall : public Quackable
{
public:
	DuckCall();
	~DuckCall();
	void quack()
	{
		std::cout << "Kwak\n";
	}
};

