/**
 *
 * On a certain day the British pound was equivalent to $1.487 U.S.,
 *  the French franc was $0.172, the German deutschemark was $0.584,
 *  and the Japanese yen was $0.00955.
 *
    Write a program that allows the user to enter an amount in dollars,
   and then displays this value converted to these four other monetary units.


   1 pound = 1.487 us  ====>  1 us = 1/1.487 pound ====> x us = x/1.487pound

   eg. :   45 us  = 45 / 1.487 pound

   x us = x / 0.172 franc

   x us = 0.584 deutschemark

   x us  = x / 0.00955 yen

 *
 * */

#include <iostream>
using namespace std;

int main()
{
    float dolar, pound, franc, deut, yen;

    cout << "Enter the amount in us Dolar : ";
    cin >> dolar;

    pound = dolar / 1.487;
    franc = dolar / 0.172;
    deut = dolar / 0.584;
    yen = dolar / 0.00955;

    cout << "The Amount in pound : " << pound << endl;
    cout << "The Amount in franc : " << franc << endl;
    cout << "The Amount in deutchemark : " << deut << endl;
    cout << "The Amount in yen : " << yen << endl;
}