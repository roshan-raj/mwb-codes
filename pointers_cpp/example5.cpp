// C++ program to illustrate Void Pointer in C++
#include <iostream>
using namespace std;
void increase(void *data, int ptrsize)
{
    if (ptrsize == sizeof(char))
    {
        char *ptrchar;

        //Typecast data to a char pointer
        ptrchar = (char *)data;

        //Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
        cout << "*data points to a char"
             << "\n";
    }
    else if (ptrsize == sizeof(int))
    {
        int *ptrint;

        //Typecast data to a int pointer
        ptrint = (int *)data;

        //Increase the int stored at *ptrchar by 1
        (*ptrint)++;
        cout << "*data points to an int"
             << "\n";
    }
}
void geek()
{
    // Declare a character
    char c = 'x';

    // Declare an integer
    int i = 10;

    //Call increase function using a char and int address respectively
    increase(&c, sizeof(c));
    cout << "The new value of c is: " << c << "\n";
    increase(&i, sizeof(i));
    cout << "The new value of i is: " << i << "\n";
}
int main()
{
    geek();
}
/* Output:
*data points to a char
The new value of c is: y
*data points to an int
The new value of i is: 11
*/