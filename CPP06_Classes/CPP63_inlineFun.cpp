#include <iostream>
using namespace std;

/*

Inline Function :  the functions which execute in a single Line

Conditions that must not hold

1. loop, Switch, goto are exist then fun cannot be Inline
2. return something  then fun cannot be Inline
3. Static Variable must not present, if present then fun cannot be Inline
4. if Recurive then fun cannot be Inline

*/

class A
{

    int num1, num2;

public:
    void takevalue(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void showValue()
    {
        cout << "\n num1  : " << num1;
        cout << "\n num2  : " << num2;
    }
};

// yes inline
inline void showValue11111()
{
    cout << "\n num1  : ";
    cout << "\n num2  :";
}

// not inline
inline int showValue1112222()
{
    cout << "\n num1  : ";
    cout << "\n num2  :";

    return 0;
}

int main()
{

    A a1, a2;

    a1.takevalue(4, 5);
    a2.takevalue(40, 50);

    a1.showValue();
    a2.showValue();
}