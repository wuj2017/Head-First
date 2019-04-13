
#include "stdafx.h"
#include "Quackologist.h"
#include "Quackable.h"
#include <iostream>
#include "QuackObservable.h"
#include <string>
void Quackologist::update(QuackObservable* duck)
{
	//std::string s = d;
	std::cout << "Quackologist: " << dynamic_cast<Quackable*>(duck)->toString() << " just quacked." << std::endl;
}
std::string Quackologist:: toString()
{
	return "Quackologist";
}