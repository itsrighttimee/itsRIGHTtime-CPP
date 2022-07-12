
/**
 *  cin >> VariableName;
 *
 *
 * 1 foot  =  7.481 gallons
 * 1 gallons =  1/7.481 foot
 * x gallons = x/7.481 foot;
 *
 *
 * */

#include <iostream>
using namespace std;

int main()
{

    float gallons, foot;

    cout << "Enter Amount in Gollons : ";
    cin >> gallons;

    foot = gallons / 7.481;
    cout << "After converting into foot the Ans is : " << foot << endl;
    cout << gallons << " gallons into foot is : " << foot;
}