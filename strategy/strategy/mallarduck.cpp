#include "stdafx.h"
#include "mallarduck.h"
#include <iostream>

using std::cout;
using std::endl;

MallarDuck::MallarDuck(){
	quackbehavior = new Quack;
	flybehavior = new FlyWithWings;
}
void MallarDuck::display()
{
	cout << "I'm a real Mallard duck" << endl;
}