#pragma once
#include <string>

using namespace std;
class Light
{
private:
	string location;
public:
	Light();
	Light(string location);
	~Light();
	void on();
	void off();
};

