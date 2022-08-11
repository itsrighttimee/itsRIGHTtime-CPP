#include <iostream>
using namespace std;

/*

Friend : is created using friend keyword

 friend void fun(){

}

Propertied :

   1. it is not created in the scope of Class
   2. Friend funtion is not a member function
   3. it calls like normal Functions (not call like member fun A.fun())
   4. it can be declare inside the public or Private Section (Making Friend)
   5. they usually have Object as an Argument
   6. it Can access the private member of the class

*/

class itsRIGHTtime
{

    int a;
    int b = 0;

public:
    void setvalue()
    {
        a++;
        b++;
    }

    friend void fun(itsRIGHTtime a1);

    void getvalue()
    {
        cout << "Value of a :" << a << endl;
        cout << "Value of b : " << b << endl;
    }
};

void fun(itsRIGHTtime a1)
{
    cout << "this function is for making Friend Function";
    a1.a = 10;
    a1.b = 20;

    cout <<"\n\nValue of a "<<a1.a;
    cout <<"\nvalue of b "<<a1.b;
}

int main()
{
    itsRIGHTtime r1;

    // r1.setvalue();
    // r1.getvalue();
    // // r1.

    fun(r1);
}