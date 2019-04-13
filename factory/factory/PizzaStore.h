#pragma once
#include <string>
#include "Pizza.h"

//抽象工厂类
class PizzaStore
{
public:
	PizzaStore();
	~PizzaStore();

	virtual Pizza *orderPizza(string type);

	//工厂方法
	virtual Pizza *createPizza(string type) = 0;
};

