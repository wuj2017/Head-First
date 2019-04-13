#pragma once
#include "Observer.h"
#include "Quackologist.h"
#include "Quackable.h"
#include <iostream>
#include "QuackObservable.h"
#include <string>
class Quackologist : public Observer
{
public:
	void update(QuackObservable* duck)
	{
		//std::string s = d;
		std::cout << "Quackologist: " << dynamic_cast<Quackable*>(duck)->toString() << " just quacked." << std::endl;
	}
	std::string toString()
	{
		return "Quackologist";
	}
};

