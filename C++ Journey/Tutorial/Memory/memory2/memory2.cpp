#include <iostream>
using namespace std;

/*
    +
    -
    *
    /
    +=
    -=
    /=
    *=
    %
    %=
    precedence
*/

int main()
{
    double value1 = (double)7 / 2;
    cout << value1 << endl;

    //Does not round, it just throws the rest away
    int value2 = (int)7.3;
    cout << value2 << endl;

    int value3 = 8;
    value3 += 1; // value3 = value3 + 1 or value3++;
    cout << value3 << endl;

    int value4 = 10;
    value4 /= 5; // value4 = value4 / 5
    cout << value4 << endl;

    int value5 = 12 % 5;
    cout << value5 << endl;

    // remember () around calculations <3
    double equation = ((5 / 4)%2) + (2.3 * 6);
    cout << equation << endl;

    //Take a large number of seconds and convert it to hours, minutes and seconds
    int totalSeconds = 123456;
    int toMinutes = totalSeconds / 60;
    int toHours = toMinutes / 60;

    int remainingMinutes = toMinutes % 60;
    int remainingSeconds = totalSeconds % 60;

    cout << "Hours: " << toHours << ", Minutes: " << remainingMinutes << ", Seconds: " << remainingSeconds << endl;

    return 0;
}