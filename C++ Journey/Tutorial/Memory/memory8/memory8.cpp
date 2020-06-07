#include <iostream>
using namespace std;

class Plant
{
private:
    string type;
public:
    Plant()
    {
        cout << "A new plant was created." << endl;
    }

    ~Plant()
    {
        cout << "Destructor called." << endl;
    }

    void setType(string name)
    {
        this->type = name;
    }

    void info() const
    {
        cout << "This plant is " << type << endl;
    }
};

Plant *createPlant()
{
    Plant *pPlant = new Plant();
    pPlant->setType("A beautiful flower");
    return pPlant;
}

int main()
{
    Plant* pLily = createPlant();
    pLily->info();
    delete pLily;

    return 0;
}