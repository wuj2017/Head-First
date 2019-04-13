#include"SimpleRemote.h"

class Hottub {
public:
	Hottub() : _on( false ), temperature( 0 ) {}
	void on() const 
	{
		_on = true;
	}
	void off() const {
		_on = false;
	}
	void bubblesOn() const 
	{
		if( _on )
		{
			std::cout << "Hottub is bubbling!" << std::endl;
		}
	}
	void bubblesOff() const {
		if( _on ) {
			std::cout << "Hottub is not bubbling" << std::endl;
		}
	}
	void jetsOn() const {
		if( _on ) {
			std::cout << "Hottub jets are on" << std::endl;
		}
	}
	void jetsOff() const 
	{
		if( _on ) 
		{
			std::cout << "Hottub jets are off" << std::endl;
		}
	}
	void setTemperature( int temperature ) 
	{ assert( temperature >= 0 );
	temperature = temperature;
	}
	void heat() const 
	{
		temperature = 105;
		std::cout << "Hottub is heating to a steaming 105 degrees" << std::endl;
	}
	void cool() const 
	{
		temperature = 98;
		std::cout << "Hottub is cooling to 98 degrees" << std::endl;
	}
private: 
	mutable bool _on;
	mutable int temperature;
};