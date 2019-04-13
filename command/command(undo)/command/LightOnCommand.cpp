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
void LightOnCommand::undo()
{
	light.off();//�������ǹص����
}
