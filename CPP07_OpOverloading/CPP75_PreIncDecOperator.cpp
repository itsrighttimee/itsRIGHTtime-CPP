#include <iostream>
using namespace std;

/*
Increment : pre Post
Decrement : pre post

Unary Operator : pre ++  pre --

+4   +16     +17     -25     -96      -122

*/

class itsRIGHTtime
{
    int a1, a2, a3, a4, a5;

public:
    itsRIGHTtime(int b1, int b2, int b3, int b4, int b5)
    {
        a1 = b1;
        a2 = b2;
        a3 = b3;
        a4 = b4;
        a5 = b5;
    }

    void show()
    {
        cout << " "
             << a1;
        cout << " "
             << a2;
        cout << " "
             << a3;
        cout << " "
             << a4;
        cout << " "
             << a5 << endl;
    }

    void operator++()
    {
        cout << "\nYou used  pre ++ Operator Overload\n";

        a1 = ++a1;
        a2 = ++a2;
        a3 = ++a3;
        a4 = ++a4;
        a5 = ++a5;
    }
    void operator--()
    {
        cout << "\nYou used  pre -- Operator Overload\n";

        a1 = --a1;
        a2 = --a2;
        a3 = --a3;
        a4 = --a4;
        a5 = --a5;
    }
};

int main()
{
    itsRIGHTtime A1(1, 2, 3, 4, 5);

    // int a = 1;
    // a = -a; // a = -1

    A1.show();

    ++A1;
    A1.show();

    --A1;
    A1.show();
    // A1.
}