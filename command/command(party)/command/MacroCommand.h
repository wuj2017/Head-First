#pragma once
#include "Command.h"
#include<vector>
using namespace std;
class MacroCommand :
	public Command
{
private:
	vector<Command*> commands;
public:
	MacroCommand(vector<Command*>& commands);
	~MacroCommand();
	void execute();
};

