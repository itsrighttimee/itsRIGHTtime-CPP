/*


There were 20 shillings to a pound, and 12 pence to a shilling.

1 pound  = 20 shilling
1 Shilling = 1/20 pound
45 shilling = 45/20 pound
x shilling = x/20 pound


1 shilling = 12 pence
1 pence  = 1/12 shiling
1 pence  = (1/12)/20 pound = 1 / (12*20)





The new System consists of only pounds and pence, with 100 pence to a pound (like U.S. dollars and cents).
We’ll call this new system decimal pounds.

Thus £5.2.8 in the old notation is £5.13 in decimal pounds (actually £5.1333333).

Write a program to convert the old pounds-shillings-pence format to decimal pounds.


*/

#include <iostream>
using namespace std;

int main()
{
    int pound, shilling, pence;
    float newPound;

    cout << "Enter Pound : ";
    cin >> pound;
    cout << "Enter shillng : ";
    cin >> shilling;
    cout << "Enter pence : ";
    cin >> pence;

    newPound = pound + shilling / 20.0 + pence / (12 * 20.0); // 20.265
    cout << "New System  Amount : " << newPound;
}