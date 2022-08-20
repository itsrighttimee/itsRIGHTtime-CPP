#include <iostream>
using namespace std;

/*


 CPP53 for Refrence Operaotor
 CPP73 for Friend Function

input output Operator Overload :  >>    <<

Condition 
1. member function cannot be overloaded as a << or >> operator,
  We need to make the friend function


cout << "Danishan";
cin >> a;

cout is a object of ostream class
cin is a object of istream class

<< input operaotor
>> output operator

istream + ostream  = isostream



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

    // void show()
    // {
    //     cout << " "
    //          << a1;
    //     cout << " "
    //          << a2
    //          << endl;
    // }

    friend ostream &operator<<(ostream &output, itsRIGHTtime a);
};

/*

returntype funName ( Arguments ){

}

returntype = ostream
funName  =  operator<<
Argument1 =  ostream output
Argument2 = itsRIGHTtime a


*/

ostream &operator<<(ostream &output, itsRIGHTtime a)
{
    output << endl
           << a.a1 << " " << a.a2;
}

int main()
{
    itsRIGHTtime A1(1, 2), B1(20, 30), C1;
    cout << "Before\n";
    cout << A1;
    cout << B1;
    cout << C1;
}