/*
A cashier has currency notes of denominations 10, 50 and 100.
If the amount to be withdrawn is input through the keyboard in hundreds,
find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.


Modulus % : Remainder

X%5  = 0, 1, 2, 3, 4

10%5 = 0
11%5 = 1
12%5 = 2
13%5 = 3
14%5 = 4
15%5 = 0
16%5 = 1



*/

#include <iostream>

using namespace std;

int main()
{

    //

    int amount, tenNotes, fiftyNotes, hundredNotes;

    cout << "Enter the Amount you want to Withdrawn (multiple of 100) : ";
    cin >> amount; // 100

    tenNotes = amount / 10;      // 100/10 = 10
    fiftyNotes = amount / 50;    // 100/5 = 2
    hundredNotes = amount / 100; // 100/100 = 1

    cout << "Ten's Notes : " << tenNotes << endl;
    cout << "Fifty's Notes : " << fiftyNotes << endl;
    cout << "Hundred's Notes : " << hundredNotes << endl;
}