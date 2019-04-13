#pragma once
#include "Quackable.h"
#include "Goose.h"

class GooseAdapter : public Quackable
{
private:
	Goose* goose;

public:
	GooseAdapter(Goose* _goose):goose(_goose){}
	~GooseAdapter(){}
	void quack()
	{
		goose->honk();
	}
};

