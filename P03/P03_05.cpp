#include <iostream>
using namespace std;

/*


                      ' '  *
1        *         1*  6   1
2       * *        2*  5   3
3      * * *       3*  4   5
4     * * * *      4*  3   7
5    * * * * *     5*  2  09
6   * * * * * *    6*  1  11
7  * * * * * * *   7*  0  13

 +--



*/

int main()
{
    int n = 10, m = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "--";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "--";
        }
        cout << "\n";
    }
}
