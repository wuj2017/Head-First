#pragma once
#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"


class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	~NYPizzaStore();

	//��NYPizzaStore��ʵ��creatPizza(),��Ϊ����PizzaStore�����ǳ����
	//���幤������
	Pizza *createPizza(string item);
};

