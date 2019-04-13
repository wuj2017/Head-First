#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Pizza
{
protected:
	//每个比萨都具有名称、面团类型、酱料类型、一套佐料
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

