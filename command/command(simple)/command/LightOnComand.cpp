#include "stdafx.h"
#include "LightOnComand.h"



LightOnComand::LightOnComand(Light light)
{
	this->light = light;
}
LightOnComand::~LightOnComand()
{
}
void LightOnComand::execute()
{
	light.on();
}
