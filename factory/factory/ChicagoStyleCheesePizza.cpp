#include "stdafx.h"
#include "ChicagoStyleCheesePizza.h"


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";

	toppings.push_back("Shredded Mozzarella Cheese");//����
}
void ChicagoStyleCheesePizza::cut()
{
	cout << "Cutting the pizza into square slicse" << endl;//������Pizza�е�cut�������г�������
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
}
