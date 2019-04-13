#pragma once
#include <string>

using namespace std;

//Beverage是一个抽象类，有两个方法
class Beverage
{
protected:
	string description;
public:
	Beverage();
	virtual string getDescription();// 已经在此类中实现
	virtual float cost() = 0;//必须在子类中实现
	~Beverage();
};

