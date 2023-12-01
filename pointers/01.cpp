#include <iostream>
using namespace std;

int main ()
{
    //declare and initialize pointer 
    /*int* p_number;
    double* p_fractional_number;

    //explicitly initialize with nullptr
    int* p_number = nullptr;
    int* p_fractional_number = nullptr;

    cout << sizeof(int) << endl;
    cout << sizeof(int*) << endl;

    //initialize pointers and ssign data
    int int_var = 43;
    int* p_int = &int_var;

    cout << int_var << endl;
    cout << p_int << endl;
    cout << *p_int << endl; //derefrencing pointers */

    //character pointers
    const char * p_message = "Hello World!";

    cout << p_message << endl;
    cout << *p_message << endl;

    //change the value of p_message
    char message = "Hello World!";
    char * message1 = 'B';

    cout << "Message 1" << message << endl;

    






    //erminate 
    return 0;
}