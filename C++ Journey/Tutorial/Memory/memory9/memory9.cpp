#include <iostream>
using namespace std;

// Could declare variables here
//string numbers[] = { "one", "two", "three" };

void show1(const int nElements, string texts[])
{
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts)
{
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3])
{
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++)
    {
        cout << texts[i] << endl;
    }
}

/*
string* getArray()
{
    ! Dont return pointers to local variables !
    string texts[] = { "one", "two", "three" };
    return texts;
}
*/

char* getMemory()
{
    char* pMem = new char[100];
    return pMem;
}

void freeMemory(char* pMem)
{
    delete[] pMem;
}

int main()
{
    string texts[] = { "apple", "orange", "banana" };
    cout << sizeof(texts) << endl;

    show3(texts);

    char* pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}