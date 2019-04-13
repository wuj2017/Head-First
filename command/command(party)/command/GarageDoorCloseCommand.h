#pragma once
#include "Command.h"
#include "GarageDoor.h"
class GarageDoorCloseCommand : public Command
{
private:
	GarageDoor garagedoor;
public:
	GarageDoorCloseCommand(GarageDoor garagedoor);
	~GarageDoorCloseCommand();
	void execute();
};

