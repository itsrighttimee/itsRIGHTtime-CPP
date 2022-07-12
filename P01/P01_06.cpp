/*
Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D.


C = 40;
D = 50;

C = 50;
D = 40'

*/

#include <iostream>
using namespace std;

int main()
{
    int C, D, temp;

    cout << "Enter Value of C : ";
    cin >> C; // 40
    cout << "Enter Value of D : ";
    cin >> D; // 50

    cout << endl
         << "Before Interchange" << endl;
    cout << "Value of C : " << C << endl;
    cout << "Value of D : " << D << endl;

    temp = C; // 40
    C = D;    // 50

    // D = C;//50
    D = temp; // 40

    cout << "After Interchange" << endl;
    cout << "Value of C : " << C << endl;
    cout << "Value of D : " << D << endl;
}
