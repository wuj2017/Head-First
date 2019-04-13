#pragma once
#include <iostream>

using namespace std;
class CaffeineBeverageWithHook
{
public:
	CaffeineBeverageWithHook(){}
	~CaffeineBeverageWithHook(){}

	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	virtual void boilWater()
	{
		cout << "Boiling water" << endl;
	}
	virtual void pourInCup()
	{
		cout << "Pouring into cup" << endl;
	}
	void prepareRecipe()
	{
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments())
		{
			addCondiments();
		}
	}
	virtual bool customerWantsCondiments()
	{
		return true;
	}
};

