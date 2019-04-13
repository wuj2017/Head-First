#pragma once
#include "Command.h"
#include "Light.h"
class LivingRoomLightOffCommand : public Command
{
private:
	Light light;
public:
	LivingRoomLightOffCommand(Light light);
	~LivingRoomLightOffCommand();
	void execute();
};

