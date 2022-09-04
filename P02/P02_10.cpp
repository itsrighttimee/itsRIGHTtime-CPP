/*

Given three points (x1, y1), (x2, y2) and (x3, y3),
write a program to check if all the three points
fall on one straight line.


(x1, y1)  & (x2, y2)
// m1  and m2 are the slops

   m1 = (y2-y1)/(x2-x1)

(x2, y2) and (x3, y3)

   m2 = (y3-y2)/(x3-x2)


*/
#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3, m1, m2;

    cout << "Enter value of x1 of point 1 : ";
    cin >> x1;
    cout << "Enter value of y1 of point 1 : ";
    cin >> y1;
    cout << "Enter value of x2 of point 2 : ";
    cin >> x2;
    cout << "Enter value of y2 of point 2 : ";
    cin >> y2;
    cout << "Enter value of x3 of point 3 : ";
    cin >> x3;
    cout << "Enter value of y3 of point 3 : ";
    cin >> y3;

    cout << "three points are : "
         << "(" << x1 << ", " << y1 << "), "
         << "(" << x2 << ", " << y2 << ") and "
         << "(" << x3 << ", " << y3 << ") \n";

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
    {
        cout << "The point lie on the Same line";
    }
    else
    {

        cout << "The points do not lie on the Same line";
    }
}