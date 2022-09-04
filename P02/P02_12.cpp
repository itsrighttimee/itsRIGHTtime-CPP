/*

Given a point (x, y),
write a program to find out if it lies on the x-axis,
y-axis or at the origin, viz. (0, 0).



*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter the value of x - coordinate : ";
    cin >> x;
    cout << "Enter the value of y - coordinate : ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "The point lie on Origin.";
    }
    else if (x == 0)
    {
        cout << "The point lie on Y-Axis.";
    }
    else if (y == 0)
    {
        cout << "The point lie on X-Axis.";
    }
    else
    {
        cout << "The point lie in the Quadrant.";
    }
}