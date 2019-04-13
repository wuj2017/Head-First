// cofffeAndtea.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CoffeeWithHook.h"
#include "TeaWithHook.h"


int main()
{
	TeaWithHook teahook;
	CoffeeWithHook coffeehook;

	cout << "\n---Making tea...----" << endl;
	teahook.prepareRecipe();

	cout << "\n---Making coffee...----" << endl;
	coffeehook.prepareRecipe();

	return 0;
}

