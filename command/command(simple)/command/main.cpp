// command.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SimpleRemoteControl.h"
#include "Light.h"
#include "LightOnComand.h"
#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"

void RemoteControlTest()
{
	//SimpleRemoteControl* remote=new SimpleRemoteControl;
	//Light* light=new Light;
	//LightOnComand* lightOn=new LightOnComand(light);
	//remote->setCommand(lightOn);
	//remote->buttonWasPressed();
	/*遥控器是调用者，会传入一个命令对象，可以用来发出请求*/
	SimpleRemoteControl remote;
	/*创建一个电灯对象，对象也就是请求接收者*/
	Light light;
	GarageDoor garagedoor;

	/*创建一个命令，然后将接收者传给它*/
	LightOnComand lightOn(light);
	GarageDoorOpenCommand garageOpen(garagedoor);


	/*把命令传给调用者,然后模拟按下按钮*/
	//开灯
	remote.setCommand(&lightOn);
	remote.buttonWasPressed();

	//开车库门
	remote.setCommand(&garageOpen);
	remote.buttonWasPressed();
}
int main()
{
	RemoteControlTest();
	return 0;
}

