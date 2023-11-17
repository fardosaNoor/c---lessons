#include <iostream>

using namespace std;

int greaterThan(int [], int, int);
int main ()
{

    //write a function that accepts three arguments an array of integers, the ssize of the array, and anumber n 
    //the function should display all the numbers in the arrray that are greater than the number n

    //size of array determined by programmer 
    //user determines number n and array numbers 

    int size_array = 6;
    int array[size_array];
    int n;

    cout << "Enter the number n ";
    cin >> n;

    cout << "Enter the array values : \n";
    for (int i  = 0; i < size_array; i++)
    {
       cin >>  array[i];
    }

    greaterThan (array, size_array, n);

    //terminate the program
    return 0;
}

int greaterThan(int array[], int size, int number)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            if (number > max )
        {
            return number;
        }
        else{
            return max;
        }
        
        }
    }
    

}