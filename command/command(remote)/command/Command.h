#pragma once
#include <string>

using namespace std;

/*
����ӿڣ�ֻ����һ��������execute()
*/
class Command
{
public:
	Command();
	~Command();
	virtual void execute() = 0;
	//virtual void undo() = 0;
	//virtual string getName()=0;
};

