#include "stdafx.h"
#include "CeilingFan.h"
#include <iostream>

CeilingFan::CeilingFan()
{
}
CeilingFan::CeilingFan(string location)
{
	this->location = location;
}
CeilingFan::~CeilingFan()
{
}
void CeilingFan::high()
{
	level = HIGH;
	cout << location + " ceiling fan is high" << endl;
}
void CeilingFan::medium()
{
	level = MEDIUM;
	cout << location + " ceiling fan is medium" << endl;
}
void CeilingFan::low()
{
	level = LOW;
	cout << location + " ceiling fan is low" << endl;
}
void CeilingFan::off()
{
	cout << location + " ceiling fan is off" << endl;
}
int CeilingFan::getSpeed()
{
	return level;
}