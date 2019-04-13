#include "stdafx.h"
#include "behavior.h"
#include <iostream>

using std::cout;
using std::endl;
void FlyWithWings :: fly()
{
	cout << "I'm flying" << endl;
}

void FlyNoWay::fly()
{
	cout << "I can't fly" << endl;
}
void FlyRocket::fly()
{
	cout << "I'm flying with a rocket" << endl;
}
 void Quack:: quack()
{
	cout << "Quack�¸½�" << endl;
}

 void MuteQuack::quack()
{
	cout << "Silence" << endl;
}

 void Squeak::quack()
{
	cout << "Squack" << endl;
}

