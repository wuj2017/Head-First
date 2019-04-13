#pragma once
//#include "State.h"
#include "GumballMachine.h"
class SoldOutState : public State
{
private:
	GumballMachine* gumballMachine;
public:
	SoldOutState(GumballMachine* _gumballMachine):gumballMachine(_gumballMachine){}
	void insertQuarter()//Ͷ��25��Ǯ
	{
		std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
	}
	void  ejectQuarter()//�˳��˿͵�25��Ǯ
	{
		std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
	}
	void turnCrank()
	{
		std::cout << "You turned,but there are no gumball" << std::endl;
	}
	void dispense()
	{
		std::cout << "No gumball dispense" << std::endl;
	}
	std::string toString()
	{
		return "sold out";
	}
	~SoldOutState(){}
};

