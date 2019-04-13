#pragma once
#include <string>
#include <iostream>
#include "Amplifier.h"

using namespace std;
class CDplayer
{
private:

public:
	string description;
	int currentTrack;//µ±Ç°
	Amplifier amplifier;
	string title;

	CDplayer(){}
	CDplayer(string description, Amplifier amplifier)
	{
		this->description = description;
		this->amplifier = amplifier;
	}
	~CDplayer(){}

	void on() 
	{
		cout<<description + " on"<<endl;
	}

	void off() 
	{
		cout<<description + " off"<<endl;
	}

	void eject() 
	{
		//title = NULL;
		cout<<description + " eject"<<endl;
	}

	void play(string title) {
		this->title = title;
		currentTrack = 0;
		cout << description + " playing \"" + title + "\"" << endl;
	}

	void play(int track) {
		if (!title.empty()) {
			cout<<description + " can't play track " << currentTrack <<
				", no cd inserted"<<endl;
		}
		else {
			currentTrack = track;
			cout<<description + " playing track " << currentTrack<<endl;
		}
	}

	void stop() {
		currentTrack = 0;
		cout<<description + " stopped"<<endl;
	}

	void pause() {
		cout << description + " paused \"" + title + "\""<<endl;
	}

	string toString() {
		return description;
	}
};