#include <iostream>
using namespace std;

int main ()
{

    /*An electronics company sells circuit boards at a 35 percent profit. Write a program that will calculate the selling price of a circuit board that costs $14.95. Display the result on the screen.*/
    double coast, profit, sellingPrice;
    coast = 14.95;
    profit = (0.35 * coast);
    sellingPrice = coast + profit;
 
    cout <<"The profit is " <<profit <<endl;
    cout << "The selling price is " << sellingPrice <<endl;

    return 0;

}