#pragma once
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanOffCommand : public Command
{
private:
	CeilingFan ceilingfan;
public:
	CeilingFanOffCommand(CeilingFan ceilingfan);
	~CeilingFanOffCommand();
	void execute();
};

