#include "stdafx.h"
#include "GarageDoorCloseCommand.h"


GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor garagedoor)
{
	this->garagedoor = garagedoor;
}

GarageDoorCloseCommand::~GarageDoorCloseCommand()
{
}
void GarageDoorCloseCommand::execute()
{
	garagedoor.down();
}