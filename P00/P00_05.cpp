/*

     Last name    First name       Street address          Town          State
    -------------------------------------------------------------------------------------------------
     Jones        Bernard           109 Pine Lane         Littletown       MI
     O’Brian      Coleen            42 E. 99th Ave.       Bigcity          NY
     Wong         Harry             121-A Alabama St.     Lakeville        IL




setw() :
cout <<"itsRIGHTtime"<<endl;
cout <<"itsRIGHTtime"<<endl;
cout <<"itsRIGHTtime"<< "itsRIGHttime" <<endl;

Output :
itsRIGHTtime
itsRIGHTtime

****************************************************************
cout <<"itsRIGHTtime"<<endl;
cout <<"itsRIGHTtime"<<endl;
cout <<"itsRIGHTtime"<< "  itsRIGHttime" <<endl;

Output :
itsRIGHTtime
itsRIGHTtime
itsRIGHtime  itsRIGHttime



sew(12);

itsRIGHtime


sweW(15)
   itsRIGHTtime

sweW(20)
        itsRIGHTtime



*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << " Last name" << setw(20) << "first Name" << setw(25) << "Street Address" << setw(15) << "Town " << setw(15) << "State" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << " Jones" << setw(21) << "Bernard" << setw(21) << "109 pies" << setw(25) << "Littletown" << setw(10) << "MI" << endl;
    cout << " O'Brian" << setw(18) << "Coleen" << setw(29) << "42 E. 99th Ave." << setw(15) << "Bigcity" << setw(13) << "NY" << endl;
    cout << " Wong" << setw(20) << "Harry" << setw(30) << "121 Ababama St." << setw(17) << "Lakeville" << setw(11) << "IL" << endl;
}