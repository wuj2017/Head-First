#pragma once
#include "Command.h"
#include "Light.h"
class LightOnCommand : public Command
{
private:
	Light light;
public:
	LightOnCommand(Light light);
	~LightOnCommand();
	void execute();
	void undo();
};

