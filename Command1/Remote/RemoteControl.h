#include"SimpleRemote.h"

class RemoteControl
{
public:
	RemoteControl()
	{
		noCommand = new NoCommand();
		for(int i=0;i<7;i++)
		{
			onCommands[i]=noCommand;
			offCommands[i]= noCommand;
		}
	}
	 ~RemoteControl() {
		delete noCommand;
	}
	void setCommand(int slot,Command *onCommand,Command *offCommand)
	{
		onCommands[slot] = onCommand;
		offCommands[slot] = offCommand;
	}
	void onButtonWasPushed(int slot)
	{
		onCommands[slot]->execute();
	}
	void offButtonWasPushed(int slot)
	{
		offCommands[slot]->execute();
	}
	std::string toString() const
	{
		std::stringstream value;
		value << "\n------ Remote Control -------\n" << std::endl;
		for(int i=0;i<7;i++)
		{
			value<<"[slot "<<i<<"]";
			value<<typeid(*onCommands[i]).name()<<"  ";
			value<<typeid(*offCommands[i]).name();
			value<<std::endl;
		}
		return value.str();
	}
private:
	Command* onCommands[7];
	Command* offCommands[7];
	Command* noCommand;
	RemoteControl( const RemoteControl& );
	void operator=( const RemoteControl& );
};