// decorate.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "CondimentDecorator.h"
#include "Whip.h"
#include "HouseBlend.h"
#include "Soy.h"

using namespace std;

int main()
{
	Beverage* beverage1 = new Espresso;//��һ��Ũ���ȣ�����Ҫ���ϣ���ӡ�����ͼ۸�
	cout << beverage1->getDescription() << " $"<< beverage1->cost()<<endl;

	Beverage* beverage2 = new DarkRoast; //����һ��DarkRoast������Ħ����Mocha������
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	Beverage* beverage3 = new HouseBlend;
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;
	return 0;
}

