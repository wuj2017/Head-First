#pragma once
#include "MenuItem.h"
#include "Menu.h"
#include "DinerMenuIterator.h"
#include "Iterator.h"
#include <iostream>
#include <string>
class DinerMenu : public Menu
{
private:
	static const int MAX_ITEMS = 6;
	int numberOfItems;
	MenuItem** menuItems;
public:
	//DinerMenu(){}
	DinerMenu() : numberOfItems(0)
	{
		menuItems = new MenuItem*[MAX_ITEMS+1];
		
		//初始化为0
		for (int i = 0; i <= MAX_ITEMS; ++i)
		{
			menuItems[i] = 0;//hasNext()才不会出错
		}

		addItem("Vegtarian BLT","(Fakin) Bacon with lettuce & tomato on whole wheat",true, 2.99);
		addItem("BLT","Bacon with lettuce & tomato on while wheat",false,2.99);
		addItem("Soup of the day","Soup of the day,with a side of potato aalad",false,3.29);
		addItem("Hotdog","A hot dog,with saurkraut, relish, onions, topped with cheese",false,3.05);
		addItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 3.99);
		addItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true, 3.89);
	}
	void addItem(string name, string description,bool vevetarian, float price)
	{
		MenuItem* menuItem = new MenuItem(name, description, vevetarian, price);

		if (numberOfItems>=MAX_ITEMS)
		{
			std::cerr << "Sorry,menu id full! Can't add item to menu" << endl;
		}
		else
		{
			menuItems[numberOfItems] = menuItem;
			numberOfItems++;
		}
	}
	MenuItem** getMenuItems()
	{
		return menuItems;
	}
	Iterator<MenuItem>* createIterator()
	{
		Iterator<MenuItem>* it = new DinerMenuIterator(menuItems);
		return it;
	}
	~DinerMenu(){}
};

