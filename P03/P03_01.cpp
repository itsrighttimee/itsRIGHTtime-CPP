/*
Assume that you want to generate a table of multiples of any given number.
Write a program that
allows the user to enter the number
and then generates the table,
formatting it into 10 columns and 20 lines.
Interaction with the program should look like this
(only the first three lines are shown):


Loop : CPP39
For Loop : CPP40

*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the Number : ";
    cin >> num; // 3

    // for(Start ; Stoping ; Move/itrate )
    for (int i = 1; i <= 10 * 20; i++) // i != 11 | i < 11 | i <= 10
    {
        cout << num * i << " "; // 3*1 = 3 6 9 ... 3*9=27 30

        if (i % 10 == 0) //10 20 30 40 --> true
        {
            cout << endl;
        }

    } // i = 0-> 1 | 1->2 | 2->3 | ... | 8->9 |  9->10

    cout << "\nEnd of the Program ";
}