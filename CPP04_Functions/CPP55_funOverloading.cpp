#include <iostream>
using namespace std;

/*

same  Function name but different Argument

*/

// Circle
float area(float a)
{
    cout << endl
         << "Calculating for Circle";
    return 3.14 * a * a;
}

// Circle
float area(int a)
{
    cout << endl
         << "Calculating for Square";
    return a * a;
}

float area(float a, float b)
{
    cout << endl
         << "Calculating for Rectangle float float";

    return a * b;
}
float area(int a, int b)
{
    cout << endl
         << "Calculating for Rectangle for int int ";

    return a * b;
}
float area(int a, float b)
{
    cout << endl
         << "Calculating for Rectangle for int float";

    return a * b;
}

int main()
{
    float ans;

    ans = area(2, 3);
    cout << endl
         << ans;
    ans = area(2.4f, 3.4f);
    cout << endl
         << ans;
    ans = area(2, 3.4f);
    cout << endl
         << ans;

    ans = area(2);
    cout << endl
         << ans;

    ans = area(2.4f);
    cout << endl
         << ans;
}
