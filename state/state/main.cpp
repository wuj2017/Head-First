// state.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "GumballMachine.h"

int main()
{
	GumballMachine* gumballMachine = new GumballMachine(5);//װ��5���ǹ�

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;
	//���������ǹ�����
	gumballMachine->refill(10);

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;
	return 0;
}

