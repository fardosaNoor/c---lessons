#include <iostream>

using namespace std;
int main ()
{
    /*Define a 2D array to store the grades of 4 students in 3 different courses. Ask the user to enter the grades.
    Calculate the average grade for each student.*/

    const int num_students = 4;
    const int num_courses = 3;
    double average;
    double score[num_students][num_courses];
    double total = 0;

    for (int i = 0; i < num_students; i++)
    {
         cout << "Enter the grades of student :" << (i + 1) << endl;
        for (int j = 0; j < num_courses; j++)
        {
            cout <<"course  " << (j+1) << " : ";
            cin >> score[i][j];
        }
        cout << endl;

    }

    //add the elements 
    for (int i = 0; i< num_students; i++ )
    {
        for (int j = 0; j < num_courses; j++)
        {
            total += score[i][j];
        }
         average = total / num_courses;
        cout << "The average for student " <<(i + 1) << " : "  << average << endl;
    
    }
    
    //terminate the program
    return 0;
}