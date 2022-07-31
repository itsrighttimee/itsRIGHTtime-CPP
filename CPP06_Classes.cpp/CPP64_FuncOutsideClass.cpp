#include <iostream>
using namespace std;

/*


*/

class A
{

    int num1, num2;

public:
    void takevalue(int a, int b);
    void showValue();
};

void A::takevalue(int a, int b)
{
    num1 = a;
    num2 = b;
}

void A::showValue()
{
    cout << "\n num1  : " << num1;
    cout << "\n num2  : " << num2;
}

int main()
{

    A a1, a2;

    a1.takevalue(4, 5);
    a2.takevalue(40, 50);

    a1.showValue();
    a2.showValue();
}