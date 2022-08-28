/*
A five-digit number is entered through the keyboard.
Write a program to obtain the reversed number and
to determine whether the original and reversed numbers are equal or not.
Or the Number is Palindrome or not.

12345   ==> 54321



5246 % 10  ==> 6
5246 / 10  ==> 524

5246 % 100  ==> 46
5246 / 100  ==> 52


*/

#include <iostream>
using namespace std;

int main()
{

    int num, ans = 0, rem, que;

    cout << "Enter a Five Digit Number : ";
    cin >> num; // 12345

    que = num; //  12345

    rem = que % 10;       // 5
    que = que / 10;       // 1234
    ans = ans * 10 + rem; // 5

    rem = que % 10;       // 1234 % 10  ==> 4
    que = que / 10;       //  1234 / 10  ==> 123
    ans = ans * 10 + rem; // 5 * 10 +  4  = 54

    rem = que % 10;       // 3
    que = que / 10;       // 12
    ans = ans * 10 + rem; //  543

    rem = que % 10;       //  2
    que = que / 10;       //  1
    ans = ans * 10 + rem; //  5432

    rem = que % 10;       // 1
    que = que / 10;       // 0
    ans = ans * 10 + rem; // 54321

    cout << "Reverse of " << num << " is " << ans << endl;

    if (num == ans)
    {
        cout << "Yes the original number and reverse number are equal";
    }
    else
    {
        cout << "No the original number and reverse number are not equal";
    }
}