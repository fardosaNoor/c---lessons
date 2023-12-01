#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int num_of_salsas = 5;

void salsaSales(string s[], int j[], int size);
void displaySales(const string s[], const int j[], int size);

int main()
{
    string salsa_names[num_of_salsas] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jars_sold[num_of_salsas];

    //get salsa sells
    salsaSales(salsa_names, jars_sold, num_of_salsas);
    displaySales(salsa_names, jars_sold, num_of_salsas);

    //terminate the program
    return 0;
}
void salsaSales(string salsa[], int jar[], int size)
{
   for (int i = 0; i < size; i++)
   {
    do
    {
        //ask the user to enter the number of jars sold 
        cout << "Enter the number of jars sold from " << salsa[i] << " : ";
        cin >> jar[i];

        //validate the number of jars 
        if (jar[i] < 0)
        {
            cout << "Invalid entry\n";
            cout << "Enter a number of jars greater than 0\n";
        }
    } while (jar[i] < 0);
   }
}

void displaySales(const string s[], const int j[], int size)
{
    int total = 0;
    int lowestSell = 0;
    int highestSell = 0;

    //get the total
    for (int i = 0; i < size; i++)
    {
        total += j[i];

        //find the highest 
        if (j[i] > j[highestSell])
        {
            highestSell = i;
        }
        else if (j[i] < j[lowestSell])
        {
            lowestSell = i;
        }
    }

    cout << setprecision(2) << fixed;
    cout << "--------------------------------\n";

    for (int i = 0; i < size; i++)
    {
        cout << s[i] << " : " << j[i] << " jars\n";
    }
    cout << "Total sales: " << total << " Jars\n";
    cout << "Highest selling salsa: " << s[highestSell] <<" with " << j[highestSell] << " jars \n";
    cout << "Lowest selling salsa: " << s[lowestSell] <<" with " << j[lowestSell] << " jars \n";

}