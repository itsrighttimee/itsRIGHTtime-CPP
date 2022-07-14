/*

In a town, the percentage of men is 52.
The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population,
write a program to find the total number of illiterate men and women
if the population of the town is 80,000.


formula percentage to number  = (percentage * totalNumber)/100


             Total Pop    : 80,000

percentage of men is 52%  
                  Men     : (52 * Pop )/100
                  WoMen   : Total Pop -  Man

Percentage of total literacy is 48%
           totalLitracy   : (48 * Pop )/100


percentage of literate men is 35 of the total population
            manLitracy   : (35 * Pop )/100
            WomenLitracy : totalLitracy - manLitracy

        man_IllLitracy   : Men - manLitracy
      woman_IllLitracy   : Women - WomenLitracy





*/

#include <iostream>
using namespace std;

int main()
{
    float totalPop = 80000, man, women, manLitrate, WomenLitrate, TotalLitrate, ill_manLitrate, ill_WomenLitrate;

    //   Men     : (52 * Pop )/100
    //   WoMen   : Total Pop -  Man
    man = (52 * totalPop) / 100;
    women = totalPop - man;

    TotalLitrate = (48 * totalPop) / 100;
    manLitrate = (35 * totalPop) / 100;
    WomenLitrate = TotalLitrate - manLitrate;

    ill_manLitrate = man - manLitrate;
    ill_WomenLitrate = women - WomenLitrate;

    cout << "Total Population are " << totalPop << endl;
    cout << "Man are " << man << endl;
    cout << "Women are " << women << endl;
    cout << "Total Litrate are " << TotalLitrate << endl;
    cout << "Litrate man are " << manLitrate << endl;
    cout << "Litrate Woman are " << WomenLitrate << endl;

    cout << "Illlitrate man are " << ill_manLitrate << endl;
    cout << "Illlitrate Women are " << ill_WomenLitrate << endl;
}
