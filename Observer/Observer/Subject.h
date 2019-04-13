#pragma once
#include "Observer.h"

class Subject
{
public:
	Subject();
	//�۲�������ע���ɾ��
	virtual void registerObserver(Observer* o)=0;
	virtual void removeObserver(Observer* o)=0;
	//������ı�ʱ����������ᱻ���ã���֪ͨ���й۲���
	virtual void notifyObserver()=0;
	~Subject();
};

