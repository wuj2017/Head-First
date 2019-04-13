#include "stdafx.h"
#include "LivingRoomLightOffCommand.h"


LivingRoomLightOffCommand::LivingRoomLightOffCommand(Light light)
{
	this->light = light;
}

LivingRoomLightOffCommand::~LivingRoomLightOffCommand()
{
}
void LivingRoomLightOffCommand::execute()
{
	light.off();
}
