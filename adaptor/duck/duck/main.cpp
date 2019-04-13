// duck.cpp : �������̨Ӧ�ó������ڵ㡣
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
	MallardDuck* duck = new MallardDuck;//MallardDuck�̳���Duck

	WildTurkey* turkey = new WildTurkey;//WildTurkey�̳���Turkey(����һֻ��)
	Duck* turkeyAdapter = new TurkeyAdapter(turkey);//TurkeyAdapter�̳���Duck������һ����װѼ�ӵĻ𼦣�

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
	testDuck(turkeyAdapter);//������һֻ��װ��Ѽ�ӵĻ�
	//turkeyAdapter->quack();
	//turkeyAdapter->fly();

	delete turkeyAdapter;
	delete turkey;
	delete duck;
	return 0;
}

