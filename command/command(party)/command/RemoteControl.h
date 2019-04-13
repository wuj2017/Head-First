#pragma once
#include "Command.h"
#include <vector>
#include "NoCommand.h"
//#include<string>
//using namespace std;
class RemoteControl
{
private:
	vector<Command*> onCommand;
	vector<Command*> offCommand;
	Command* noCommand;
	
public:
	RemoteControl();
	~RemoteControl();

	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	string toString();
};

