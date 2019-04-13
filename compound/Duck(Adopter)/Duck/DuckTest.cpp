// Duck.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "DuckCall.h"
#include "MallarDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "Goose.h"
#include "GooseAdapter.h"

void simulate(Quackable* duck)
{
	duck->quack();
}
int main()
{
	Quackable* mallarDuck = new MallarDuck;
	Quackable* redheadDuck = new RedheadDuck;
	Quackable* duckCall = new DuckCall;
	Quackable* rubberDuck = new RubberDuck;
	Goose* goose = new Goose;
	Quackable* gooseDuck = new GooseAdapter(goose);

	//std::cout << "\nDuck Simulator\n";
	std::cout << "\nDuck Simulator: with Goose Adopter\n";
	simulate(mallarDuck);
	simulate(redheadDuck);
	simulate(duckCall);
	simulate(rubberDuck);
	simulate(gooseDuck);

	delete mallarDuck;
	delete redheadDuck;
	delete duckCall;
	delete rubberDuck;
	delete gooseDuck;
	delete goose;

	return 0;
}

