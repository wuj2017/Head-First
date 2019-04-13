#pragma once

class State
{
public:
	State(){}
	virtual ~State(){}
	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
	virtual std::string toString() = 0;
};

