#include "stdafx.h"
#include <cstdlib>
#include "RemoteControl.h"


RemoteControl::RemoteControl()
{
	noCommand = new NoCommand;
	for (int i = 0; i < 7;i++)
	{
		onCommand.push_back(noCommand);
		offCommand.push_back(noCommand);
	}
}

RemoteControl::~RemoteControl()
{
	delete noCommand;
}
void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	this->onCommand[slot] = onCommand;
	this->offCommand[slot] = offCommand;
}
void RemoteControl::onButtonWasPushed(int slot)
{
	onCommand[slot]->execute();
}
void RemoteControl::offButtonWasPushed(int slot)
{
	offCommand[slot]->execute();
}
string RemoteControl::toString()
{
	char buf[3];
	memset(buf, 0, 3);
	string str;
	str.append("\n----------- Remote Control ----------\n");
	for (int i = 0; i < 7; i++)
	{
		_itoa_s(i, buf, 10);
		string num(buf);
		string on = typeid(*onCommand[i]).name();
		string off = typeid(*offCommand[i]).name();
		str.append("[slot " + num + "] " + on + " 	"+ off + "\n");
	}
	return str;
}
