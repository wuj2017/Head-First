#include "stdafx.h"
#include "LivingRoomLightOnCommand.h"


LivingRoomLightOnCommand::LivingRoomLightOnCommand(Light light)
{
	this->light = light;
}

LivingRoomLightOnCommand::~LivingRoomLightOnCommand()
{
}
void LivingRoomLightOnCommand::execute()
{
	light.on();
}
