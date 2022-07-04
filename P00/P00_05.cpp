/*

Last name    First name       Street address      Town          State
------------------------------------------------------------------------------------------------
Jones        Bernard        109 Pine        Lane        Littletown      MI
O’Brian       Coleen         42 E. 99th Ave.         Bigcity         NY
Wong         Harry         121-A Alabama St.         Lakeville         IL


setw()

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << "Last name" << setw(20) << "first Name" << setw(25) << "Street Address" << setw(15) << "Town " << setw(15) << "State" <<endl;
    cout <<"--------------------------------------------------------------------------------------"<<endl;
    cout << "Jones" << setw(20) << "Bernard" << setw(25) << "109 pies" << setw(15) << "Littletown" << setw(15) << "MI" <<endl;
    cout << "O'Brian" << setw(20) << "Coleen" << setw(25) << "42 E. 99th Ave." << setw(15) << "Bigcity" << setw(15) << "NY" <<endl;
    cout << "Wong" << setw(20) << "Harry" << setw(25) << "121 Ababama St." << setw(15) << "Lakeville" << setw(15) << "IL" <<endl;
}