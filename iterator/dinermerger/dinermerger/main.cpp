// dinermerger.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include <iostream>
#include <vector>
#include "Waitress.h"
using namespace std;

int main()
{
	PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();
	DinerMenu* dinerMenu = new DinerMenu();

	Waitress* waitress = new Waitress(pancakeHouseMenu, dinerMenu);

	waitress->printMenu();

	delete waitress;
	delete dinerMenu;
	delete pancakeHouseMenu;
	return 0;
}

