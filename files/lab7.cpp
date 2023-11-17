#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    //variable
    string friend1,friend2,friend3;

    //open a file named friends.txt using an ofstream object
    ofstream myfile;
    myfile.open("friends.txt");

    //ask the user to enter three names of their friends
    cout << "Enter the name of friend1\n";
    getline(cin,friend1);
    cout << "Enter the name of friend2\n";
    getline(cin,friend2);
    cout << "Enter the name of friend3\n";
    getline(cin,friend3);
    
    //write the names
    myfile << friend1 << endl;
    myfile << friend2 << endl;
    myfile << friend3 << endl;

    //close file
    myfile.close();

    //open file friends.txt
    ifstream myfile2;
    string temp;
    myfile2.open("friends.txt");

    //read the file and display names
    cout << "\nThe names of the friends are \n";
    while (getline(myfile2,  temp))
    {
        cout << friend1 <<"\n";
        cout << friend2 <<"\n";
        cout << friend3 <<"\n";
    }

    //close file ;
    myfile2.close();

    //terminate the program
    return 0;
}