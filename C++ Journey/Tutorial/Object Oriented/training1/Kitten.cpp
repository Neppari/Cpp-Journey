#include <iostream>
#include "Kitten.h"

using namespace std;

void Kitten::purr()
{
	cout << "Purrrrrr...\n";

	if (happy)
	{
		cout << ":D\n";
	}
	else
	{
		cout << "._.\n";
	}
}

void Kitten::makeHungry()
{
	hungry = true;
}

void Kitten::makeFull()
{
	hungry = false;
}