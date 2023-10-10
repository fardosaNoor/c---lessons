#include <iostream>
using namespace std;
int main ()
{
    /*Assuming the ocean’s level is currently rising at about 1.5 millimetres per year, write a program that displays:
•	The number of millimetres higher than the current level that the ocean’s level will be in 5 years
•	The number of millimetres higher than the current level that the ocean’s level will be in 7 years
•	The number of millimetres higher than the current level that the ocean’s level will be in 10 years
*/

double riseLevel = 1.5;
int year5, year7, year10;
year5 = (riseLevel * 5) - riseLevel;
year7 = (riseLevel *7) - riseLevel;
year10 = (riseLevel * 10) - riseLevel;
cout << "The number of millimetres higher than the current level that the ocean’s level will be " <<year5 << " " << " in 5 years" << endl;
cout << "The number of millimetres higher than the current level that the ocean’s level will be " << year7  << " IN 7 YEARS" << endl;
cout << "The number of millimetres higher than the current level that the ocean’s level will be " << year10  <<  " in 10 years " << endl;

return 0;

}