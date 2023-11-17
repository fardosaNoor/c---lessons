#include <iostream>
double calculateRetail(double, double);

using namespace std;
int main()
{
    double wholesale_cost, markup, retail;

    cout << "Enter an item's wholesale cost? ";
    cin >> wholesale_cost;

    cout << "Enter the markup percentage of the item? ";
    cin >> markup;

    while (wholesale_cost < 0)
    {
        cout << "Enter a positive number! \n";
        cout << "Enter an item's wholesale cost? \n";
        cin >> wholesale_cost;
    }

    while (markup < 0 )
    {
        cout << "Enter a positive number \n";
        cout << "Enter the markup percentage of the item? ";
        cin >> markup;

    }

    retail = calculateRetail(wholesale_cost, markup);
    cout << "The retail's price is:\t" << retail;

    //terminate program
    return 0;
}

double calculateRetail(double x, double y)
{
    double retail;
    retail = x + (x * y/100);
    return retail;
}