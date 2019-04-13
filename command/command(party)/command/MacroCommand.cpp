#include "stdafx.h"
#include "MacroCommand.h"


MacroCommand::MacroCommand(vector<Command*>&commands)
{
	this->commands = commands;
}

MacroCommand::~MacroCommand()
{
}
void MacroCommand::execute()
{
	for (int i = 0; i < commands.size();i++)
	{
		commands[i]->execute();
	}
}