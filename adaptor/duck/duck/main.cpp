// duck.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <random>
#include <iostream>
#include "MallardDuck.h"
#include "Duck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

using namespace std;

void testDuck(Duck* duck)
{
	duck->quack();
	duck->fly();
}

int main()
{
	MallardDuck* duck = new MallardDuck;//MallardDuck继承了Duck

	WildTurkey* turkey = new WildTurkey;//WildTurkey继承了Turkey(这是一只火鸡)
	Duck* turkeyAdapter = new TurkeyAdapter(turkey);//TurkeyAdapter继承了Duck（这是一个假装鸭子的火鸡）

	cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();
	cout << endl;

	cout << "The Duck says..." << endl;
	testDuck(duck);
	//duck->quack();
	//duck->fly();
	cout << endl;

	cout << "The TurkeyAdopter syas..." << endl;
	testDuck(turkeyAdapter);//传入了一只假装是鸭子的火鸡
	//turkeyAdapter->quack();
	//turkeyAdapter->fly();

	delete turkeyAdapter;
	delete turkey;
	delete duck;
	return 0;
}

