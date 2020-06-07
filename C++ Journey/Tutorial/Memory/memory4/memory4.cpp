#include <iostream>

using namespace std;

int main()
{
    const int elements = 5;
    string nums[elements] = { "one", "two", "three", "four", "five" };
    string* pNums = nums;
    pNums += 3;
    cout << *pNums << endl;

    pNums -= 2;
    cout << *pNums << endl;

    string *pEnd = &nums[elements]; // NEVER. EVER. write the value directly here
    pNums = &nums[0];

    while (pNums != pEnd)
    {
        cout << *pNums << endl;
        pNums++;
    }

    // Set pNum back to start.
    pNums = &nums[0];
    long elements2 = (long)(pEnd - pNums);
    cout << elements2 << endl;

    // Set pNum back to start.
    pNums = &nums[0];
    pNums += elements / 2;
    cout << *pNums << endl;

    return 0;
}