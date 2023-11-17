#include <iostream>

using namespace std;
int main ()
{
    /*Write a program that declares an array of 6 doubles, receives 6 numbers from the user, displays the elements of the array and calculates the average of the array elements.*/

    //declare an array 
    double total = 0;
    double numbers [6];

    for (int i = 0; i < 6; i++)
    {
        cin >> numbers[i];
        total += numbers[i];
    }

    cout << "The average is " << (total / 6);
    //terminate program
    return 0;
}