/*

P01_07,  P01_08, P01_09


If a five-digit number is input through the keyboard,
write a program to print a new number by adding one to each of its digits.
For example if the number that is input is 12391
then the output should be displayed as 23402.


12345 =  1+1     2+1      3+1      4+1       5+1   =   23456

2 + 3  = 5
2*10 + 3 = 23

/ : Queiont on Division
% : Remainder on Division

256 / 10 = 25
25 / 10 = 2
154879245 / 10 = 15487924

256 % 10 = 6
25 % 10 = 5
154879245 % 10 = 5


25484 % 10 = 4
25484 % 100 = 84
25484 % 1000 = 484
25484 % 10000 = 5484

25484 / 10 = 2548
25484 / 100 = 254
25484 / 1000 = 25
25484 / 10000 = 2



*/

#include <iostream>
using namespace std;

int main()
{

    int num, que, rem, ans = 0;

    cout << "Enter a Five Digit Number : ";
    cin >> num; // 12345

    que = num / 10000;    // 1
    que += 1;             // que = que + 1 = 1 + 1 = 2
    ans = ans * 10 + que; // 0 * 10 + 2 = 2
    num = num % 10000;    // 2345

    que = num / 1000;     // 2
    que += 1;             // 2 + 1  = 3
    ans = ans * 10 + que; // 2*10 + 3 = 23
    num = num % 1000;     // 345

    que = num / 100;      // 3
    que += 1;             // 3+1 = 4
    ans = ans * 10 + que; // 23*10+4 = 234
    num = num % 100;      // 45

    que = num / 10;       // 4
    que += 1;             // 4+1 = 5
    ans = ans * 10 + que; // 234*10 + 5 = 2345
    num = num % 10;       // 5

    num += 1;             // 5+1 = 6
    ans = ans * 10 + num; // 2345*10 + 6 = 23456

    cout
        << "Adding one to each of its digits : " << ans;
}