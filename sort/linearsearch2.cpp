#include <iostream>

using namespace std;
int largestNumber( const int aray[], int size);

int main()
{
    //a program that uses linear search to find the greatest number  in an array of 6
    int size = 6;
    int numbers[size];

    //write the numbers 
    cout << "Enter the 6 numbers \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i + 1 <<" : ";
        cin >> numbers[i];
    }

    //largest number 
    int largestNum = largestNumber(numbers, size);

    cout << "The largest number is : " << largestNum ;

    cout << endl;
    return 0;
}
int largestNumber(const int aray[], int size)
{
    int largest = aray[0];
    for (int i = 1; i < size; i++)
    {
        if (aray[i] > largest)
        {
            largest = aray[i];
        }
    }

    return largest;
}