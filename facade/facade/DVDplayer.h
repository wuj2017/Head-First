#pragma once
#include <string>
#include <iostream>
#include "Amplifier.h"
using namespace std;
class DVDplayer
{
public:
	string description;
	int currentTrack;
	Amplifier amplifier;
	string movie;

	DVDplayer(){}
	DVDplayer(string description, Amplifier amplifier) {
		this->description = description;
		this->amplifier = amplifier;
	}
	~DVDplayer(){}

	void on() {
		cout<<description + " on"<<endl;
	}

	void off() {
		cout<<description + " off"<<endl;
	}

	void eject() {
		//movie = null;
		cout<<description + " eject"<<endl;
	}

	 void play(string movie) {
		this->movie = movie;
		currentTrack = 0;
		cout<<description + " playing \"" + movie + "\""<<endl;
	}

	 void play(int track) {
		if (!movie.empty()) {
			cout<<description + " can't play track " + track + " no dvd inserted"<<endl;
		}
		else {
			currentTrack = track;
			cout<<description + " playing track " + currentTrack + " of \"" + movie + "\""<<endl;
		}
	}

	 void stop() {
		currentTrack = 0;
		cout<<description + " stopped \"" + movie + "\""<<endl;
	}

	 void pause() {
		cout<<description + " paused \"" + movie + "\""<<endl;
	}

	 void setTwoChannelAudio() {
		cout<<description + " set two channel audio"<<endl;
	}

	 void setSurroundAudio() {
		cout<<description + " set surround audio"<<endl;
	}

	 string toString() {
		return description;
	}
};

