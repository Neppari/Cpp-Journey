#include <iostream>
using namespace std;

int main()
{
    char text[] = "hello"; // there is a invisible 0 to know where the string ends

    for (int i = 0; i < sizeof(text); i++) // sizeof is returning 6
    {
        cout << i << "; " << text[i] << endl;
    }

    int k = 0;

    while (true)
    {
        if (text[k] == 0)
        {
            break;
        }

        cout << text[k] << flush;
        k++;
    }

    cout << endl << endl;
    // Reversing a char String

    char text2[] = "hello";
    int nChars = sizeof(text2) - 1;

    char* pStart = text2;
    char* pEnd = text2 + nChars - 1;

    while (pStart < pEnd)
    {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        pStart++;
        pEnd--;
    }

    cout << text2 << endl;

    return 0;
}