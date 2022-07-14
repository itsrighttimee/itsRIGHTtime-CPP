/*

If the total selling price of 15 items
and the total profit earned on them is input through the keyFboard,
write a program to find the cost price of one item.

cost Price  = selling Price - profit

*/

#include <iostream>

using namespace std;

int main()
{
    float totalSP, totalProfit, totalCp, cpOneItem;

    cout << "Enter the Selling Price of 15 items : ";
    cin >> totalSP;
    cout << "Enter the Profit on 15 items : ";
    cin >> totalProfit;

    totalCp = totalSP = totalProfit;
    cpOneItem = totalCp / 15;
    cout << "Cost price of 15 item : " << totalCp << endl;
    cout << "Cost price of One item : " << cpOneItem << endl;
}
