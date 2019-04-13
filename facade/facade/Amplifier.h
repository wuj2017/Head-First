#pragma once
#include <string>
#include <iostream>
#include "Tuner.h"
#include "DVDplayer.h"
#include "CDplayer.h"

using namespace std;

//µÄÀà
class Amplifier
{
public:
	string description;
	Tuner tuner;
	DVDplayer dvd;
	CDplayer cd;

	Amplifier(){}
	Amplifier(string description)
	{ 
		this->description = description; 
	}
	void on()
	{
		cout << description + " on" << endl;
	}
	void off()
	{
		cout << description + " off" << endl;
	}
	void setCD(CDplayer cd)
	{
		cout << description + " setting CD player to " <<cd.description<< endl;
		this->cd = cd;
	}
	void setDvd(DVDplayer dvd) {
		//cout<<description + " setting DVD player to " << dvd.<<endl;
		this->dvd = dvd;
	}
	void setStereoSound() {
		cout<<description + " stereo mode on"<<endl;
	}

	void setSurroundSound() {
		cout<<description + " surround sound on (5 speakers, 1 subwoofer)"<<endl;
	}

	void setVolume(int level) {
		cout<<description + " setting volume to " << level<<endl;
	}

	void setTuner(Tuner tuner) {
		//cout<<description + " setting tuner to " <<dvd<<endl;
		this->tuner = tuner;
	}
	string toString()
	{
		return description;
	}
	~Amplifier(){}
};

