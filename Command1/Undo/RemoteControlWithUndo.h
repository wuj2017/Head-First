#ifndef _REMOTECONTROLWITHUNDO_H
#define _REMOTECONTROLWITHUNDO_H
#include"Undo.h"

class RemoteControlWithUndo
{
public:
	RemoteControlWithUndo()
	{
		noCommand= new NoCommand();
		for(int i=0;i<7;i++)
		{
			onCommands[i]=noCommand;
			offCommands[i]=noCommand;
		}
		undoCommand=noCommand;
	}
	~RemoteControlWithUndo()
	{
		delete noCommand;
	}
	void setCommand(int slot,Command *offCommand,Command *onCommand)
	{
		assert( slot <= 7 );
		assert( onCommand );
		assert( offCommand );
		onCommands[slot] = onCommand;
		offCommands[slot] = offCommand;
	}
	void onButtonWasPushed(int slot)const 
	{
		assert(slot <= 7);
		onCommands[slot]->execute();
		undoCommand=offCommands[slot];
	}
	void offButtonWasPushed(int slot) const
	{
		assert(slot <= 7);
		offCommands[slot]->execute();
		undoCommand = onCommands[slot];
	}
	void undoButtonWasPushed() const
	{
		undoCommand->undo();
	}

	std::string toString()	const
	{
		std::stringstream value;
		value<<std::endl<< "------ Remote Control -------" << std::endl;
		for(int i=0;i<7;i++)
		{
			value<<"[slot "<<i<<"]";
			value<<typeid(*onCommands[i]).name()<<" ";
			value<<typeid(*offCommands[i]).name()<<std::endl;
		}
		value<<"[undo] "<<typeid(*undoCommand).name()<<std::endl;

		return value.str();
	}
private:
	Command* onCommands[7];
	Command* offCommands[7];
	mutable Command* undoCommand;
	Command* noCommand;

};
#endif