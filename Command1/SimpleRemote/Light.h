#ifndef LIGHT_H
#define LIGHT_H

#include "SimpleRemote.h"
class Light
{
    public:
        Light() {}
        ~Light() {}
        void on() const
        {
            std::cout << "Light is on" << std::endl;
        }
        void off() const
        {
            std::cout << "Light is off" << std::endl;
        }
    protected:
    private:
};

#endif // LIGHT_H
