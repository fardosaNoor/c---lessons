#include <iostream>

using namespace std;
/*Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent and the county sales tax is 2 percent.*/
int main()
{
    double sales, statesTax, countyTax, total;
    sales = 95;
    statesTax = 0.04 * sales;
    countyTax = 0.02 * sales;
    total =  sales + statesTax + countyTax;

    cout << "The sales is " << sales <<endl;
    cout << "The state Tax is " << statesTax << endl;
    cout << "the county tax is " << countyTax << endl;
    cout << "The total sales is " << total << endl;
    return 0;
}
