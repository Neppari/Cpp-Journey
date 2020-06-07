#include "Person.h"
#include <sstream>

Person::Person(string name, int age): name(name), age(age)
{
	//this->name = name;
	//this->age = age;
}

string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}