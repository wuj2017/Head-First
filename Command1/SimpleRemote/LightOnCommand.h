#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "SimpleRemote.h"


class LightOnCommand : public Command
{
    public:
        LightOnCommand(Light* light)
        {
            this->light=light;
        }

        void execute() const
        {
            light->on();
        }
    protected:
    private:
        Light* light;
};

#endif // LIGHTONCOMMAND_H
