#include "stdafx.h"
#include "ChicagoStyleCheesePizza.h"


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";

	toppings.push_back("Shredded Mozzarella Cheese");//佐料
}
void ChicagoStyleCheesePizza::cut()
{
	cout << "Cutting the pizza into square slicse" << endl;//覆盖了Pizza中的cut方法，切成正方形
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
}
