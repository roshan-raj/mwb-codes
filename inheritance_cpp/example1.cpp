// C++ program to demonstrate inheritance
#include <iostream>
using namespace std;

// base class
class Animal
{

public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal
{

public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep! Derived" << endl;
    }
};

int main()
{
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}

// Here, dog1 (the object of derived class Dog) can access members of the base class Animal.
// It's because Dog is inherited from Animal.