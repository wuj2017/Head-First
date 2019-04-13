#pragma once
#include "State.h"
#include "GumballMachine.h"
class WinnerState :	public State
{
private:
	GumballMachine* gumballMachine;
public:
	WinnerState(GumballMachine* _gumballMachine) :gumballMachine(_gumballMachine){}
	void insertQuarter()//投入25分钱
	{
		std::cout << "Please wait,we're already giving you a gumball" << std::endl;
	}
	void  ejectQuarter()//退出顾客的25分钱，并将状态转到NoQuarterState
	{
		std::cout << "Please wait,we're already giving you a gumball" << std::endl;
	}
	void turnCrank()
	{
		std::cout << "Turning again doesn't get you another gumball!" << std::endl;
	}
	void dispense()
	{
		std::cout << "YOU ARE WINNER! You get two gumballs for your quarter" << std::endl;
		gumballMachine->releaseball();
		if (gumballMachine->getCount() == 0)
		{
			std::cout << "Oops, out of gumball" << std::endl;
			gumballMachine->setState(gumballMachine->getSoldOutState());
		}
		else
		{
			gumballMachine->releaseball();
			if (gumballMachine->getCount() > 0)
				gumballMachine->setState(gumballMachine->getNoQuarterState());
			else
			{
				std::cout << "Oops, out of gumball" << std::endl;
				gumballMachine->setState(gumballMachine->getSoldOutState());
			}
		}
	}
	std::string toString()
	{
		return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
	}
	~WinnerState(){}
};

