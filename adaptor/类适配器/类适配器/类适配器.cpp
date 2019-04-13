// 类适配器.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//适配器目标类，鸭子接口
class Duck
{
public:
	virtual void quack() = 0;
	virtual void fly() = 0;
};

//具体鸭子，绿头鸭湿鸭子的子类
class MallardDuck : public Duck
{
public:
	void quack(){ cout << "Quack" << endl; }
	void fly(){ cout << "I'm flying" << endl; }
};

//被适配者类，火鸡接口
class Turkey
{
public:
	virtual void gobble() = 0;
	virtual void fly() = 0;//火鸡会飞，虽然飞不远
};

//具体火鸡类，
class WildTurkey :public Turkey
{
public:
	void gobble(){ cout << "Gobble gobble" << endl; }
	void fly(){ cout << "I'm flying a short diatance" << endl; }
};

//此时却鸭子对象，想用火鸡对象冒充，适配器(Adapter), 只能针对具体类进行适配
class TurkeyAdapter :public Duck, WildTurkey
{
public:
	TurkeyAdapter(){ }
	~TurkeyAdapter(){};
	void quack()
	{ 
		gobble(); 
	}
	void fly()
	{
		for (int i = 0; i < 5; i++)
		{
			WildTurkey::fly();
		}
	}
};

void testDuck(Duck* duck)
{
	duck->quack();
	duck->fly();
}
int main()
{
	Duck* duck = new MallardDuck;

	WildTurkey* turkey = new WildTurkey;
	Duck* turkeyAdapter = new TurkeyAdapter;

	cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();

	cout << "\nThe Duck says..." << endl;
	testDuck(duck);

	cout << "\nThe TurkeyAdapter says..." << endl;
	testDuck(turkeyAdapter);

	delete turkeyAdapter;
	delete turkey;
	delete duck;

	return 0;
}

