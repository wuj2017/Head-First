#pragma once
#include "Quackable.h"
#include "Goose.h"
#include "Obserable.h"
class GooseAdapter : public Quackable
{
private:
	Goose* goose;
	Obserable* obserable;

public:
	GooseAdapter(Goose* _goose):goose(_goose),obserable(new Obserable(this)){}
	~GooseAdapter(){}
	void quack()
	{
		goose->honk();
		notifyObserver();
	}
	void registerObserver(Observer* _observer)
	{
		obserable->registerObserver(_observer);
	}
	void notifyObserver()
	{
		obserable->notifyObserver();
	}
	std::string toString()
	{
		return "Goose pretending to be a Duck";
	}
};

