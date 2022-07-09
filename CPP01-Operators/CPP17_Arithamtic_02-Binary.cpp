
/*

7 types of Operators

1. Arithmetic Operator

 ---->  unary Operaor : that perform on Single Operand

         5 + 9 = 14
         operator : +
         Operand  : 5   9


 ----> Binary Operator : that perform on two operands

        ---> Addition  --------------->   +
        ---> Subtraction  ------------>   -
        ---> Multiplication  --------->   *
        --->  Give Quitient Division ->   /
        --->  Give Remainder on Division  %


*/

#include <iostream>
using namespace std;

int main()
{

    // cout << 10 + 20 << endl;
    // cout << 10 * 20 << endl;
    // cout << 100 / 20 << endl;
    // cout << 119 % 20 << endl;

    int num1, num2, num3, num4;
    int ans, ans1, ans2, ans3;

    num1 = 10;
    num2 = 20;
    num3 = 30;
    num4 = 40;

    ans = num1 + num2; //
    ans1 = num2 * num2;
    ans2 = num4 / num1;
    ans3 = num4 % num3;

    cout << ans << endl;
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
}