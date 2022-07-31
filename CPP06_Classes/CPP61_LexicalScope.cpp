#include <iostream>
using namespace std;
/*

Lexical Scoping :

*/

int main()
{
    int a = 1;
    {
        int a = 2;
        {
            int a = 3;
            cout << a << endl; // 3

            {
                // int a = 4;
                a = 4;
                cout << a << endl; // 4

                {
                    cout << a << endl; // 4

                    a = 5;

                    cout << a << endl; // 5
                }
                cout << a << endl; // 5
            }
            cout << a << endl; // 5
        }
            cout << a << endl; // 2
    }
            cout << a << endl; // 1 
}