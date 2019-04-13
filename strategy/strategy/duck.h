#ifndef _DUCK_
#define _DUCK_
#include "behavior.h"
class Duck
{
public:
	Duck();
	void performFly();
	void performQuack();
	virtual void display() = 0;

	void setFlyBehavior(FlyBehaior * fb);
	void setQuackBehavior(QuackBehavior* qb);
protected:
	FlyBehaior* flybehavior;
	QuackBehavior* quackbehavior;
};
#endif // !_DUCK_
