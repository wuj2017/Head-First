#pragma once
class DisplayElment
{
public:
	DisplayElment();
	//当布告板需要显示时，调用此方法
	virtual void display() = 0;
	~DisplayElment();
};

