// Duck.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "DuckCall.h"
#include "MallarDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "QuackCounter.h"
#include "AbstractDuckFactory.h"
#include "CoutingDuckFactory.h"

void simulate(Quackable* duck)
{
	duck->quack();
}
int QuackCounter::numberOfQuacks = 0;
int main()
{
	AbstractDuckFactory* duckFactory = new CoutingDuckFactory;

	Quackable* mallarDuck = duckFactory->createMallarDuck();
	Quackable* redheadDuck = duckFactory->createRedheadDuck();
	Quackable* duckCall = duckFactory->createDuckCall();
	Quackable* rubberDuck = duckFactory->createRubberDuck();

	Quackable* gooseDuck = new GooseAdapter(new Goose);

	//std::cout << "\nDuck Simulator\n";
	std::cout << "\nDuck Simulator: with Abstract Factory\n";
	simulate(mallarDuck);
	simulate(redheadDuck);
	simulate(duckCall);
	simulate(rubberDuck);
	simulate(gooseDuck);
	std::cout << "The ducks quack " << QuackCounter::getQuacks() << " times\n";

	delete mallarDuck;
	delete redheadDuck;
	delete duckCall;
	delete rubberDuck;
	delete gooseDuck;

	return 0;
}

