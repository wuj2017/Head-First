#pragma once

#include <string>
#include <iostream>
#include "DVDplayer.h"

using namespace std;
class Projector
{
public:
	Projector(){}
	~Projector(){}

	string description;
	DVDplayer dvdPlayer;

	Projector(string description, DVDplayer dvdPlayer) {
		this->description = description;
		this->dvdPlayer = dvdPlayer;
	}

	void on() {
		cout<<description + " on"<<endl;
	}

	void off() {
		cout<<description + " off"<<endl;
	}

	void wideScreenMode() {
		cout<<description + " in widescreen mode (16x9 aspect ratio)"<<endl;
	}

	void tvMode() {
		cout<<description + " in tv mode (4x3 aspect ratio)"<<endl;
	}

	string toString() {
		return description;
	}
};

