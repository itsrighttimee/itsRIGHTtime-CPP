/*

if(condition){

    // true
}else{
    // false
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

    int num = 10, num1 = 20, num3 = 100;

    // if (num < num1) // true
    // {
    //     cout << "Now I am in if Condition using using true num < num1" << endl;
    // }
    // else // false
    // {
    //     cout << "Now I am in if Condition using using false num > num1" << endl;
    // }

    if (num > num1) // false
    {
        // ture
        cout << "Now I am in if Condition using using true num < num1" << endl;
    }
    else // false
    {
        // flase
        cout << "Now I am in if Condition using using false num > num1" << endl;
    }
}