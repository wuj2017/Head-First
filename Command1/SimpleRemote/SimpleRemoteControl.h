#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H
#include "SimpleRemote.h"

class SimpleRemoteControl
{
    public:
        SimpleRemoteControl() {}
        ~SimpleRemoteControl() {}

        void setCommand(Command *command)
        {
            slot = command;
        }

        void buttonWasPressed()
        {
            slot->execute();
        }
    protected:
    private:
        Command* slot;
};

#endif // SIMPLEREMOTECONTROL_H
