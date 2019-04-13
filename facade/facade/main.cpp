// facade.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "HomeTheaterFacade.h"
using namespace std;

int main()
{
	Amplifier apf("Top-O-Line Amplifier");
	Tuner tuner("Top-O-Line AM/FM Tuner", apf);
	DVDplayer dvd("Top-O-Line DVD Player", apf);
	CDplayer cd("Top-O-Line CD Player", apf);
	Projector projector("Top-O-Line Projector", dvd);
	TheaterLights lights("Theater Ceiling Lights");
	Screen screen("Theater Screen");
	PopcornPopper popper("Popcorn Popper");

	HomeTheaterFacade homeTheater(apf, tuner, dvd, cd,
		projector, screen, lights, popper);

	homeTheater.watchMovie("Raiders of the Lost Ark");
	homeTheater.endMovie();

	return 0;
}

