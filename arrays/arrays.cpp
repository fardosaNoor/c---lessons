#include <iostream>

using namespace std;
int main()
{

//an array must be an int //not a double
//int numbers [5];

/*const int  size = 6;
int numbers [size];*/

//how to access the array element 
//each element in an array has a unique subscript/index
//the index starts with zero

//int numbers [6] = { 23, 26, 34, 92, 11, 33};

/*cout << numbers[3] << endl;
//displays 92*/


//partial initializaation
//int numbers [6] = { 29, 32, 23};
// the missing three elements are made 0;

//adding more numbrers to the array leads to error 
//adding 6 numbers to an array of 5 is an errot
//int numbers [6] = { 29, 32, 23, 55, 66, 77, 88};

/*for (int i = 0; i< 6; i++)
{
    cout << numbers[i] <<endl;
}*/

/*int numbers [6] = { 29, 32, 23, 55, 66, 77};

for (int i = 0; i< 6; i++)
{
    cin >> numbers[i];
}*/

//maximum and minimum erray

/*int maxmin[6] = {29, 43, 33, 19, 56, 11};
int max = maxmin[0];
for (int i = 1 ; i < 6; i++)
{
    if (maxmin[i] > max)
    {
        max = maxmin[i];
    }
}

cout << "maximum " << max <<endl;


//minimum array
int maxmin[6] = {29, 43, 33, 19, 56, 11};
int min = maxmin[0];
for (int i = 1 ; i < 6; i++)
{
    if (maxmin[i] < min)
    {
        min = maxmin[i];
    }
}

cout << "maximum " << min <<endl;*/


//parallel array

//terminate program
return 0;
}