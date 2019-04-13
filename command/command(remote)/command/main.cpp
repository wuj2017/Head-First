// command.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "RemoteControl.h"
#include "Light.h"
#include "CeilingFan.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"
#include "GarageDoorCloseCommand.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanOnCommand.h"
#include "Stereo.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
#include <iostream>

using namespace std;

int main()
{
	/*ң�����ǵ����ߣ��ᴫ��һ��������󣬿���������������*/
	RemoteControl remoteControl;
	
	/*����һ����ƶ��󣬶���Ҳ�������������*/
	Light livingRoomLight("Living Room");
	Light kitchenLight("Kitchen");
	CeilingFan ceilingFan("Living Room");
	GarageDoor garageDoor("Garage");
	Stereo stereo("Linving Room");
	
	/*����һ�����Ȼ�󽫽����ߴ�����*/
	LightOnCommand livingRoomLightOn(livingRoomLight);
	LightOffCommand livingRoomLightOff(livingRoomLight);
	LightOnCommand kitchenLightOn(kitchenLight);
	LightOffCommand kitchenLightOff(kitchenLight);
	CeilingFanOnCommand ceilingFanOn(ceilingFan);
	CeilingFanOffCommand ceilingFanOff(ceilingFan);
	GarageDoorOpenCommand garageDoorOpen(garageDoor);
	GarageDoorCloseCommand garageDoorClose(garageDoor);
	StereoOnWithCDCommand StereoOn(stereo);
	StereoOffCommand StereoOff(stereo);

	/*�������������,Ȼ��ģ�ⰴ�°�ť*/
	remoteControl.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
	remoteControl.setCommand(1, &kitchenLightOn, &kitchenLightOff);
	remoteControl.setCommand(2, &ceilingFanOn, &ceilingFanOff);
	remoteControl.setCommand(3, &garageDoorOpen, &garageDoorClose);
	remoteControl.setCommand(4, &StereoOn, &StereoOff);

	cout << remoteControl.toString() << endl;
	
	remoteControl.onButtonWasPushed(0);
	remoteControl.offButtonWasPushed(0);
	remoteControl.onButtonWasPushed(1);
	remoteControl.offButtonWasPushed(1);
	remoteControl.onButtonWasPushed(2);
	remoteControl.offButtonWasPushed(2);
	remoteControl.onButtonWasPushed(3);
	remoteControl.offButtonWasPushed(3);
	remoteControl.onButtonWasPushed(4);
	remoteControl.offButtonWasPushed(4);

	return 0;
}

