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
#include "Flock.h"
#include "Quackologist.h"


void simulate(Quackable* duck)
{
	duck->quack();
}
int QuackCounter::numberOfQuacks = 0;
int main()
{
	AbstractDuckFactory* duckFactory = new CoutingDuckFactory;


	Quackable* redheadDuck = duckFactory->createRedheadDuck();
	Quackable* duckCall = duckFactory->createDuckCall();
	Quackable* rubberDuck = duckFactory->createRubberDuck();

	Quackable* gooseDuck = new GooseAdapter(new Goose);

	Flock* flockOfDuck = new Flock;

	flockOfDuck->add(redheadDuck);
	flockOfDuck->add(duckCall);
	flockOfDuck->add(rubberDuck);
	flockOfDuck->add(gooseDuck);

	Flock* flockOfMallards = new Flock;

	Quackable* mallardOne = duckFactory->createMallarDuck();
	Quackable* mallardOTwo = duckFactory->createMallarDuck();
	Quackable* mallardThree = duckFactory->createMallarDuck();
	Quackable* mallardFour = duckFactory->createMallarDuck();

	flockOfMallards->add(mallardOne);
	flockOfMallards->add(mallardOTwo);
	flockOfMallards->add(mallardThree);
	flockOfMallards->add(mallardFour);

	flockOfDuck->add(flockOfMallards);

	std::cout << "\nDuck Simulator: with Observer\n";

	//Quackologist* quacklogist = new Quackologist;
	std::auto_ptr< Quackologist > quacklogist(new Quackologist());
	flockOfDuck->registerObserver(quacklogist.get());

	std::cout << "\nDuck Simulator: Whole Flock simulation\n";
	simulate(flockOfDuck);

	std::cout << "\nDuck Simulator: Mallard Flock simulation\n";
	simulate(flockOfMallards);

	std::cout << "The ducks quack " << QuackCounter::getQuacks() << " times\n";

	delete redheadDuck;
	delete duckCall;
	delete rubberDuck;
	delete gooseDuck;
	delete flockOfDuck;
	delete flockOfMallards;
	return 0;
}

