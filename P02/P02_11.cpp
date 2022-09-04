/*
Given the coordinates (x, y) of a center of a circle
and it’s radius,
write a program which will determine
whether a point lies inside the circle,
on the circle or outside the circle.

(Hint: Use sqrt( ) and pow( ) functions)

x2 + y2 = r2 // r = radius



*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int x, y, r, f, x2, y2, r2;
    cout << "Enter value of x : ";
    cin >> x;
    cout << "Enter value of y : ";
    cin >> y;
    cout << "Enter value of radius : ";
    cin >> r;

    x2 = pow(x, 2);
    y2 = pow(y, 2);
    r2 = pow(r, 2);

    f = x2 + y2 - r2;

    if (f < 0)
    {
        cout << "The Point lie inside the Circle";
    }
    else if (f == 0)
    {
        cout << "The Point lie on the Circle";
    }
    else if (f > 0)
    {
        cout << "The Point lie OutSide the Circle";
    }
}