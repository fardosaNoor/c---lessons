#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ofstream myfile;

    //open file 
    myfile.open("list.txt");
    myfile >> "Tesla\n";
    myfile >> "Name\n";

    //c;lose

    myfile.close();

    ifstream myfile2;
    string temp;

    myfile2.open("list.txt", ios::app);
    {
        while(myfile2)
        {
            cout << temp;
        }
    }

    myfile2.close();
}