#pragma once
#include "Command.h"
#include "Light.h"
class LightOnComand : public Command
{
private:
	Light light;
public:
	LightOnComand(Light light);
	void execute();
	~LightOnComand();
};

