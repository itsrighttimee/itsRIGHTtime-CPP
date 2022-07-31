#include <iostream>
using namespace std;

/*


*/

class A
{

    int num1, num2;

public:
    // void takevalue(int a, int b);
    // void showValue();
    void msg1()
    {
        msg2();
        cout << "\nYou Entered in msg 1\n "; // 3
    }

    void msg2()
    {
        msg3();
        cout << "\nYou Entered in msg 2\n "; // 2
    }

    void msg3()
    {
        cout << "\nYou  Entered in msg 3\n "; // 1
    }

    void msg()
    {
        msg1();
    }
};

// void A::takevalue(int a, int b)
// {
//     msg();
//     num1 = a;
//     msg();
//     num2 = b;
// }

// void A::showValue()
// {
//     cout << "\n num1  : " << num1;
//     cout << "\n num2  : " << num2;
// }

int main()
{

    A a1, a2;

    // a1.takevalue(4, 5);
    // a2.takevalue(40, 50);

    // a1.showValue();
    // a2.showValue();

    a1.msg();
}