#include "stdafx.h"
#include "MallarDuck.h"
#include <iostream>

MallarDuck::MallarDuck():obseverable(new Obserable(this)){}
void MallarDuck::quack()
{
	std::cout << "Quack\n";
	notifyObserver();
}
void MallarDuck::registerObserver(Observer* _observer)
{
	obseverable->registerObserver(_observer);
}
void MallarDuck::notifyObserver()
{
	obseverable->notifyObserver();
}
std::string MallarDuck::toString()
{
	return "Mallard Duck";
}
