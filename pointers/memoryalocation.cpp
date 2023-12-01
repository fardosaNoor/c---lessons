#include <iostream>

using namespace std;
int main()
{
    //int size;
    //int x[size]; //cant use size in an array

    double* x;
    int size;
    cout << "The size of the array is? ";
    cin >> size;
    x = new double[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Entere a number: ";
        cin >> x[i];
    }
    cout << "You entered " <<endl;
    for (int i = 0; i < size; i++)
    {
       cout << x[i] << endl;
    }
    cout << endl;
    delete[] x;


    return 0;
}