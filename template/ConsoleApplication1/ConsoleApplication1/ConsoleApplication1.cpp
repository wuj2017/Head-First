// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace  std;

int main()
{
	string str1 = "hello";
	string str2;
	if (str1.empty())
		cout << "str1空" << endl;
	else
		cout << "str1不空" << endl;
	
	return 0;
}

