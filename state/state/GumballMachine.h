#pragma once
#include <iostream>
#include "State.h"

#include <string>
#include <sstream>

//ÌÇ¹û»ú Àà
class GumballMachine
{
private:
	//static const int SOLD_OUT = 0;
	//static const int NO_QUARTER = 1;
	//static const int HAS_QUARTER = 2;
	//static const int SOLD = 3;
	
	//int state;
	//int count;
	State* soldOutState;
	State* noQuarterState;
	State* hasQuarterState;
	State* soldState;
	State* winnerState;
	
	State* state;
	int count;
	

public:
	GumballMachine(int _count);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void setState(State* state);
	void releaseball();
	State* getNoQuarterState();
	State* getHasQuarterState();
	State* getSoldOutState();
	State* getSoldState();
	State* getWinerState();
	int getCount();
	std::string toString();
	void refill(int count);
	//void insertQuarter()
	//{
	//	if (state==HAS_QUARTER)
	//		std::cout << "You can't insert another quarter" << std::endl;
	//	else if (state == NO_QUARTER)
	//	{
	//		state = HAS_QUARTER;
	//		std::cout << "You inserted a quarter" << std::endl;
	//	}
	//	else if (state==SOLD_OUT)
	//	{
	//		std::cout << "You can't insert a quater,the machine is sold out" << std::endl;
	//	}
	//	else if (state==SOLD)
	//	{
	//		std::cout << "Please wait,we're already giving you agumball" << std:: endl;
	//	}
	//		
	//}
	~GumballMachine();
};

