// command.cpp : 定义控制台应用程序的入口点。
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
	/*遥控器是调用者，会传入一个命令对象，可以用来发出请求*/
	RemoteControl remoteControl;
	
	/*创建一个电灯对象，对象也就是请求接收者*/
	Light livingRoomLight("Living Room");
	Light kitchenLight("Kitchen");
	CeilingFan ceilingFan("Living Room");
	GarageDoor garageDoor("Garage");
	Stereo stereo("Linving Room");
	
	/*创建一个命令，然后将接收者传给它*/
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

	/*把命令传给调用者,然后模拟按下按钮*/
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

