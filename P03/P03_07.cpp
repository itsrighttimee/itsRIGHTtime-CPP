/*

Write a program that calculates how much money you’ll end up with
if you invest an amount of money at a fixed interest rate, compounded yearly.
Have the user furnish the initial amount, the number of years,
and the yearly interest rate in percent.
Some interaction with the program might look like this

Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year) : 5.5

At the end of 10 years, you will have 5124.43 dollars.

At the end of the first year you have 3000 + (3000 * 0.055), which is 3165.
At the end of the second year you have 3165 + (3165 * 0.055), which is 3339.08.
Do this as many times as there are years. A for loop makes the calculation easy.


Simple Intrest = ( Amount * rate * time ) / 100

compound Intrest =



*/

#include <iostream>
using namespace std;

int main()
{

    float p, r, t, si;

    cout << "Enter the Amount : ";
    cin >> p;
    cout << "Enter interest rate (percent per year) : ";
    cin >> r;
    cout << "Enter number of years : ";
    cin >> t;

    si = (p * r * t) / 100;

    cout << "At the end of " << t << " years, you will have " << si << " dollars.\n";
    si = p;
    for (int i = 1; i <= t; i++)
    {
        cout << "At the end of the " << i << "st year you have " << si << " + ("
              << si << " * " << t / 100 << "), which is " << (si = si + si * t / 100) << ".\n";
    }
}
