#include "stdafx.h"
#include "SimpleRemoteControl.h"


SimpleRemoteControl::SimpleRemoteControl()
{
}
SimpleRemoteControl::~SimpleRemoteControl()
{
}
void SimpleRemoteControl::setCommand(Command* slot)
{
	this->slot = slot;
}
void SimpleRemoteControl::buttonWasPressed()
{
	slot->execute();
}
