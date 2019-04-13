#pragma once
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanOnCommand : public Command
{
private:
	CeilingFan ceilingfan;
public:
	CeilingFanOnCommand(CeilingFan ceilingfan);
	~CeilingFanOnCommand();
	void execute();
};

