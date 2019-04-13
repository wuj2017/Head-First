#pragma once

#include "Amplifier.h"
#include "CDplayer.h"
#include "DVDplayer.h"
#include "Projector.h"
#include "Screen.h"
#include "TheaterLights.h"
#include "Tuner.h"
#include "PopcornPopper.h"
#include <iostream>
#include <string>

using namespace std;

class HomeTheaterFacade
{
public:
	HomeTheaterFacade();
	~HomeTheaterFacade();
	Amplifier apf;
	Tuner tuner;
	DVDplayer dvd;
	CDplayer cd;
	Projector projector;
	TheaterLights lights;
	Screen screen;
	PopcornPopper popper;

	HomeTheaterFacade(Amplifier apf,
		Tuner tuner,
		DVDplayer dvd,
		CDplayer cd,
		Projector projector,
		Screen screen,
		TheaterLights lights,
		PopcornPopper popper) {

		this->apf = apf;
		this->tuner = tuner;
		this->dvd = dvd;
		this->cd = cd;
		this->projector = projector;
		this->screen = screen;
		this->lights = lights;
		this->popper = popper;
	}

	void watchMovie(string movie) {
		cout << "Get ready to watch a movie..." << endl;
		popper.on();
		popper.pop();
		lights.dim(10);
		screen.down();
		projector.on();
		projector.wideScreenMode();
		apf.on();
		apf.setDvd(dvd);
		apf.setSurroundSound();
		apf.setVolume(5);
		dvd.on();
		dvd.play(movie);
	}


	void endMovie() {
		cout << "Shutting movie theater down..." << endl;
		popper.off();
		lights.on();
		screen.up();
		projector.off();
		apf.off();
		dvd.stop();
		dvd.eject();
		dvd.off();
	}

	void listenToCd(string cdTitle) {
		cout << "Get ready for an audiopile experence..." << endl;
		lights.on();
		apf.on();
		apf.setVolume(5);
		apf.setCD(cd);
		apf.setStereoSound();
		cd.on();
		cd.play(cdTitle);
	}

	void endCd() {
		cout << "Shutting down CD..." << endl;
		apf.off();
		apf.setCD(cd);
		cd.eject();
		cd.off();
	}

	void listenToRadio(double frequency) {
		cout << "Tuning in the airwaves..." << endl;
		tuner.on();
		tuner.setFrequency(frequency);
		apf.on();
		apf.setVolume(5);
		apf.setTuner(tuner);
	}

	void endRadio() {
		cout << "Shutting down the tuner..." << endl;
		tuner.off();
		apf.off();
	}
};

