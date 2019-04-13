#pragma once
#include <string>

using namespace std;

/*
命令接口，只定义一个方法：execute()
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

