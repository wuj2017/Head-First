#pragma once
#include <string>

using namespace std;
//“ÙœÏ¿‡
class Stereo
{
private:
	string location;
public:
	Stereo();
	Stereo(string location);
	~Stereo();

	void on();
	void off();
	void setCD();
	void setDVD();
	void setRadio();
	void setVolume(int volume);
};

