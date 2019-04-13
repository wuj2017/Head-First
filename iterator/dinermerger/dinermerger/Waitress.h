#pragma once
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
#include "Iterator.h"
#include "MenuItem.h"

class Waitress
{
private:
	PancakeHouseMenu* pancakeHouseMenu;
	DinerMenu* dinerMenu;
	void printMenu(Iterator<MenuItem>* iterator)
	{
		while (iterator->hasNext())
		{
			MenuItem* menuItem = iterator->next();
			cout << menuItem->getName() << ", " << menuItem->getPrice() << "--" << menuItem->getDescription() << endl;
		}
	}
public:
	Waitress(PancakeHouseMenu* pancakeHouseMenu,DinerMenu* dinerMenu){
		this->pancakeHouseMenu = pancakeHouseMenu;
		this->dinerMenu = dinerMenu;
	}

	~Waitress(){}

	void printMenu()
	{
		Iterator<MenuItem>* pancakeIterator = pancakeHouseMenu->createIterator();
		Iterator<MenuItem>* dinerIterator = dinerMenu->createIterator();

		cout << "MENU\n---\nNREAHFAST" << endl;
		printMenu(pancakeIterator);
		cout << "\nLUNCH\n";
		printMenu(dinerIterator);
	}
};

