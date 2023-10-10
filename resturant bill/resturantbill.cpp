#include <iostream>
using namespace std;

/*Write a program that computes the tax and tip on a restaurant bill for a patron with an $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.*/

int main()
{
    double mealCharge, tax, tip;

    mealCharge = 88.67;
    tax = 0.0675 * mealCharge;
    tip = 0.2 * (mealCharge + tax);

    cout << "The tax is " << tax <<endl;
    cout << "The tip is " << tip <<endl;
    return 0;
}