#ifndef GARAGEDOOROPENCOMMAND_H
#define GARAGEDOOROPENCOMMAND_H

#include"SimpleRemote.h"


class GarageDoorOpenCommand : public Command
{
    public:
        GarageDoorOpenCommand(GarageDoor *garageDoor)
        {
            this->garageDoor = garageDoor;
        }
        void execute() const
        {
            garageDoor->up();
        }
    protected:
    private:
    GarageDoor *garageDoor;
};

#endif // GARAGEDOOROPENCOMMAND_H
