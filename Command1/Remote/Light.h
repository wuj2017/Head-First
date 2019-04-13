#ifndef LIGHT_H
#define LIGHT_H

#include "SimpleRemote.h"
class Light
{
    public:
		Light( const std::string location) :location( location )
		{}
        ~Light() {}
        void on() const
        {
            std::cout <<location<< " light is on" << std::endl;
        }
        void off() const
        {
            std::cout <<location<< "light is off" << std::endl;
        }
    protected:
    private:
		std::string location;
};

#endif // LIGHT_H
