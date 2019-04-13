#ifndef _COMMAND_H
#define _COMMAND_H
#include"Undo.h"

class Command
{
public:
	virtual ~Command()=0{}

	virtual void execute()const=0;
	virtual void undo()const=0;
};
#endif