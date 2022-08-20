#include <iostream>
using namespace std;

/*
Binary Operator : +  -    *   /    %

*/

class itsRIGHTtime
{
    int a1, a2;

public:
    itsRIGHTtime() {}

    itsRIGHTtime(int b1, int b2)
    {
        a1 = b1;
        a2 = b2;
    }

    itsRIGHTtime operator+(itsRIGHTtime c);
    itsRIGHTtime operator-(itsRIGHTtime c);
    itsRIGHTtime operator*(itsRIGHTtime c);
    itsRIGHTtime operator/(itsRIGHTtime c);
    itsRIGHTtime operator%(itsRIGHTtime c);
    void show();
};

void itsRIGHTtime::show()
{
    cout
        << a1;
    cout << " "
         << a2
         << endl;
}
itsRIGHTtime itsRIGHTtime::operator+(itsRIGHTtime c)
{
    itsRIGHTtime temp;
    temp.a1 = a1 + c.a1;
    temp.a2 = a2 + c.a2;

    return temp;
}
itsRIGHTtime itsRIGHTtime::operator-(itsRIGHTtime c)
{
    itsRIGHTtime temp;
    temp.a1 = a1 - c.a1;
    temp.a2 = a2 - c.a2;

    return temp;
}
itsRIGHTtime itsRIGHTtime::operator*(itsRIGHTtime c)
{
    itsRIGHTtime temp;
    temp.a1 = a1 * c.a1;
    temp.a2 = a2 * c.a2;

    return temp;
}
itsRIGHTtime itsRIGHTtime::operator/(itsRIGHTtime c)
{
    itsRIGHTtime temp;
    temp.a1 = a1 / c.a1;
    temp.a2 = a2 / c.a2;

    return temp;
}
itsRIGHTtime itsRIGHTtime::operator%(itsRIGHTtime c)
{
    itsRIGHTtime temp;
    temp.a1 = a1 % c.a1;
    temp.a2 = a2 % c.a2;

    return temp;
}

int main()
{
    itsRIGHTtime A1(1, 2), B1(20, 30), C1;
    cout << "Before\n";
    A1.show();
    B1.show();
    C1.show();

    C1 = A1 + B1; // C1 =  A1.Operator+(B1)
    cout << "Sum : ";
    C1.show();

    C1 = A1 - B1; // C1 =  A1.Operator-(B1)
    cout << "Subtract : ";
    C1.show();

    C1 = A1 * B1; // C1 =  A1.Operator*(B1)
    cout << "Multiply : ";
    C1.show();

    C1 = B1 / A1; // C1 =  B1.Operator/(A1)
    cout << "divide : ";
    C1.show();

    C1 = B1 % A1; // C1 =  B1.Operator+(A1)
    cout << "Modulus Remainder : ";
    C1.show();
}