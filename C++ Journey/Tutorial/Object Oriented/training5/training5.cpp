#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person1;
    Person person2("Minni");

    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
    return 0;
}