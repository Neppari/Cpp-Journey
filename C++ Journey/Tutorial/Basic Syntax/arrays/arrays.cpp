#include <iostream>
using namespace std;

int main()
{
    int values[3]; // this array has 3 elements.

    values[0] = 88;
    values[1] = 24;
    values[2] = 4;

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;

    int numbers[4] = { 2, 24, 6, 10 };
    for (int i = 0; i < 4; i++)
    {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl << "Initializing with zero values\n";
    int numArray[8] = {};
    for (int i = 0; i < 8; i++)
    {
        cout << "Element at index " << i << ": " << numArray[i] << endl;
    }

    // Array of strings
    string stuffs[] = { "Piina", "Paniikki" };


    // MULTI DIMENSIONAL ARRAYS

    // you can miss the first element, but not the second!
    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}