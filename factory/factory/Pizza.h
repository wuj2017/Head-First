#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Pizza
{
protected:
	//ÿ���������������ơ��������͡��������͡�һ������
	string name;
	string dough;
	string sauce;
	vector<string> toppings;
public:
	Pizza();
	~Pizza();
	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	virtual string getName();
};

