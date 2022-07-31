#include <iostream>
using namespace std;

/*

Formal Parameters : Always have to be Variable

*/

int sum(int a, int b); // Defination

int main()
{
    int a = 0, b = 10, c = 20; //

    a = sum(4, 5); // Aculal parameter

    cout << endl
         << a; // 9
    cout << endl
         << sum(b, c); //
}

int sum(int a, int b) // Formal Parameters
{
    int sum;

    cout << endl
         << "value of a : " << a; //
    cout << endl
         << "value of b: " << b; //

    sum = a + b; //
    return sum;  //
}