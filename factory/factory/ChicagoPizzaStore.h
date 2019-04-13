#pragma once
#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"

class ChicagoPizzaStore :public PizzaStore
{
public:
	ChicagoPizzaStore();

	~ChicagoPizzaStore();
	//在ChicagoPizzaStore类实现creatPizza(),因为他在PizzaStore类中是抽象的
	//具体工厂方法
	Pizza *createPizza(string item);
};

