#include <iostream>
using namespace std;

/*A company’s East Coast sales division generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year.*/
int main ()
{
    double eastCoastSales;
    int sales = 8600000;
    eastCoastSales = 0.58 * sales;
    cout << "East coast division will generate " << eastCoastSales << endl;

    return 0;
}