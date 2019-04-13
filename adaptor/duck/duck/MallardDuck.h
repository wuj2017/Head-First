#pragma once
#include "Duck.h"
#include <iostream>

using namespace std;

//绿头鸭湿鸭子的子类
class MallardDuck :
	public Duck
{
public:
	MallardDuck(){}
	~MallardDuck(){}
	void quack(){ cout << "Quack" << endl; }
	void fly(){ cout << "I'm flying"<<endl; }
};

