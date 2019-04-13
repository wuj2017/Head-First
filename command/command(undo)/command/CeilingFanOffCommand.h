#pragma once
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanOffCommand : public Command
{
private:
	CeilingFan ceilingfan;
	int prevSpeed;
public:
	CeilingFanOffCommand(CeilingFan ceilingfan);
	~CeilingFanOffCommand();
	void execute();
	void undo();
};

