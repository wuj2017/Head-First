#include"SimpleRemote.h"

class Stereo
{
public:
	Stereo(std::string location)
	{
		this->location =location;
	}
	void on() const {
		std::cout << location.c_str() << " stereo is on" << std::endl;
	} 
	void off() const {
		std::cout << location.c_str() << " stereo is off" << std::endl;
	}
	void setCD() const {
		std::cout << location.c_str() << " stereo is set for CD input" << std::endl;
	}
	void setDVD() const {
		std::cout << location.c_str() << " stereo is set for DVD input" << std::endl;
	}
	void setRadio() const 
	{
		std::cout << location.c_str() << " stereo is set for Radio" << std::endl;
	}
	void setVolume(int volume) const 
	{	
		assert(volume > 0 && volume < 12);
		std::cout << location.c_str() << " Stereo volume set to " << volume << std::endl;
	}
private:
	std::string location;
};