#include <iostream>

using namespace std;

//function prototypes
void bubbleSort(double array[], int size);
bool binarySearch(const double array[], int size, double value);
const int size = 6;
int main ()
{
    /*Define an array of 6 double numbers, ask the user to enter 6 numbers, and store the numbers in the array.Then use bubble sort to sort the array,then ask the user to enter an individual number. Use binary search to tell if the individual number is in the array.*/

    double numbers[size];
    double individualNumber;

    //enter the numbers 
    cout << "Enter the numbers \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << (i + 1) << " : ";
        cin >> numbers[i];
    }
    //sort the numbers 
    bubbleSort(numbers, size);

    //the numbers sorted
    cout << "The numbers are \n";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }

    //ask the user to enter an individual number
    cout << "Enter an individual number \n";
    cin >> individualNumber;

    // look for the number in the array 
    bool found = binarySearch(numbers, size, individualNumber);
    if (found) {
        cout << "The number " << individualNumber << " is in the array.\n";
    } else {
        cout << "The number " << individualNumber << " is not in the array.\n";
    }
    

    //terminate 
    return  0;
}
void bubbleSort(double array[], int size)
{
    for (int i = 0; i < size - 1; i ++)
    {
        for (int j = 0; j < size -1; j++)
        {
            if (array[j] > array[j + 1])
            {
                //swap elements
                swap(array[j], array[j + 1]);
            }
        }
    }
}

bool binarySearch(const double array[], int size, double value) {
    int left = 0;
    int right = size - 1;

    while (left <= right)
     {
        int middle = left + (right - left) / 2;

        if (array[middle] == value) {
            // Element found
            return true; 
        }
         else if (array[middle] < value) 
         {
            // Search in the right half
            left = middle + 1;
        }
         else 
         {
            // Search in the left half
            right = middle - 1; 
        }
    }

    // Element not found
    return false; 
}