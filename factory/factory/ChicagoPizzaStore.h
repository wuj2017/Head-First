#pragma once
#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"

class ChicagoPizzaStore :public PizzaStore
{
public:
	ChicagoPizzaStore();

	~ChicagoPizzaStore();
	//��ChicagoPizzaStore��ʵ��creatPizza(),��Ϊ����PizzaStore�����ǳ����
	//���幤������
	Pizza *createPizza(string item);
};

