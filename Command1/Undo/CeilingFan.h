#ifndef _CEILINGFAN_H
#define _CEILINGFAN_H
#include"Undo.h"

class CeilingFan
{
public:
	static const int HIGH = 3;
	static const int MEDIUM = 2;
	static const int LOW = 1;
	static const int OFF = 0;

	CeilingFan(std::string location):location(location),speed(OFF){}
	void high() const
	{
		speed = HIGH;
	}
	void medium()const
	{
		speed = MEDIUM;
	}
	void low() const
	{
		speed = LOW;
	}
	void off() const
	{
		speed = OFF;
	}
	int getSpeed() const 
	{
		return speed;
	}
private:
	mutable int speed;
	std::string location;
};
#endif