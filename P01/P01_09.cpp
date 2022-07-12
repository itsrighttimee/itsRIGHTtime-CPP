/*
If a four-digit number is input through the keyboard,
write a program to obtain the sum of the first and last digit of this number.

*/

/*


1234  ======> 1 + 4 = 5

/ : Queiont on Division
% : Remainder on Division

256 / 10 = 25
25 / 10 = 2
154879245 / 10 = 15487924

256 % 10 = 6
25 % 10 = 5
154879245 % 10 = 5




*/

#include <iostream>
using namespace std;

int main()
{

    int num, que, rem, ans = 0;

    cout << "Enter a Four Digit Number : ";
    cin >> num; // 1234

    rem = num % 10; // 4
    ans += rem;     // 0 + 4 = 4
    num = num / 10; // 123

    rem = num % 10; // 3
    num = num / 10; // 12

    rem = num % 10; // 2
    num = num / 10; // 1

    rem = num % 10; // 1
    ans += rem;     // 4+ 1 = 5

    cout << "The Sum of 1st and last Digits is : " << ans;
}