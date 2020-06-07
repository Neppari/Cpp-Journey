#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
    
    */

    string password = "hello";
    cout << "Enter your password > " << flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "Correct password!\n" << endl;
    }
    else if (input == "?") {
        cout << "???\n";
    }
    else {
        cout << "Incorrect.\n";
    }

    // floats can't be compared reliably!
    float value1 = 1.1;
    if (value1 == 1.1) {
        cout << ":D\n";
    }
    else {
        cout << ":(\n";
    }

    cout << setprecision(10) << value1 << endl;

    //while <3

    int i = 0;
    while (i <= 5) {
        cout << "Well Hello there~\n";

        i = i + 1; // or use i++;
    }

    return 0;
}