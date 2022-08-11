#include <iostream>
using namespace std;

/*
static int a;

properties :

    1.  Initilize to Zero by default, we cannot change
    2.  Only one Copy is created for entire class, No matter how many objects we create
    3.  Visiblity for the class only, lifeline entire program

*/

class itsRIGHTtime
{

    static int a;
    int b = 0;

public:
    void setvalue()
    {
        a++;
        b++;
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
    
    r2.setvalue();
    r2.getvalue();
    
    r3.setvalue();
    r3.getvalue();
    
    r4.setvalue();
    r4.getvalue();
    

    r5.setvalue();
    r5.getvalue();
    
}