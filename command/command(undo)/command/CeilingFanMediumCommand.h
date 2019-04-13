#pragma once
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanMediumCommand :
	public Command
{
private:
	CeilingFan ceilingfan;
	int prevSpeed;
public:
	CeilingFanMediumCommand(CeilingFan ceilingfan);
	~CeilingFanMediumCommand();
	void execute();
	void undo();
};

