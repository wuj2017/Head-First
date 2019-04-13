#pragma once
#include <string>
using namespace std;
class MenuItem
{
private:
	string name;
	string description;
	bool vegetarian;
	float price;
public:
	MenuItem(){}
	MenuItem(string name,
			 string description,
			 bool vegetarian,
			 float price)
	{
		this->name = name;
		this->description = description;
		this->vegetarian = vegetarian;
		this->price = price;
	}
	string getName()
	{
		return name;
	}
	string getDescription()
	{
		return description;
	}
	float getPrice()
	{
		return price;
	}
	bool isvegetarian()
	{
		return vegetarian;
	}
	~MenuItem();
};

