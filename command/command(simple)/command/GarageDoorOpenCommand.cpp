#include "stdafx.h"
#include "GarageDoorOpenCommand.h"


GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor garagedoor)
{
	this->garagedoor = garagedoor;
}

GarageDoorOpenCommand::~GarageDoorOpenCommand()
{
}
void GarageDoorOpenCommand::execute()
{
	garagedoor.up();
}