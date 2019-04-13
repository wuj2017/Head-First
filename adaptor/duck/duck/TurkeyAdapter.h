#pragma once
#include "Duck.h"
#include "Turkey.h"
//��ʱȴѼ�Ӷ������û𼦶���ð��
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

