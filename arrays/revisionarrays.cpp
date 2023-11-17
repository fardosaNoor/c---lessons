#include <iostream>

using namespace std;
int main ()
{
    /*int num_of_workers  = 6;
    int hours[num_of_workers];
    cout << "enter the hours worked by"
            << num_of_workers << "Employees" <<endl;
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    cout << hours[4];*/

    /*const int array_size = 5;
    int numbers[array_size];

    for (int count =  0; count < array_size; count ++)
    numbers[count] = 99;*/
    /*const int months = 12;
    int days[months] = {31, 28, 31,30,
                        31, 30, 31,31,
                        30,31,30,31  };

    for (int count = 0; count < months; count++)
    {
        cout << "Months " << (count +1) << " has " ;
        cout << days[count] <<" days\n";
    }*/

    /*const int size = 5;
    int id[size];
    double average[size];
    char grade[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Student id : "<< id[i]
        << " average: " << average[i]
        << " grade: " << grade[i] <<endl;
    }*/

    const int num_employeees = 5;
    int hours[num_employeees];
    double payRate[num_employeees];

    cout << "Enter the hours worked by " << num_employeees <<endl;

    for (int index = 0; index < num_employeees; index++)
    {
        cout << "employee: " << (index + 1) << " : ";
        cin  >> hours[index];

        cout << "Hourly pay rate : " << (index + 1) << ": "; 
        cin >> payRate[index];

        double grossPay = hours [index] *payRate[index];
        cout << "Employees " << (index+ 1);
        cout << ":$ " << grossPay <<endl;
    } 




    //termintae  the program
    return 0;
}