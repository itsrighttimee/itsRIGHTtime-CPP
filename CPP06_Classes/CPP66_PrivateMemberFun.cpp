#include <iostream>

using namespace std;

class itRIGHTtime
{

    int a;
    int b;
    void manup()
    {
        a = 4 * a + 100;
        b = 20 * b + 200;
    }

public:
    void setvalue(int a1, int b1) // 4  6
    {
        a = a1;    // 4
        b = b1;    // 6
        getvaue(); // public member function of itsRIGHTtime
        manup();   // private member function of itsRIGHTtime
    }

    void getvaue()
    {
        cout << "Value of a :" << a << " Value of b : " << b;
    }
};

int main()
{
    itRIGHTtime r1;

    r1.setvalue(4, 6);

    cout << "\nInstde main Fun\n";
    r1.getvaue();
    // r1.manup();
}