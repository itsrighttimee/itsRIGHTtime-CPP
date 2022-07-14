/*
If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits.

12345

/ : Queiont on Division
% : Remainder on Division

256 / 10 = 25
25 / 10 = 2
154879245 / 10 = 15487924

256 % 10 = 6
25 % 10 = 5
154879245 % 10 = 5



1 + 2 + 3 4 + 5 = 15
*/

#include <iostream>
using namespace std;

int main()
{

    int num, que, rem, ans = 0;

    cout << "Enter a Five Digit Number : ";
    cin >> num; // 12345

    rem = num % 10; // 5
    ans += rem;     // ans = ans + rem = 0+5 = 5
    num = num / 10; // 1234

    rem = num % 10; // 4
    ans += rem;     // ans = ans + rem = 5 + 4 = 9
    num = num / 10; // 123

    rem = num % 10; // 3
    ans += rem;     // ans = ans + rem = 9 + 3 = 12
    num = num / 10; // 12

    rem = num % 10; // 2
    ans += rem;     // ans = ans + rem = 12 + 2 = 14
    num = num / 10; // 1

    rem = num % 10; // 1
    ans += rem;     // ans = ans + rem = 14 + 1

    cout << "The Sum of Digits is : " << ans;
}