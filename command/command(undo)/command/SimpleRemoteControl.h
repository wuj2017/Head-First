#pragma once
#include "Command.h"
class SimpleRemoteControl
{
private:
	Command* slot;//有一个插槽持有命令，命这个命令控制着一个装置
public:
	SimpleRemoteControl();
	~SimpleRemoteControl();
	/*这个方法用来设置插槽控制的命令，如果这段代码的客户想要改变遥控按钮的行为，可以多次调用这个方法*/
	void setCommand(Command* command);
	/*当按下按钮时，这个方法就会被调用，使得当前命令衔接插槽，并调用它的execute方法*/
	void buttonWasPressed();
};

