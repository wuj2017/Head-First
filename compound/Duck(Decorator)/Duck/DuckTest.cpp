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

void simulate(Quackable* duck)
{
	duck->quack();
}
int QuackCounter::numberOfQuacks = 0;
int main()
{

	Quackable* mallarDuck = new QuackCounter(new MallarDuck);
	Quackable* redheadDuck = new QuackCounter(new RedheadDuck);
	Quackable* duckCall = new QuackCounter(new DuckCall);
	Quackable* rubberDuck = new QuackCounter(new RubberDuck);
	Quackable* gooseDuck = new GooseAdapter(new Goose);

	//std::cout << "\nDuck Simulator\n";
	std::cout << "\nDuck Simulator: with Decorator\n";
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

