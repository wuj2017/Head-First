// decorate.cpp : 定义控制台应用程序的入口点。
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
	Beverage* beverage1 = new Espresso;//订一杯浓咖啡，不需要调料，打印描述和价格
	cout << beverage1->getDescription() << " $"<< beverage1->cost()<<endl;

	Beverage* beverage2 = new DarkRoast; //制作一个DarkRoast对象，用摩卡（Mocha）修饰
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

