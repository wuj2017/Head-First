#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include"SimpleRemote.h"
class GarageDoor
{
public:
    GarageDoor( const std::string location):location( location ) {}
    void up() const
    {
        std::cout << "Garage Door is Open" << std::endl;
    }
    void down() const
    {
        std::cout << "Garage Door is Closed" << std::endl;
    }
    void stop() const
    {
        std::cout << "Garage Door is Stopped" << std::endl;
    }
    void lightOn() const
    {
        std::cout << "Garage light is on" << std::endl;
    }
    void lightOff() const
    {
        std::cout << "Garage light is off" << std::endl;
    }
private:
	std::string location;
};

#endif // GARAGEDOOR_H
