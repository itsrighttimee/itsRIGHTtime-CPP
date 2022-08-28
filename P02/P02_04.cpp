/*

To Learn how to use if condition : Lecture Code - CPP32 onward
To Learn how to use switch condition : Lecture Code - CPP36 onward

According to the Gregorian calendar, it was Monday on the date 01/01/1900.
If any year is input through the keyboard
write a program to find out what is the day on 1st January of this year.


number % num  ==> 0  to  num-1

100 % 4 ==>   0 - 3   ==>   0  1    2   3

 1. Sun     1   8    15
 2. mon     2   9
 3. tue     3   10
 4. wed     4   11
 5. thur    5   12
 6. fri     6   13
 7. sat     7   14

  11 days ===>  11 % 7 = 4 ==> wed
  36 days  ==>  36 % 7 = 1 ==> Sun


1st day Fri

 1. fri
 2. sat
 3. Sun
 4. mon
 5. tue
 6. wed
 7. thur

 11 day ==> 11%7 = 4  == > mon


 year = leapyear + nonLeap Year
 leapyear  = 366
 nonLeap Year  = 365

 days = leapyear*366 + nonLeapYear*365


*/

#include <iostream>
using namespace std;

int main()
{

    int yr, rfYer = 1900, lYr, nlYr, days;

    cout << "Enter the year : ";
    cin >> yr;

    lYr = yr % 4;
    nlYr = yr - lYr;

    days = lYr * 366 + nlYr * 365;

    cout << "Days are : " << days << endl
         << endl;

    switch (days % 7)
    { // 0   1   2   3    4   5   6
    case 0:
        cout << "1st January of " << yr << " Monday";
        break;
    case 1:
        cout << "1st January of " << yr << " Tuesday";
        break;
    case 2:
        cout << "1st January of " << yr << " Wednesday";
        break;
    case 3:
        cout << "1st January of " << yr << " Thursday";
        break;
    case 4:
        cout << "1st January of " << yr << " Friday";
        break;
    case 5:
        cout << "1st January of " << yr << " Saturday";
        break;
    case 6:
        cout << "1st January of " << yr << " Sunday";
        break;
    }
}