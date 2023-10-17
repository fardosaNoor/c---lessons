#include <iostream>
using namespace std;
int main ()

{
    int days, x = 1;
    double amount = 1, total=0;
    cout <<"Enter the number of days you worked\n";
    cin >> days;

    while (days < 1)
    {
        cout << "The number of days you enter must be atleast one \n";
        cout << "Enter the number of days\n";
        cin >> days;
    }

    while (x <= days)
    {
       
        cout << "Day   " << x  << "   $" << amount;
        total = amount + total;
        days++;
        amount = amount * 2;

    }
    cout <<"------------------\n";
    cout << "total   \t" <<total <<endl;
    return 0;
}
