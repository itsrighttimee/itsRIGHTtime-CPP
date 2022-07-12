/*

When a value is smaller than a field specified with setw(), the unused locations are,
by default, filled in with spaces.
The manipulator setfill() takes a single character as an argument and causes
this character to be substituted for spaces in the empty parts of a field.
Rewrite Que Code P00_05 the program so that the characters on each line between
 the location name and the population number are filled in with periods instead of spaces,
 as in Portcity.....2425785



 setw(5) <<"Danishan"
Danishan

 setw(15) <<"Danishan"
        Danishan

setW(15)<<setfill('*')<<"Danishan";
*******Danishan



*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << " Last name" << setw(20) << setfill('_') << "first Name" << setw(25) << setfill('_')
         << "Street Address" << setw(15) << setfill('_') << "Town " << setw(15) << setfill('_') << "State" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << " Jones" << setw(21) << setfill('_') << "Bernard" << setw(21) << setfill('_') << "109 pies"
         << setw(25) << setfill('_') << "Littletown" << setw(10) << setfill('_') << "MI" << endl;
    cout << " O'Brian" << setw(18) << setfill('_') << "Coleen" << setw(29) << setfill('_') << "42 E. 99th Ave."
         << setw(15) << setfill('_') << "Bigcity" << setw(13) << setfill('_') << "NY" << endl;
    cout << " Wong" << setw(20) << setfill('_') << "Harry" << setw(30) << setfill('_') << "121 Ababama St."
         << setw(17) << setfill('_') << "Lakeville" << setw(11) << setfill('_') << "IL" << endl;
}