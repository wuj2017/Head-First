#pragma once
#include "Beverage.h"
/*
���ȣ���Esresso��չ��Beverage�࣬��ΪEspresso��һ������
*/
class Espresso : public Beverage //Ũ����
{
public:
	Espresso();
	float cost();
	~Espresso();
};

