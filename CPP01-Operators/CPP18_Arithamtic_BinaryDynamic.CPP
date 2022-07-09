
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

    int num1, num2;
    int ans;

    num1 = 10;
    num2 = 20;

    ans = num1 - num2; // ans = random --- > -10
    // cout << ans << endl;

    //  rvalue ans = -10   num1 = 10    |  lvalue = ans
    ans = ans * num1; // ans = -10 * 10 = -100
    // cout << ans << endl;

    ans = ans / num2; // ans = -100 / 20 = -5
    // cout << ans << endl;

    ans = ans % ans; // -50 % -50 = 0

    cout << ans << endl; // 0
}