#pragma once
#include <string>
#include "Pizza.h"

//���󹤳���
class PizzaStore
{
public:
	PizzaStore();
	~PizzaStore();

	virtual Pizza *orderPizza(string type);

	//��������
	virtual Pizza *createPizza(string type) = 0;
};

