#include "stdafx.h"
#include "Light.h"
#include <iostream>

using namespace std;

Light::Light()
{
}
Light::~Light()
{
}
void Light::on()
{
	cout << "Light is on" << endl;
}
void Light::off()
{
	cout << "Light is off" << endl;
}