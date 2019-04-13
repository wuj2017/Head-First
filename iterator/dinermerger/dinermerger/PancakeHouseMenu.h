#pragma once
#include <string>
#include <vector>
#include "MenuItem.h"
#include "Iterator.h"
#include "PancakeHouseMenuIterator.h"

using namespace std;
class PancakeHouseMenu
{
private:
	vector<MenuItem*> menuItems;
public:
	PancakeHouseMenu(){
		addItem("K&B's Pancake Breakfast","Pancakes with scrambled eggs, and toast",true,2.99);
		addItem("Regular Pancake Breakfast","Pancake with fried eggs£¬ sausage",false,2.99);
		addItem("Blueberry Pancake","Pancake made with fresh blueberries",true,3.49);
		addItem("Waffles","Waffles, with your cchoice of blueberries or strawberries",true,3.59);
	}
	void addItem(string name, string description, bool vegetarian, float price)
	{
		MenuItem* menuItem = new MenuItem(name,description,vegetarian,price);
		menuItems.push_back(menuItem);
	}
	vector<MenuItem*> getMemeItems()
	{
		return menuItems;
	}
	Iterator<MenuItem>* createIterator()
	{
		Iterator<MenuItem>* it = new PancakeHouseMenuIterator(menuItems);
		return it;
	}
	~PancakeHouseMenu(){}
};

