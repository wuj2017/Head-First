#pragma once
#include <string>

using namespace std;

//Beverage��һ�������࣬����������
class Beverage
{
protected:
	string description;
public:
	Beverage();
	virtual string getDescription();// �Ѿ��ڴ�����ʵ��
	virtual float cost() = 0;//������������ʵ��
	~Beverage();
};

