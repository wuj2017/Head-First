#pragma once
#include "Turkey.h"
#include <iostream>
using namespace std;
class WildTurkey :
	public Turkey
{
public:
	WildTurkey(){}
	~WildTurkey(){}
	void gobble(){ cout << "Gobble gobble" << endl; }
	void fly(){ cout << "I'm flying a short diatance" << endl; }
};

