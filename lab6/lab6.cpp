#include <iostream>
using namespace std;

int main ()
{
    /*Write a program that asks the user to enter a few double numbers. The program calculates the sum and average of these numbers.
    Part A- the user specifies the number of double numbers.
    Part B- Modify your program such that no question is asked for the number of numbers. The end of the double number sequence is marked by a sentinel.
  */
    double  number , average, sum = 0;
    int count;
    cout <<"Enter the number of numbers: ";
    cin >> count;

    while (count <= 0 )
    {
        cout <<"Invalid number \n";
        cout <<"Enter the number of numbers \n";
        cin >> count ;
    }
   

    for (int i = 0; i < count; i++)
    {
        cout << "Enter a real number: " ;
        cin >> number;
        sum = sum +number;
    }
    average = sum / count;
    cout << "Sum of the numbers you entered : " << sum << endl;
    cout <<"Average of the numbers you entered " << average <<endl;


    return 0;
}