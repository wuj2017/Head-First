#pragma once
//#include "State.h"
#include <process.h>
#include "GumballMachine.h"
#include <ctime>
class HasQuarterState : public State
{
private:
	GumballMachine* gumballMachine;
	int _rand;
public:
	HasQuarterState(GumballMachine* _gumballMachine):gumballMachine(_gumballMachine),_rand(0){
		srand((unsigned)time(NULL));//每次产生的随机数值不一样
	}
	void insertQuarter()//投入25分钱
	{
		std::cout << "You can't insert another quarter" << std::endl;
	}
	void  ejectQuarter()//退出顾客的25分钱，并将状态转到NoQuarterState
	{
		std::cout << "Quarter return" << std::endl;
		gumballMachine->setState(gumballMachine->getNoQuarterState());
	}
	void turnCrank()
	{
		std::cout << "You turned..." << std::endl;
		int winner =rand() % 5;
		if ((winner == 0) && (gumballMachine->getCount() > 1))
			gumballMachine->setState(gumballMachine->getWinerState());
		else
			gumballMachine->setState(gumballMachine->getSoldState());
	}
	void dispense()
	{
		std::cout << "No gumball dispense" << std::endl;
	}
	std::string toString()
	{
		return "waiting for turn of crank";
	}
	~HasQuarterState(){}
};

