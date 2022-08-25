/*
To Learn how to use if condition : Lecture Code - CPP32 onward


Any integer is input through the keyboard.
Write a program to find out whether it is an odd number or even number.

even : Multiple of 2 :   2   4   6   8   10   18    24    62
Odd : do not Multiple of 2 : 1    3   5   19    63   85


68 / 2 ==> remainder must be 0   | 68 % 2 == 0
69 / 2 ==> remainder must not be 0   | 69 % 2 != 0


*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an Integer Number : ";
    cin >> num;

    // if (num % 2 == 0)
    // {
    //     cout << "it is a Even Number";
    // }
    // if (num % 2 != 0)
    // {
    //     cout << "it is a Odd Number";
    // }

    if (num % 2 == 0)
    {
        cout << "it is a Even Number";
    }
    else
    {
        cout << "it is a odd Number";
    }
}