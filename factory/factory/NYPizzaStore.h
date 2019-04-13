#pragma once
#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"


class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	//在NYPizzaStore类实现creatPizza(),因为他在PizzaStore类中是抽象的
	//具体工厂方法
	Pizza *createPizza(string item);
};

