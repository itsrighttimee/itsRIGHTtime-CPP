/*
If a five-digit number is input through the keyboard, write a program to reverse the number.
*/

/*


12345  ======> 54321

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

    rem = num % 10;       // 5
    ans = ans * 10 + rem; // 0*10 + 5 = 5
    num = num / 10;       // 1234

    rem = num % 10;       // 4
    ans = ans * 10 + rem; //  5 * 10 + 4 = 54
    num = num / 10;       // 123

    rem = num % 10;       // 3
    ans = ans * 10 + rem; // 54*10 + 3 = 543
    num = num / 10;       // 12

    rem = num % 10;       // 2
    ans = ans * 10 + rem; // 543*10 + 2 = 5432
    num = num / 10;       // 1

    rem = num % 10;       // 1
    ans = ans * 10 + rem; // 5432*10 + 1 = 54321

    cout << "The Reverse of Digits is : " << ans;
}