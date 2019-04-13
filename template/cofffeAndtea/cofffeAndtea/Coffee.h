#pragma once
#include "CaffeineBeverage.h"
class Coffee :
	public CaffeineBeverage
{
public:
	Coffee(){}
	~Coffee(){}
	void brew()
	{
		cout << "Dripping Coffee through filter" << endl;
	}
	void addCondiments()
	{
		cout << "Adding Sugar and milk" << endl;
	}
};

