#include <iostream>
using namespace std;

class Animal
{
public:
    void speak() { cout << "Grrr" << endl; }
};

class Cat : public Animal
{
public:
    void jump() { cout << "Cat jumping!" << endl; }
};

class Calico : public Cat
{
public:
    void dots() { cout << "This calico has spots." << endl; }
};

int main()
{
    Animal a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump();
    
    Calico cal;
    cal.speak();
    cal.jump();
    cal.dots();

    return 0;
}