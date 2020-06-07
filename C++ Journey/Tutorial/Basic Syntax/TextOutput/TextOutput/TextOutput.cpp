#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    int numberCats = 2;
    int numberPlants = 20;

    cout << "Meri bought a new cat!\n";
    cout << "Meri now has " << numberCats + 1 << "cats!\n";
    cout << "Oh no! The new cat ate a plant :(\n";

    numberPlants = numberPlants - 1;

    cout << "There are only " << numberPlants << " plants left.\n";

    string txt = "sadFace :c\n";

    cout << txt << endl << endl;

    string input;
    cout << "Enter your name: " << flush;
    cin >> input;
    cout << "You entered: " << input << endl;

    return 0;
}
