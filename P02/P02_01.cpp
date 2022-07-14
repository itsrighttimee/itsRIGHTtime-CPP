/*

If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.


CP = 1000
SP = 1500

CP > Sp ===> Profit
Profit : 500

CP = 1500
SP = 1000

SP > CP ===> Loss
Loss : 500




*/

#include <iostream>

using namespace std;

int main()
{

    float cp, sp, out;

    cout << "Enter the Cost Price : ";
    cin >> cp;

    cout << "Enter the Selling Price : ";
    cin >> sp;

    // if (cp < sp)
    // {
    //     cout << "You have Profit of : " << sp - cp;
    // }
    // if (cp > sp)
    // {
    //     cout << "You have Loss of : " << cp - sp;
    // }
    if (cp < sp)
    {
        // ture
        cout << "You have Profit of : " << sp - cp;
    }
    else
    {
        // flase
        cout << "You have Loss of : " << cp - sp;
    }
}