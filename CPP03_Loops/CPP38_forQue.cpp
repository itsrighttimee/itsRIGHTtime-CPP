#include <iostream>
using namespace std;

int main()
{
    int i, sum = 10;

    cout << sum << endl; // 10

    for (i = 0; i < 5; i++) // 0 1 2 3 4
    {
        sum = sum + i;
        cout << "Loop Itration : " << i << " | Sum is " << sum << endl; // 10 11
    }                                                                   // 1 2 3 4 5

    cout << "Final Ans : " << sum << endl; // 20
    cout << "Final i : " << i << endl;     // 5
}

/*

 i                               Sum
 0  : sum = sum + i   | 10 + 0 = 10
 1  : sum = sum + i   | 10 + 1 = 11
 2  : sum = sum + i   | 11 + 2 = 13
 3  : sum = sum + i   | 13 + 3 = 16
 4  : sum = sum + i   | 16 + 4 = 20




*/