#include "stdafx.h"
#include "ChicagoPizzaStore.h"


ChicagoPizzaStore::ChicagoPizzaStore()
{
}

Pizza* ChicagoPizzaStore::createPizza(string item)
{
	if (item == "cheese")
		return new ChicagoStyleCheesePizza;
	else
		return NULL;
}
ChicagoPizzaStore::~ChicagoPizzaStore()
{
}
