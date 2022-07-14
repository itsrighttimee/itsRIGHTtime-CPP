/*

if(condition){

    // true
}


*/

#include <iostream>
using namespace std;

int main()
{

    // cout << "This is my main Scope" << endl;

    // if (true)
    // {
    //     cout << "Now I am in if Condition" << endl;
    // }

    // if (false)
    // {
    //     cout << "Now I am in if Condition" << endl;
    // }

    /*******************************************************************************/

    // bool con = false;

    // if (con)
    // {
    //     cout << "Now I am in if Condition using Con Variable - 1 " << endl;
    // }

    // con = true;
    // if (con)
    // {
    //     cout << "Now I am in if Condition using Con Variable - 2 " << endl;
    // }

    /*******************************************************************************/

    int num = 10, num1 = 20;
    if (num < num1) // 10 < 20 ====> true
    {
        cout << "Now I am in if Condition using num < num1 " << endl;
    }

    if (num > num1)// 10 > 20  =====> false
    {
        cout << "Now I am in if Condition using using num > num1" << endl;
    }
}