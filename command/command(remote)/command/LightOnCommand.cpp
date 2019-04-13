#include "stdafx.h"
#include "LightOnCommand.h"



LightOnCommand::LightOnCommand(Light light)
{
	this->light = light;
}
LightOnCommand::~LightOnCommand()
{
}
void LightOnCommand::execute()
{
	light.on();
}
