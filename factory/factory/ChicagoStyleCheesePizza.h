#pragma once
#include "Pizza.h"
class ChicagoStyleCheesePizza : public Pizza
{
public:
	ChicagoStyleCheesePizza();
	~ChicagoStyleCheesePizza();

	void cut();//覆盖了Pizza中的cut方法
};

