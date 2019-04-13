#include "stdafx.h"
#include "Light.h"
#include <iostream>

using namespace std;

Light::Light()
{
}
Light::Light(string location)
{
	this->location = location;
}
Light::~Light()
{
}
void Light::on()
{
	cout <<location + " light is on" << endl;
}
void Light::off()
{
	cout << location + " light is off" << endl;
}