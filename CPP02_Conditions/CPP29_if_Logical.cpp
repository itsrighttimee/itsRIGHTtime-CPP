/*

if(condition){

    // true
}

Logical Operator :
                    &&       : All Conditions are true then only Execute
                    ||       : All conditions are false then only not Execute
                    !        : false ==> true    true ===> false


*/

#include <iostream>
using namespace std;

int main()
{

    /*******************************************************************************/

    // if (true && true && true && true) // true
    // {
    //     cout << "Now I am in if Condition using true && true && true && true " << endl;
    // }

    // if (true && true && true && false) // false
    // {
    //     cout << "Now I am in if Condition using using true && true && true && false" << endl;
    // }

    // if (true || true || true || false) // true
    // {
    //     cout << "Now I am in if Condition using using true || true || true || false" << endl;
    // }

    // if (false || false || true || false) // true
    // {
    //     cout << "Now I am in if Condition using using false || false || true || false" << endl;
    // }
    // if (false || false || false || false) // true
    // {
    //     cout << "Now I am in if Condition using using false || false || false || false" << endl;
    // }

    /*******************************************************************************/

    // int num = 10, num1 = 20, num3 = 100;
    // if (num < num1 && num1 == num3) // 10 < 20 &&  20 == 100  ----> true && flase  ---->false
    // {
    //     cout << "Now I am in if Condition using num < num1 && num1 == num3 " << endl;
    // }

    // if (num < num1 && num1 != num3) // 10 < 20 &&  20 != 100  ----> true && true  ---->true
    // {
    //     cout << "Now I am in if Condition using using num < num1 && num1 != num3" << endl;
    // }

    /*******************************************************************************/

    int num = 10, num1 = 20, num3 = 100;
    if (num < num1 || num1 == num3) // 10 < 20 ||  20 == 100  ----> true || flase  ---->true
    {
        cout << "Now I am in if Condition using num < num1 || num1 == num3 " << endl;
    }

    if (num < num1 || num1 != num3) // 10 < 20 ||  20 != 100  ----> true || true  ---->true
    {
        cout << "Now I am in if Condition using using num < num1 || num1 != num3" << endl;
    }

    if (num > num1 || num1 == num3) // 10 > 20 ||  20 == 100  ----> false || false  ---->false
    {
        cout << "Now I am in if Condition using using num < num1 || num1 != num3" << endl;
    }
}