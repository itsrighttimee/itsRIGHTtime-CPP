#include <iostream>
using namespace std;

/*

Constructor : it is a special function that have same name as the class name

properties  :

    1. They Should be Declare in the Public Section
    2. They invoked (Call) Automatically when object is created
    3. We cannot invoke them, like other function
    4. They do not have return type, not even Void



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

    itsRIGHTtime(int a)
    {
        cout << "System Automatically Calls the Constructor : int a " << endl;
    }

    itsRIGHTtime(int a, int b)
    {
        cout << "System Automatically Calls the Constructor : int a, int b" << endl;
    }

    void fun(int a)
    {
        cout << "We Calls the Fun Function " << endl;
    }
};

int main()
{
    itsRIGHTtime r1, r2(5), r3(5, 10);

    r1.fun(5);
}