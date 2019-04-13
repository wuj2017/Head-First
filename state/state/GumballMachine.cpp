#include "stdafx.h"

#include "GumballMachine.h"

#include "SoldState.h"
#include "SoldOutState.h"
#include "HasQuarterState.h"
#include "NoQueaterState.h"
#include "WinnerState.h"

GumballMachine::GumballMachine(int _count) :count(_count)
{
	soldOutState = new SoldOutState(this);
	noQuarterState = new NoQueaterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);
	winnerState = new WinnerState(this);
	//this->count = count;
	if (_count > 0)
		state = noQuarterState;
}
void GumballMachine::insertQuarter()
{
	state->insertQuarter();
}
void GumballMachine::ejectQuarter()
{
	state->ejectQuarter();
}
void GumballMachine::turnCrank()
{
	state->turnCrank();
	state->dispense();
}
void GumballMachine::setState(State* state)
{
	this->state = state;
}
void GumballMachine::releaseball()
{
	std::cout << "A gumball comes rolling out the slot..." << std::endl;
	if (count != 0)
	{
		count--;
	}
}
State* GumballMachine::getNoQuarterState()
{
	return noQuarterState;
}
State* GumballMachine::getHasQuarterState()
{
	return hasQuarterState;
}
State* GumballMachine::getSoldOutState()
{
	return soldOutState;
}
State* GumballMachine::getSoldState()
{
	return soldState;
}
State* GumballMachine::getWinerState()
{
	return winnerState;
}
int GumballMachine::getCount()
{
	return count;
}
std::string GumballMachine::toString()
{
	std::stringstream value;
	value << "\nMighty Gumball, inc";
	value << "\nC++-enabled Standing Gumball Model #2018";
	value << "\nInventory: " << count << " gumball";
	if (count > 1)
	{
		value << "s";
	}
	value << "\n";
	value << "Machine is " << state->toString() << std::endl;
	return value.str();
}
void GumballMachine::refill(int count)
{
	this->count = count;
	state = noQuarterState;
}
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
GumballMachine::~GumballMachine(){
	delete soldOutState;
	delete noQuarterState;
	delete hasQuarterState;
	delete soldState;
	delete winnerState;
}