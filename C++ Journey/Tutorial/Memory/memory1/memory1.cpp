// memory1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void manipulate(double *value)
{
    *value = 10.0;
    cout << "Value of double in manipulate: " << *value << endl;
}

int main()
{
    int nValue = 8;

    int *pnValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int address: " << pnValue << endl;
    cout << "Int value via pointer: " << *pnValue << endl << endl;

    double dValue = 123.4;
    cout << "1. dValue: " << dValue << endl;
    manipulate(&dValue);
    cout << "2. dValue: " << dValue << endl;

    return 0;
}