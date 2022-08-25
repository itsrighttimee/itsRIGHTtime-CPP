/*

To Learn how to use if condition : Lecture Code - CPP32 onward


Any year is input through the keyboard.
Write a program to determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)

year = 2020        2000     2400     2450   2424

year % 400 == 0   ===> yeah leap year
year % 100 == 0   ===> Not leap year
year % 4 == 0   ===> Yeah leap year
   ===> Not leap year



*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter any year : ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "yeah it is a leap year";
    }
    else if (year % 100 == 0)
    {
        cout << "No it is not a leap year";
    }
    else if (year % 4 == 0)
    {
        cout << "yeah it is a leap year";
    }
    else
    {
        cout << "No it is not a leap year";
    }
}