#include <iostream>
using namespace std;

int main()
{
    const string password = "hello"; // can't be changed later in the program.
    string input;

    do {
        cout << "enter your password: \n";
        cin >> input;

        if (input != password)
        {
            cout << "Access denied.\n";
        }
    } while (input != password);

    cout << "Password is correct!\n";

    return 0;
}
