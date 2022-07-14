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

    int num = 10, num1 = 20, num3 = 100;
    if (true && (true || false && true)) // 10 < 20 ||  20 == 100  ----> true || flase  ---->true
    {
        /*
           true && (true || false && true)
           true && (true || false)
           true && (true)
           true


         false && (true || false && true)
         false && (true || false)
         false && (true )
         false
        
        */

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