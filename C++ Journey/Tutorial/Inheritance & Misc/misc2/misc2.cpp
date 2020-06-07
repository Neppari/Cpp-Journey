#include <iostream>
using namespace std;

// usually in a .h header file
class Test
{
private:    
    static int count;

public:
    // initialization of const must be done right here!
    static int const MAX = 99;
    static void showInfo() { cout << count << endl; }
};

// .cpp source
int Test::count = 7;

int main()
{
    cout << Test::MAX << endl;
    Test::showInfo();

    return 0;
}