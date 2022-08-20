#include <iostream>
using namespace std;

/*
 CPP53 for Refrence Operaotor
 CPP73 for Friend Function

input Operator Overload :  >>    <<

Condition
1. member function cannot be overloaded as a << or >> operator,
  We need to make the friend function

*/

class itsRIGHTtime
{
    int a1, a2;

public:
    itsRIGHTtime() {}

    itsRIGHTtime(int b1, int b2)
    {
        a1 = b1;
        a2 = b2;
    }

    friend ostream &operator<<(ostream &output, itsRIGHTtime &a);
    friend istream &operator>>(istream &input, itsRIGHTtime &a);
};

/*

returntype funName ( Arguments ){

}

returntype = ostream
funName  =  operator<<
Argument1 =  ostream output
Argument2 = itsRIGHTtime a


*/
ostream &operator<<(ostream &output, itsRIGHTtime &a)
{
    output << endl
           << a.a1 << " " << a.a2;
}

istream &operator>>(istream &input, itsRIGHTtime &a)
{

    cout << "\nEnter value of a1 : ";
    input >> a.a1;
    cout << "Enter value of a2 : ";
    input >> a.a2;
}

int main()
{
    itsRIGHTtime A1(10, 20), C1;
    cout << "Before\n";
    cout << A1;
    cout << C1;

    cin >> C1;
    cout << C1;
}