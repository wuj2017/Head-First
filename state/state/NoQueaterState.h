#pragma once
//#include "State.h"
#include "GumballMachine.h"
//#include <iostream>
class NoQueaterState : public State
{
private:
	GumballMachine* gumballMachine;

public:
	NoQueaterState(GumballMachine* _gumballMachine):gumballMachine(_gumballMachine){}
	void insertQuarter()
	{
		std::cout << "You inserted a quarter" << std::endl;
		gumballMachine->setState(gumballMachine->getHasQuarterState());
	}
	void ejectQuarter()
	{
		std::cout << "You haven't inserted a quarter" << std::endl;
	}
	void turnCrank()
	{
		std::cout << "You turned, but there's no quarter" << std::endl;
	}
	void dispense()
	{
		std::cout << "You need to pay first" << std::endl;
	}
	std::string toString()
	{
		return "waiting for quarter";
	}
	~NoQueaterState(){}
};

