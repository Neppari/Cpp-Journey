#include <iostream>
#include "Cat.h"
#include "Kitten.h"

using namespace std;

int main()
{
    Cat cat;
    cat.speak();

    Kitten sam;
    sam.makeFull();
    sam.happy = true;
    sam.purr();

    return 0;
}