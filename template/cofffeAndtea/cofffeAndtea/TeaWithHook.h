#pragma once
#include "CaffeineBeverageWithHook.h"
#include <iostream>
#include <string>

using namespace std;
class TeaWithHook : public CaffeineBeverageWithHook
{
public:
	TeaWithHook(){}
	~TeaWithHook(){}
	void brew()
	{
		cout << "Dripping Coffee through filter" << endl;
	}
	void addCondiments()
	{
		cout << "Adding Sugar and milk" << endl;
	}
	bool customerWantsCondiments()
	{
		string answer = getUserInput();
		if (answer == "y" || answer == "Y")
			return true;
		else
			return false;
	}
private:
	string getUserInput()
	{
		string answer;
		cout << "Would you like milk and suger with your coffee (y/n)? " ;
		cin >> answer;
		if (answer.empty())
			return "no";

		return answer;
	}
};
