#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{
    cout << "Starting program..\n";

    //this is not common, but you can do this to control memory
    //the cat exists between these curly brackets and will be destroyed after
    {
        Cat piina;
        piina.speak();
    }
    
    cout << "Ending program ...\n";
    return 0;
}