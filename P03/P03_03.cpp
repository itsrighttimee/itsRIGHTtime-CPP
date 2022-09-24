/*
Operators such as >>, which read input from the keyboard,
must be able to convert a series of digits into a number.
Write a program that does the same thing.
It should allow the user to type up to six digits,
and then display the resulting number as a type long integer.
The digits should be read individually, as characters, using getche().
Constructing the number involves multiplying the existing value by 10 and then adding the new digit. (Hint: Subtract 48 or ‘0’ to go from ASCII to a numerical digit.)

int i = 7
char c = '7'
int i2  = '7' - '0'



*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    cout << "Enter six Digits : ";
    char c;
    long num = 0;
    int temp;
    for (int i = 0; i < 6; i++)
    {
        cout << "\n";
        c = getche(); // 5
        temp = c - '0';
        num = num * 10 + temp;// 5 4  5   6  ==> 5456 -> 5*10+4= 54 -> 54*10+5=545  
    }
    cout << "\nNumber is : " << num;
}