#include <iostream>
using namespace std;

/*
Increment : pre Post
Decrement : pre post

Unary Operator : pre ++  pre --



*/

class itsRIGHTtime
{
    int a1, a2, a3, a4, a5;

public:
    itsRIGHTtime() {}

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

    itsRIGHTtime operator++()
    {
        cout << "\nYou used  pre ++ Operator Overload\n";

        itsRIGHTtime temp;

        temp.a1 = ++a1;
        temp.a2 = ++a2;
        temp.a3 = ++a3;
        temp.a4 = ++a4;
        temp.a5 = ++a5;

        return temp;
    }

    itsRIGHTtime operator++(int)
    {
        cout << "\nYou used  post ++ Operator Overload\n";

        itsRIGHTtime temp;
        //   2   3    4   5    6
        temp.a1 = a1++; //  temp.a1  = 2   |   a1  = 3
        temp.a2 = a2++; //  temp.a2  = 3   |   a2  = 4
        temp.a3 = a3++; //  temp.a3  = 4   |   a3  = 5
        temp.a4 = a4++; //  temp.a4  = 5   |   a4  = 6
        temp.a5 = a5++; //  temp.a5  = 6   |   a5  = 7

        return temp;
    }
    itsRIGHTtime operator--()
    {
        cout << "\nYou used  pre -- Operator Overload\n";
        itsRIGHTtime temp;

        temp.a1 = --a1;
        temp.a2 = --a2;
        temp.a3 = --a3;
        temp.a4 = --a4;
        temp.a5 = --a5;

        return temp;
    }

    itsRIGHTtime operator--(int)
    {
        cout << "\nYou used  Post -- Operator Overload\n";
        itsRIGHTtime temp;

        temp.a1 = a1--;
        temp.a2 = a2--;
        temp.a3 = a3--;
        temp.a4 = a4--;
        temp.a5 = a5--;

        return temp;
    }
};

int main()
{
    itsRIGHTtime A1(1, 2, 3, 4, 5), B1;
    A1.show();

    B1 = ++A1;

    cout << "Value of B1 After Assign \n";
    B1.show();

    B1 = A1++;
    cout << "Value of B1 After Assign \n";
    B1.show();

    B1 = --A1;
    cout << "Value of B1 After Assign \n";
    B1.show();

    B1 = A1--;
    cout << "Value of B1 After Assign \n";
    B1.show();
}