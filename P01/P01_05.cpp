/*

The length & breadth of a rectangle and radius of a circle are input through the keyboard.
 Write a program to calculate the area & perimeter of the rectangle,
and the area & circumference of the circle.


calculate the area Rectangle: len * bre
perimeter of the rectangle : 2 *(len +bre)
the area the circle : 3.14 * rad*rad
the circumference of the circle : 2 * 3.14 * rad

*/

#include <iostream>
using namespace std;

int main()
{

    float len, bre, rad;

    cout << "Enter the Lenght of Rectangle : ";
    cin >> len;

    cout << "Enter the Breath of Rectangle : ";
    cin >> bre;

    cout << "Enter the Radius of Circle : ";
    cin >> rad;

    cout << "The Area of Rectangle : " << len * bre << endl;
    cout << "The Perimeter of Rectangle : " << 2 * (len + bre) << endl;
    cout << "The Area of Circle : " << 3.14 * rad * rad << endl;
    cout << "The Circumference of Circle : " << 2 * 3.14 * rad << endl;
}