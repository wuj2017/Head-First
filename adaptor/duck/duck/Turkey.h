#pragma once

//火鸡接口
class Turkey
{
public:
	Turkey(){}
	~Turkey(){}
	virtual void gobble() = 0;
	virtual void fly() = 0;//火鸡会飞，虽然飞不远
};

