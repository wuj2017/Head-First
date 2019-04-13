// state.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "GumballMachine.h"

int main()
{
	GumballMachine* gumballMachine = new GumballMachine(5);//装了5个糖果

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;
	//重新设置糖果数量
	gumballMachine->refill(10);

	std::cout << gumballMachine->toString() << std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout << gumballMachine->toString() << std::endl;
	return 0;
}

