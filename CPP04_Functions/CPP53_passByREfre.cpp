#include <iostream>
using namespace std;


// CPP18

void callByRefrence(int &a, int &b); // Formal Parameters

int main()
{
    int a = 10, b = 20; //
    cout << endl
         << "Before Function Call " << endl
         << "value of a : " << a; // 10
    cout << endl
         << "value of b : " << b; // 20

    callByRefrence(a, b); // 10, 20

    cout << endl
         << "After Function Call " << endl
         << "value of a : " << a; //  4
    cout << endl
         << "value of b : " << b; // 10
}


void callByRefrence(int &num, int &num1) // Formal Parameters
{
    int sum;

    num = 4;
    num1 = 10;

    cout << endl
         << "Inside  Function Call " << endl
         << "value of num : " << num; // 4
    cout << endl
         << "value of num1 : " << num1; // 10
}