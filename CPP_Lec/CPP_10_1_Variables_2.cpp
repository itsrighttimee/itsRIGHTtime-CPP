
/*

Rules to make Identifiers :

1. it Cannot Start with a digit
    Not Valid :  123, 1man, 25School
     Valid    : man1, M14524, Come244Back

2. it cannot have Special Characters except ( _ underscore $ dolar digits )
    Not Valid  : It'sRIGHTtime, Danishan@123
    Valid : _man,  ITS1254, MAN_Name

3. Uppercase and Lowercase have Different Meaning
   Man, man, MAN, MAn, MaN

4. We cannot use keyword as a Identifier.
   Not Valid : int, double, long
   Valid     : Int, Double, doUBle, lonG




*/

#include <iostream>

using namespace std;

int main()
{

    bool num1;
    char num2;
    short num3;
    int num4;
    long num5;
    float num6;
    double num7;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
    cout << num6 << endl;
    cout << num7 << endl;
}