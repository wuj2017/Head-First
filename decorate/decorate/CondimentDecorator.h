#pragma once
#include "Beverage.h"

/*
���ȣ�������ConditionDecorator�ܹ�ȡ��Beverage��
���Խ�ConditionDecorato��չ����Beverage
*/

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator();

	virtual string getDescription() = 0;//���еĵ���װ���߶���������ʵ��getDescription��

	~CondimentDecorator();
};

