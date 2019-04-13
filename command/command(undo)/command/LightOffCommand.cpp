#include "stdafx.h"
#include "LightOffCommand.h"


LightOffCommand::LightOffCommand(Light light)
{
	this->light = light;
}


LightOffCommand::~LightOffCommand()
{
}

void LightOffCommand::execute()
{
	light.off();
}
void LightOffCommand::undo()
{
	light.off();
}