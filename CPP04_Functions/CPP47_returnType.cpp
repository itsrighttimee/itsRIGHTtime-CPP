#include <iostream>
using namespace std;

/*



    Prototype of a function :

    returnType FunctionName(Arguments){

        // codes
    }



*/
int sum(); // Declaration

int main()
{
    int a = 0;
    cout << endl
         << a; // 0
    a = sum(); // calling // a = 10;

    cout << endl
         << a;
    sum(); // 
}

int sum() // Defination
{
    cout << endl;
    cout << "You are Learning from itsRIGHTtime with Danishan";
    cout << endl;
    cout << "this leacture is about Function";
    cout << endl;

    return 10;
}