#pragma once
#include "Duck.h"
#include "Turkey.h"
//此时却鸭子对象，想用火鸡对象冒充
class TurkeyAdapter :
	public Duck
{
private:
	Turkey *turkey;
public:
	TurkeyAdapter(Turkey* turkey){ this->turkey = turkey; }
	~TurkeyAdapter(){};
	void quack(){ turkey->gobble(); }
	void fly()
	{ 
		for (int i = 0; i < 5;i++)
		{
			turkey->fly();
		}
	}
};

