#ifndef COMMAND_H
#define COMMAND_H

#include "SimpleRemote.h"
class Command
{
    public:
       virtual ~Command() = 0 {}
       virtual void execute()const =0;
};

#endif // COMMAND_H


