#include <iostream>
using namespace std;

int main()
{
    /*You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes the following data types use: char, int, float, and double. You do not have any manuals, so you can’t look this information up. Write a C++ program that will determine the amount of memory used by these types and display the information on the screen.*/
    cout << "size of char is " <<sizeof(char) <<endl;
    cout << "size of int is " <<sizeof(int) <<endl;
    cout << "size of float is " <<sizeof(float) <<endl;
    cout << "size of double is " <<sizeof(double) <<endl;

    return 0;
}