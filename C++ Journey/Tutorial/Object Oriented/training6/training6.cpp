#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person1("Mindy", 19);
    Person person2("Adam", 34);
    Person person3;

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    return 0;
}