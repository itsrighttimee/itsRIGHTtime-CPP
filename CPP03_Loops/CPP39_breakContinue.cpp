#include <iostream>
using namespace std;

/*

break : Stop the Current Execution

*/

int main()
{
    int i, sum = 10;

    cout << sum << endl;

    // for (i = 0; i < 10; i++) // 0 1 2 3 4 ==>  5 6 7 8 9
    // {

    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     sum = sum + i;
    //     cout << "Loop Itration : " << i << " | Sum is " << sum << endl;
    // }
    // cout << "Final Ans : " << sum << endl;
    // cout << "Final i : " << i << endl;

    /************************************************************************************************************/

    for (i = 0; i < 10; i++) // 0 1 2 3 4 ==>  5 6 7 8 9
    {
        cout << "Before Continue " << endl;
        continue;
        cout << "After Continue " << endl;

        sum = sum + i;
        cout << "Loop Itration : " << i << " | Sum is " << sum << endl;
    } // 0 1 2 3 4 5 6
    cout << "Final Ans : " << sum << endl;
    cout << "Final i : " << i << endl;
}

/*

 i                               Sum
 0  : sum = sum + i   | 10 + 0 = 10
 1  : sum = sum + i   | 10 + 1 = 11
 2  : sum = sum + i   | 11 + 2 = 13
 3  : sum = sum + i   | 13 + 3 = 16
 4  : sum = sum + i   | 16 + 4 = 20




*/