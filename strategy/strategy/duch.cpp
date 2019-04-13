#include "stdafx.h"
#include "duck.h"


Duck::Duck(){}
void Duck :: performFly()
{
	flybehavior->fly();
}
void Duck::performQuack()
{
	quackbehavior->quack();
} 
void Duck::setFlyBehavior(FlyBehaior * fb)
{
	flybehavior = fb;
}
void Duck::setQuackBehavior(QuackBehavior* qb)
{
	quackbehavior = qb;
}