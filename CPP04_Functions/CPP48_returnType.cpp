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

    a = sum(); // calling // a = 60;

    cout << endl
         << a; // 60
    cout << sum(); // cout << takeValue(); ---> cout << 7;
}

int sum() // Defination
{
    int a, b, sum;
    cout << endl;
    cout << "Enter Values 1 :";
    cin >> a; // 25
    cout << "Enter Values 2 :";
    cin >> b; // 35

    sum = a + b; // 25 + 35 = 60
    return sum;  // 60
}