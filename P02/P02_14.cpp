/*

Lecture Code : P02_03

Any year is entered through the keyboard,
write a program to determine whether the year is leap or not.
Use the logical operators && and ||.

*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter any year : ";
    cin >> year;

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) // T && T
    {
        cout << "yeah it is a leap year";
    }
    else
    {
        cout << "No it is not a leap year";
    }
}