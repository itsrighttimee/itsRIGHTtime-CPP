#include <iostream>
using namespace std;

/*

Static Member Function

static void fun(){

}

properties :

   1. They can access only Static member Function or Static data member
   2. They call using class name instead of Object name.


*/

class itsRIGHTtime
{

    static int a;
    int b = 0;

public:
    void setvalue()
    {
        a++;
        // b++;
    }

    static void fun()
    {
        a = 10;
        cout << a << endl;
    }

    void getvalue()
    {
        cout << "Value of a :" << a << endl;
        cout << "Value of b : " << b << endl;
    }
};

int itsRIGHTtime::a;

int main()
{
    itsRIGHTtime r1, r2, r3, r4, r5;

    r1.setvalue();
    r1.getvalue();
    // r1.fun();
    itsRIGHTtime::fun();
}