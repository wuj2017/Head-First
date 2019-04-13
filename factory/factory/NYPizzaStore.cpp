#include "stdafx.h"
#include "NYPizzaStore.h"

 

NYPizzaStore::NYPizzaStore()
{
}
Pizza* NYPizzaStore::createPizza(string item)
{
	if (item == "cheese")
		return new NYStyleCheesePizza;
	else
		return NULL;
}

NYPizzaStore::~NYPizzaStore()
{
}
