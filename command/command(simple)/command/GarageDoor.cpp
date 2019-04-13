#include "stdafx.h"
#include "GarageDoor.h"
#include <iostream>
using namespace std;

GarageDoor::GarageDoor()
{
}
GarageDoor::~GarageDoor()
{
}
void GarageDoor::up()
{
	cout << "Garage door is Open" << endl;
}
void GarageDoor::down()
{
	cout << "Garage door is Closed" << endl;
}
void GarageDoor::stop()
{
	cout << "Garage door is Stopped" << endl;
}
void GarageDoor::lightOn()
{
	cout << "Garage light is On" << endl;
}
void GarageDoor::lightOff()
{
	cout << "Garage light is Off" << endl;
}