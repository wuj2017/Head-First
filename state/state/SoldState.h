#pragma once
//#include "State.h"
#include "GumballMachine.h"
class SoldState : public State
{
private:
	GumballMachine* gumballMachine;

public:
	SoldState(GumballMachine* _gumballMachine) : gumballMachine(_gumballMachine){ }
	//SoldState(GumballMachine* _gumballMachine)
	//{
	//	this->gumballMachine=_gumballMachine;
	//}
	void insertQuarter()//投入25分钱
	{
		std::cout << "Please wait,we're already giving you a gumball" << std::endl;
	}
	void  ejectQuarter()//退出顾客的25分钱，并将状态转到NoQuarterState
	{
		std::cout << "Sorry,you already turned the crank" << std::endl;
	}
	void turnCrank()
	{
		std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
	}
	void dispense()
	{
		gumballMachine->releaseball();
		if (gumballMachine->getCount()>0)
			gumballMachine->setState(gumballMachine->getNoQuarterState());
		else
		{
			std::cout << "Oops, out of gumball" << std::endl;
			gumballMachine->setState(gumballMachine->getSoldOutState());
		}	
	}
	std::string toString()
	{
		return "dispensing a gumball";
	}
	~SoldState(){}
};

