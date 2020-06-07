#include <iostream>
#include "Cat.h"

using namespace std;

//This is a constructor
Cat::Cat()
{
	cout << "Cat created.\n";
	happy = true;
}

//This is a destructor
Cat::~Cat()
{
	cout << "Cat destroyed.\n";
}

void Cat::speak()
{
	if (happy)
	{
		cout << "Purrr...\n";
	}
	else
	{
		cout << "Hisss...\n";
	}
}