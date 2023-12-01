#include <iostream>
using namespace std;

int main ()
{
    /*//initialize a variable 
    int x = 5;

    //address of a variable 
    cout << endl;
    cout << x << endl;
    cout << &x << endl; //has a different storage
    
    //as a decimal number 
    cout << (long long int) & x << endl; // & is address of 

    //pointers
    int x = 5;
    int* p; //* pointer of a variable 
    p = &x; //p can only store integer addresses ;

    cout << endl;
    cout << x << endl;
    cout << (long long int) p << endl;

    //store an address of double 
    double y =6.78;
    double* q;
    q = &y;

    cout << y << endl;
    cout << (long long int ) q << endl;
    cout << q << endl; 

    int x = 5, y = 7;
    int*  p = &x;
    int* q = &y;



    *p = *q - 4;
    cout << x << endl;
    cout << y << endl;*/


    //relationship between pointers and arrays
    int x[4] = {2, 3, 4, 7};  //name of array is the address of 1st element 
    cout << x << endl;
    cout << (long long int) x << endl;
    cout << (long long int) &x[0] <<endl;
    cout << (long long int) &x[1] <<endl;
    cout << (long long int) &x[2] <<endl;
    cout << (long long int) &x[3] <<endl;


    cout << "------------------------\n";
    double y[4] = {2, 3, 4, 7};   //doubles are 8 bytes apart
    cout << y << endl;
    cout << (long long int) y << endl;
    cout << (long long int) &y[0] <<endl;
    cout << (long long int) &y[1] <<endl;
    cout << (long long int) &y[2] <<endl;
    cout << (long long int) &y[3] <<endl;

    cout << "--------------------\n";
    double z[4] = {2, 3, 4, 7};
    for (int i = 0; i < 4; i++)
    {
        cout << *(x + i) << endl; // same as x[i]
    }

    return 0;
}