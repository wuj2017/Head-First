#pragma once
#include "Command.h"
class NoCommand : public Command
{
public:
	NoCommand();
	~NoCommand();
	void execute(){};
	void undo(){};
};

