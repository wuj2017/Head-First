#pragma once

/*
命令接口，只定义一个方法：execute()
*/
class Command
{
public:
	Command();
	~Command();
	virtual void execute() = 0;
};

