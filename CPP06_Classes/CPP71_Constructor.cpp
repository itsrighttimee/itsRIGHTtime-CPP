#include <iostream>
using namespace std;

/*

Constructor : it is a special function that have same name as the class name

properties  :

    1. They Should be Declare in the Public Section
    2. They invoked (Call) Automatically when object is created
    3. We cannot invoke them, like other function
    4. They do not have return type, not even Void


Destructor : it is a also a special function that have same name as the class name with tild(~) sign


*/

class itsRIGHTtime
{

    int a;
    int b = 0;

public:
    itsRIGHTtime()
    {
        cout << "System Automatically Calls the Constructor" << endl;
    }

    void fun()
    {
        cout << "We Calls the Fun Function " << endl;
    }

    ~itsRIGHTtime(){
        cout <<"Destructor is Called\n";
    }

};

int main()
{
    itsRIGHTtime r1, r2, r3;
    r1.fun();
}