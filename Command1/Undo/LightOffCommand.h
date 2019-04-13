#ifndef _LIGHTOFFCOMMAND_H
#define _LIGHTOFFCOMMAND_H
#include"Undo.h"
class LightOffCommand:public Command
{
public:
	LightOffCommand(Light *light)
	{
		this->light = light;
	}
	void execute() const
	{
		light->off();
	}
	void undo()const
	{
		light->on();
	}
private:
	Light *light;
};
#endif