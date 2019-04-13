#include "stdafx.h"
#include "modelduck.h"
#include <iostream>

using std::cout;
using std::endl;
ModelDuck::ModelDuck()
{
	flybehavior = new FlyNoWay;
	quackbehavior = new Quack;
}
void ModelDuck::display()
{
	cout << "I'm a model duck" << endl;
}