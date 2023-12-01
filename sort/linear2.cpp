#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value);
int main ()
{
    int size = 6;
    int arr[] = {66, 77, 88, 99, 33, 44};
    int value = 88;

    int position = linearSearch(arr, size, value);
    cout << "position is " << position;
    return 0;
}
int linearSearch(int arr[], int size, int value)
{
    int index = 0; 
    int position = -1;
    bool found  = false;

    while (index < size && !found) //if the value is f
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index++; //Go to the next element
    }
    return position;
}