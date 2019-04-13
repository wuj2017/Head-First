#include"SimpleRemote.h"

class TV
{
public:
	TV(  std::string location ) :channel( 0 ), location( location ) 
	{}
	void on() const 
	{
		std::cout << location.c_str() << " TV is on" << std::endl;
	}
	void off() const
	{
		std::cout << location.c_str() << " TV is off" << std::endl;
	}
	void setInputChannel() 
	{
		channel = 3;
		std::cout << location.c_str() << " Channel is set for VCR" << std::endl;
	}
private:
	mutable int channel;
	std::string location;
};
