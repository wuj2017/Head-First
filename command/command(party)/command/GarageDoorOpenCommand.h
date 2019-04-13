#pragma once
#include "Command.h"
#include "GarageDoor.h"
class GarageDoorOpenCommand : public Command
{
private:
	GarageDoor garagedoor;
	//GarageDoor garagelight;
public:
	GarageDoorOpenCommand(GarageDoor garagedoor);
	~GarageDoorOpenCommand();
	void execute();
};

