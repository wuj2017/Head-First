#include "stdafx.h"
#include "PizzaStore.h"


PizzaStore::PizzaStore()
{
}
Pizza* PizzaStore::orderPizza(string type)
{
	Pizza* pizza = createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}

PizzaStore::~PizzaStore()
{
}
