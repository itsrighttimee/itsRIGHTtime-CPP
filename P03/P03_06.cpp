/*

Modify the FACTOR program in this chapter so that it repeatedly asks for a number
and calculates its factorial, until the user enters 0, at which point it terminates.
You can enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this effect.


*/

#include <iostream>
using namespace std;

int main()
{

    int fact;

    do
    {
        cout << "Enter 0 to exit, else the number for Factorial \nEnter : ";
        cin >> fact;

        cout << "Factorial of " << fact << " = ";
        while (fact != 0)
        {
            cout << fact;
            if (fact != 1)
                cout << " X ";
            fact--;
        }
    } while (fact != 0);
}
