#include <iostream>
using namespace std;
int main ()

{
    /*int days, x = 1;
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
    cout << "total   \t" <<total <<endl;*/

    /*Write a program that calculates how much a person would earn if his or her salary is one dollar the first day and two dollars the second day and continues to double each day. The program should ask the user for the number of days.
    Display a table showing how much the salary was for each day, and then show the total pay at the end of the period.
    Input Validation: Do not accept a number less than 1 for the number of days worked.*/

    //salary of a person 
    //first day = 1 dollars 
    // second day doubles and countinues to do so 
    //ask the user the numver of days
    // display a table showing the salary and total
    // do not accept days less than one for number of days worked 




    // using whiile loop
    /*int nDays, day=1;
    int salary =1, total = 0, counter = 0;

    cout << "Enter the number of days: ";
    cin >> nDays;

    while (nDays < 1)
    {
        cout << "The number of days must be atleast one. \n";
        cout <<"Enter the number of days: ";
        cin >> nDays;
    }

    while (day <= nDays)
    {
        cout << "Day " << day << "\t$" << salary << endl;
        total = salary + total;
        day++;
        salary *= 2;
    }

    cout << "-------------------\n";
    cout << "Total \t$" << total <<endl;*/

    // using for loop

    int days, total = 0, salary = 1;

    cout << "Enter the number of days\n";
    cin >> days;

    while (days < 1) 
    {
        cout << "The number you entered must be atleast one \n";
        cout << "Enter the number of days \n";
        cin >> days ;
    }

    for (unsigned i = 1; i <= days; i++ )
    {
        cout << "Day\t"  << i << "\t$" << salary << endl;;
        total = salary + total;
        salary = salary * 2;

    }
    cout << "--------------------\n";
    //int average = total / days;

    cout << "Total \t" <<"$" <<total <<endl;

    return 0;
}
