// factory.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

using namespace std;
int main()
{
	NYPizzaStore nyStore;
	ChicagoPizzaStore chiicagoStore;

	Pizza *pizza = nyStore.orderPizza("cheese");
	cout << "Ethan ordered a " << pizza->getName() << '\n'<<endl;
	delete pizza;

	pizza = chiicagoStore.orderPizza("cheese");
	cout << "Joel ordered a " << pizza->getName() << '\n' << endl;
	delete pizza;
	
	return 0;
}

