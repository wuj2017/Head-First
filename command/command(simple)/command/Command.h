#pragma once

/*
����ӿڣ�ֻ����һ��������execute()
*/
class Command
{
public:
	Command();
	~Command();
	virtual void execute() = 0;
};

