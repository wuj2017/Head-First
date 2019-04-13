#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include"SimpleRemote.h"

class LightOffCommand : public Command
{
    public:
        LightOffCommand(Light *light)
        {
            this->light=light;
        }

        void execute() const
        {
            light->off();
        }
    protected:
    private:
        Light* light;
};

#endif // LIGHTOFFCOMMAND_H
