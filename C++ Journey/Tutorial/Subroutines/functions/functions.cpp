#include <iostream>
using namespace std;

void showMenu()
{
    cout << "1. I like cats\n";
    cout << "2. I like dogs\n";
    cout << "3. I love everything\n";
}

int getInput()
{
    cout << "What do you choose?\n";

    int input;
    cin >> input;

    return input;
}

void doSelection(int option)
{
    switch (option)
    {
    case 1:
        cout << "Cats are great..\n";
        break;
    case 2:
        cout << "Dogs really are floofy!\n";
        break;
    case 3:
        cout << "Yaaay!\n";
        break;
    default:
        cout << "Please choose one option.\n";
    }
}

int main()
{
    showMenu();
    int selection = getInput();
    doSelection(selection);

    return 0;
}