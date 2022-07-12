/*

a/b
c/d

a/b + c/d = e/f

e = a*d+c*b
f = b*d



*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cout << "Enter the Numerator of Fraction - 1 : ";
    cin >> a;
    cout << "Enter the Denomenator of Fraction - 1 : ";
    cin >> b;
    cout << "Enter the Numerator of Fraction - 2 : ";
    cin >> c;
    cout << "Enter the Denomenaor of Fraction - 2 : ";
    cin >> d;

    e = a * d + c * b;
    f = b * d;
    cout << "First number is : " << a << " / " << b << endl;
    cout << "Second Number is : " << c << " / " << d << endl;
    cout << "Submission is : " << e << " / " << f << endl;

    
}
