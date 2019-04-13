#pragma once
#include "Iterator.h"
#include "MenuItem.h"
#include <vector>
class CompositeIterator : public Iterator
{
private:
	std::vector<Iterator*> It;
public:
	CompositeIterator(Iterator* iterator)
	{
		It.push_back(iterator);
	}

	MenuComponent* next()
	{
		if (hasNext())
		{
			Iterator* iterator = It.front();
			MenuComponent* component = iterator->next();
			//if (component instanceof )
			//{

			//}
			//It.push_back(component->createIterator());
			return component;
		}
		else
			return NULL;
	}
	bool hasNext()
	{
		if (It.empty())
			return false;
		else
		{
			Iterator* iterator = It.front();
			if (!iterator->hasNext())
			{
				It.pop_back();
				return hasNext();
			}
			else
				return true;
		}
	}
	void remove()
	{
		throw new UnsupportedOperationException();
	}
	~CompositeIterator(){}
};

