#include <iostream>
using namespace std;

class Swap
{

public:
    void SwapFun(int &a, int &b)
    {
        int c = a;
        a = b;
        b = c;
    }
};

int main()
{
    int a, b;
    Swap S;

    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "\n\nYou have Entered a = " <<a <<" and b =" <<b <<endl;
    S.SwapFun(a, b);
    
    cout << "After Swap a = " <<a <<" and b = " <<b <<endl;


}