#include <iostream>
using namespace std;

int main ()
{

    /*A car holds 15 gallons of gasoline and can travel 375 miles before refuelling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
    Hint: Use the following formula to calculate miles per gallon (MPG):
    MPG = Miles Driven/Gallons of Gas Used
    */
   int miles, gallonsOfGas, milesPerGallon;
   miles = 375;
   gallonsOfGas = 15;
   milesPerGallon = miles/gallonsOfGas;
   cout << "The miles per gallon of gas the car gets is " << milesPerGallon <<endl;
    return 0;
}