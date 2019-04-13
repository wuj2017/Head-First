#pragma once
#include "Iterator.h"
#include "MenuItem.h"
class DinerMenuIterator : public Iterator<MenuItem>
{
private:
	MenuItem** items;
	int position;

public:
	DinerMenuIterator(MenuItem** _items):items(_items),position(0){}

	MenuItem* next()
	{
		MenuItem* menuItem = items[position];
		position++;
		return menuItem;
	}
	bool hasNext()
	{
		if (items[position] == 0)
			return false;
		else
			return true;
	}

	~DinerMenuIterator(){}
};

