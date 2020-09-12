// Overload ++ when used as prefix and postfix

#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator++()
    {
        ++value;
    }

    // Overload ++ when used as postfix
    void operator++(int)
    {
        ++value;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++;
    count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}

// This Example works when ++ is used as both prefix and postfix.
// However, it doesn't work if we try to do something like this:

// Count count1, result;

// // Error
// result = ++count1;

// This is because the return type of our operator function is void.
// We can solve this problem by making Count as the return type of the operator function.

// // return Count when ++ used as prefix

// Count operator ++ () {
//      code
// }

// // return Count when ++ used as postfix

// Count operator ++ (int) {
//     code
// }