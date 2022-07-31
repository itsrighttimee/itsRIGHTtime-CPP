#include <iostream>
using namespace std;

/*
    Prototype of a function :

    returnType FunctionName(Arguments){

        // codes
    }

*/

int sum(int a, int b); // Defination

int main()
{
    int a = 0; // a= 0

    a = sum(4, 5); // calling // a = 9;

    cout << endl
         << a; // 9
    cout << endl
         << sum(10, 20); // cout << sum(10,20); ---> cout << 30;
}

int sum(int a, int b) // Defination  --- 1 --> sum(int a  = 4, int b = 5) -- 2 -> sum(int a  = 10, int b = 20)
{
    int sum;

    cout << endl
         << "value of a : " << a; // a = 4  |  a = 10
    cout << endl
         << "value of b: " << b; // b = 5 | b = 20

    sum = a + b; // 4 + 5 = 9 |   10 + 20  = 30
    return sum;  // 9  | 30
}