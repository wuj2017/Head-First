#pragma once
#include "Iterator.h"
#include "MenuItem.h"
#include <vector>
class PancakeHouseMenuIterator : public Iterator<MenuItem>
{
private:
	std::vector<MenuItem*> items;
	int position;
public:
	PancakeHouseMenuIterator(std::vector<MenuItem*> _items):items(_items),position(0){}
	MenuItem* next()
	{
		MenuItem* menuItem = items[position];
		position++;
		return menuItem;
	}

	bool hasNext()
	{
		if (position>=items.size())
			return false;
		else
			return true;
	}
	~PancakeHouseMenuIterator(){}
};

