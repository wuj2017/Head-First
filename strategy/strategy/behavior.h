#ifndef _BEHAVIOR_H
#define _BEHAVIOR_H

class FlyBehaior
{
public:
	virtual void fly() = 0;
	//virtual ~FlyBehaior();
};
class FlyWithWings : public FlyBehaior
{
public:
	virtual void fly();
};

class FlyNoWay : public FlyBehaior
{
public:
	virtual void fly();
};

class FlyRocket : public FlyBehaior
{
public:
	void fly();
};

class QuackBehavior
{
public:
	virtual void quack() = 0;
	//virtual ~QuackBehavior();
};

class Quack :public QuackBehavior
{
public:
	virtual void quack();
};

class MuteQuack : public QuackBehavior
{
public:
	virtual void quack();
};

class Squeak :public QuackBehavior
{
public:
	virtual void quack();
};



#endif // !_BEHAVIOR_H
