#pragma once
//#include "QuackObservable.h"

class QuackObservable;

class Observer
{
public:
	Observer(){}
	virtual void update(QuackObservable* duck) = 0;
	~Observer(){}
	
};

