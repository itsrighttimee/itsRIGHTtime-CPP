#include <iostream>
using namespace std;

class shap
{

public:
    int rectArea(int a, int b)
    {
        return a * b;
    }
    float circleAre(int a)
    {
        return 3.14 * a * a;
    }
};

int main()
{
    int a, b;
    shap S;

    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "\n\nArea of Rectangle lenght = " << a << " and breath = " << b;
    cout << " is " << S.rectArea(a, b) <<endl;

    cout << "Area of a Circle of Radius = " << a << " is " << S.circleAre(a)<< endl;
    cout << "Area of a Circle of Radius = " << b << " is " << S.circleAre(b)<< endl;
}