#include <iostream>
using namespace std;

// if you put &value, it'll only be a reference to existing value
// so the cout value in main would output 123.4
void changeSomething(double value) 
{
    value = 123.4;
}

int main()
{
    int value1 = 8;
    int &value2 = value1; // value2 is a reference to value1, synonym, only 1 memory location
    value2 = 10;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    double value = 4.321; // this value is not the same as changeSomething value
    changeSomething(value);
    cout << value << endl;

    return 0;
}