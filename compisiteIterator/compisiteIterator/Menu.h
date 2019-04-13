#pragma once
#include "MenuComponent.h"
#include <vector>
#include <algorithm>
#include <iostream>
class Menu : public MenuComponent
{
private:
	std::vector<MenuComponent*> menuComponents;
	std::string name;
	std::string description;
public:
	Menu(std::string _name,std::string _description):
		name(_name), description(_description){}
	void add(MenuComponent* menuComponent)
	{
		menuComponents.push_back(menuComponent);
	}
	void remove(MenuComponent* menuComponent)
	{
		std::remove(menuComponents.begin(), menuComponents.end(), menuComponent);
	}
	MenuComponent* getChild(int i)
	{
		return menuComponents.at(i);
	}
	std::string getName()
	{
		return name;
	}
	std::string getDescription()
	{
		return description;
	}
	void print()
	{
		std::cout << "\n" + getName();
		std::cout << ", " + getDescription()<<std::endl;
		std::cout << "---------------------" << std::endl;

		std::vector<MenuComponent*>::iterator it = menuComponents.begin();
		while (it != menuComponents.end())
		{
			MenuComponent* menuComponent = *it;
			it++;
			menuComponent->print();
		}
	}
	~Menu(){}
};

