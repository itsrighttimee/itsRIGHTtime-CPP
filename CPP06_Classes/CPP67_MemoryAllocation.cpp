#include <iostream>

using namespace std;

class itRIGHTtime
{

    int a;
    int b;
  

public:
    void setvalue(int a1, int b1) // 4  6
    {
        a = a1;    // 4
        b = b1;    // 6
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
}