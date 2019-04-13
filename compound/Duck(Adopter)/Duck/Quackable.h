#pragma once
class Quackable
{
public:
	Quackable(){}
	virtual ~Quackable() {}
	virtual void quack() = 0;
};

