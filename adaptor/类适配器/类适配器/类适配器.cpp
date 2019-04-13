// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//������Ŀ���࣬Ѽ�ӽӿ�
class Duck
{
public:
	virtual void quack() = 0;
	virtual void fly() = 0;
};

//����Ѽ�ӣ���ͷѼʪѼ�ӵ�����
class MallardDuck : public Duck
{
public:
	void quack(){ cout << "Quack" << endl; }
	void fly(){ cout << "I'm flying" << endl; }
};

//���������࣬�𼦽ӿ�
class Turkey
{
public:
	virtual void gobble() = 0;
	virtual void fly() = 0;//�𼦻�ɣ���Ȼ�ɲ�Զ
};

//������࣬
class WildTurkey :public Turkey
{
public:
	void gobble(){ cout << "Gobble gobble" << endl; }
	void fly(){ cout << "I'm flying a short diatance" << endl; }
};

//��ʱȴѼ�Ӷ������û𼦶���ð�䣬������(Adapter), ֻ����Ծ������������
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

