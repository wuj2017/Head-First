#pragma once
#include"Command.h"
#include "Light.h"
class LivingRoomLightOnCommand:public Command
{
private:
	Light light;
public:
	LivingRoomLightOnCommand(Light light);
	~LivingRoomLightOnCommand();
	void execute();
};

