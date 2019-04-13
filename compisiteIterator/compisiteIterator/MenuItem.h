#pragma once
#include "MenuComponent.h"
#include <string>
#include <iostream>
#include "NullIterator.h"
class MenuItem : public MenuComponent
{
private:
	std::string name;
	std::string description;
	bool vegetarian;
	float price;
public:
	//MenuItem(std::string name,std::string description,bool vegetarian,float price)
	//{
	//	this->name = name;
	//	this->description = description;
	//	this->vegetarian = vegetarian;
	//	this->price = price;
	//}
	MenuItem(std::string _name, std::string _description, bool _vegetarian, float _price):
		name(_name), description(_description), vegetarian(_vegetarian), price(_price){}
	~MenuItem(){}
	std::string getName()
	{
		return name;
	}
	std::string getDescription()
	{
		return description;
	}
	float getPrice()
	{
		return price;
	}
	bool isVegetarian()
	{
		return vegetarian;
	}
	void print()
	{
		std::cout << "  " + getName();
		if (isVegetarian())
		{
			std::cout << "(V)";
		}
		std::cout << ", " << getPrice()<<std::endl;
		std::cout << "    --" + getDescription() << std::endl;
	}
	Iterator* createIterator()
	{
		return new NullIterator;
	}
 };

