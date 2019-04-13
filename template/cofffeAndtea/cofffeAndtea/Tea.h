#pragma once
#include "CaffeineBeverage.h"

class Tea :	public CaffeineBeverage
{
public:
	Tea(){}
	~Tea(){}
	void brew()
	{
		cout << "Steeping the tea" << endl;
	}
	void addCondiments()
	{
		cout << "Adding the lemon" << endl;
	}
};

