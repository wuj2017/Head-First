#ifndef _LIGHTONCOMMAND_H
#define _LIGHTONCOMMAND_H
#include"Undo.h"

class LightOnCommand :public Command
{
public:
	LightOnCommand(Light *light)
	{
		this->light=light;
	}
	void execute()const
	{
		light->on();
	}
	void undo()const 
	{
		light->off();
	}
private:
	Light *light;
};
#endif