#pragma once
#include "Observer.h"

class Subject
{
public:
	Subject();
	//观察者用来注册和删除
	virtual void registerObserver(Observer* o)=0;
	virtual void removeObserver(Observer* o)=0;
	//当主题改变时，这个方法会被调用，以通知所有观察者
	virtual void notifyObserver()=0;
	~Subject();
};

