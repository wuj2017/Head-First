// command.cpp : �������̨Ӧ�ó������ڵ㡣
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
	/*ң�����ǵ����ߣ��ᴫ��һ��������󣬿���������������*/
	SimpleRemoteControl remote;
	/*����һ����ƶ��󣬶���Ҳ�������������*/
	Light light;
	GarageDoor garagedoor;

	/*����һ�����Ȼ�󽫽����ߴ�����*/
	LightOnComand lightOn(light);
	GarageDoorOpenCommand garageOpen(garagedoor);


	/*�������������,Ȼ��ģ�ⰴ�°�ť*/
	//����
	remote.setCommand(&lightOn);
	remote.buttonWasPressed();

	//��������
	remote.setCommand(&garageOpen);
	remote.buttonWasPressed();
}
int main()
{
	RemoteControlTest();
	return 0;
}

