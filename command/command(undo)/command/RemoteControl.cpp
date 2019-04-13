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
	undoCommand = noCommand;
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
	undoCommand = onCommand[slot];
}
void RemoteControl::offButtonWasPushed(int slot)
{
	offCommand[slot]->execute();
	undoCommand = offCommand[slot];
}
void RemoteControl::undoButtonWasPushed()
{
	undoCommand->undo();
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
	string ud = typeid(*undoCommand).name();
	str.append("[undo  ] " + ud + "\n");
	return str;
}
