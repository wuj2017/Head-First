#pragma once
#include <string>
#include <iostream>

using namespace std;

class TheaterLights
{
public:
	TheaterLights(){}
	~TheaterLights(){}

	string description;

	TheaterLights(string description) {
		this->description = description;
	}

	void on() {
		cout<<description + " on"<<endl;
	}

	void off() {
		cout<<description + " off"<<endl;
	}

	void dim(int level) {
		cout<<description + " dimming to " + level + "%"<<endl;
	}

	string toString() {
		return description;
	}
};

