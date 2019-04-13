// strategy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "mallarduck.h"
#include "modelduck.h"

int main()
{
	char a = 0xa7, b, c;
	b = (a & 0xf) << 4;
	c = (a & 0xf0) >> 4;
	a = b | c;
	printf("%d\n", a);
	Duck* mallar = new MallarDuck;
	mallar->performQuack();
	mallar->performFly();

	Duck* model = new ModelDuck;
	model->performFly();
	model->setFlyBehavior(new FlyRocket);
	model->performFly();
	return 0;
}

