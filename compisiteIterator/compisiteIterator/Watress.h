#pragma once
#include "MenuComponent.h"
class Watress
{
private:
	MenuComponent* allMenu;
public:
	Watress(MenuComponent* _allMenu) : allMenu(_allMenu){}
	void printMenu()
	{
		allMenu->print();
	}

	void printVegetarianMenu()
	{
		Iterator* iterator = allMenu->createIterator();
		std::cout << "\nVEGETARIAN MENU\n------";
		while (iterator->hasNext())
		{
			MenuComponent* menuComponent = iterator->next();
			try
			{
				if (menuComponent->isVegetarian())
				{
					menuComponent->print();
				}
			}
			catch (UnsupportedOperationException* e){}

		}
	}
	~Watress(){};
};
