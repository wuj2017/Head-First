#pragma once
#include "Duck.h"
#include <iostream>

using namespace std;

//��ͷѼʪѼ�ӵ�����
class MallardDuck :
	public Duck
{
public:
	MallardDuck(){}
	~MallardDuck(){}
	void quack(){ cout << "Quack" << endl; }
	void fly(){ cout << "I'm flying"<<endl; }
};

