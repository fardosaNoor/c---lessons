#include <iostream>
using namespace std;

int main ()
{
    /*One acre of land is equivalent to 43,560 square feet. Write a program that calculates the number of acres in a tract of land with 391,876 square feet.*/
    double acre, squareFt, currentSquare;

    squareFt = 43560;
    currentSquare = 391876;
    acre = currentSquare/squareFt;

    cout << "391876 square feet is equavalent to " << acre << "acres" <<endl;
    
    return 0;
}