#include "stdafx.h"
#include "Pizza.h"


Pizza::Pizza()
{
}


Pizza::~Pizza()
{
}
void Pizza::prepare()
{
	cout << "Preparing " << name << endl;
	cout << "Tossing dough..." << endl;
	cout << "Adding sauce..." << endl;
	cout << "Adding topping: " << endl;
	for (int i = 0; i < toppings.size();i++)
	{
		cout << "  " << toppings[i] << endl;
	}
}
void Pizza::bake()
{
	cout << "Bake for 25 minutes at 350" << endl;
}
void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" << endl;//ÇÐ³É¶Ô½ÇÐÎ
}
void Pizza::box()
{
	cout << "Place pizza in official PizzaStore box" << endl;
}
string Pizza::getName()
{
	return name;
}