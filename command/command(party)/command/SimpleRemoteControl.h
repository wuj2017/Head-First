#pragma once
#include "Command.h"
class SimpleRemoteControl
{
private:
	Command* slot;//��һ����۳��������������������һ��װ��
public:
	SimpleRemoteControl();
	~SimpleRemoteControl();
	/*��������������ò�ۿ��Ƶ���������δ���Ŀͻ���Ҫ�ı�ң�ذ�ť����Ϊ�����Զ�ε����������*/
	void setCommand(Command* command);
	/*�����°�ťʱ����������ͻᱻ���ã�ʹ�õ�ǰ�����νӲ�ۣ�����������execute����*/
	void buttonWasPressed();
};

