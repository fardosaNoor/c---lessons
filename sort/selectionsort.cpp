#include <iostream>

using namespace std;
void selectionSort(int ary[], int size);
int main()
{
    return 0;

}
void selectionSort(int ary[], int size)
{
    int minIndex, minValue;
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = ary[start];
        for (int index i = start +1; index < size; index++)
        {
            if(ary[index] < minValue)
            {
                minValue = ary[index];
                minIndex = index;
            }
        }
    }
}