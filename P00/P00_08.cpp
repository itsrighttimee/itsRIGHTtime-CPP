/*

Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19.


*/

#include <iostream>
using namespace std;

int main()
{
    const int num = 10;
    int num1;
    cout << num << endl; // 10

    num1 = 20;
    cout << num1 << endl; // 20

    num1--; // 20
    // 19

    cout << num1 << endl; // 19
}