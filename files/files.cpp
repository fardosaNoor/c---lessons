#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    /*Can use files instead of keyboard, monitor screen for program input, output
    Allows data to be retained between program runs
    Steps:
    Open the file
    Use the file (read from, write to, or both)
    Close the file
    -Use fstream header file for file access
    File stream types:
        ifstream for input from a file
        ofstream for output to a file
        fstream for input from or output to a file
    Define file stream objects:
        ifstream infile;
        ofstream outfile;
    --Create a link between file name (outside the program) and file stream object (inside the program)
    Use the open member function:
        infile.open("inventory.dat");
        outfile.open("report.txt");
    Filename may include drive, path info.
    Output file will be created if necessary; existing file will be erased first
    Input file must exist for open to work
    --Can use output file object and << to send data to a file:
	outfile << "Inventory report";
    Can use input file object and >> to copy data from file to variables:
        infile >> partNum;
        infile >> qtyInStock >> qtyOnOrder;
*/

/*ifstream inputFile;
string filename;
int number;

//Get the file name from the user;
cout << "Enter filename: \n";
cin >> filename;

//open the file 
inputFile.open(filename);

//if the filename succesfully opoened, process it 
if (inputFile)
{
    //Read the numbers from the file 
    //display them 
    while (inputFile >> number)
    {
        cout << number <<endl;
    }
    //close the file 
    inputFile.close();
}
else
{
    //Display an error messge
    cout <<"Error opening the file. \n";
}*/


//--------------------------------------------------------------------------------------------

/*ofstream myfile;
myfile.open("temp/Scientists.txt");

myfile << "Tesla\n"; //looks like cout //moniter
myfile << "Newton\n";
myfile << "Maxwell\n";
myfile << "fardosa\n";
myfile << "fardosa\n";
myfile << "fardosa\n";
myfile << "new name\n";

myfile.close();*/

//---------------------------------------------------------------------------

ofstream myfile;
myfile.open("temp/newList.txt");

myfile << "Tesla\n"; //looks like cout //moniter
myfile << "Newton\n";
myfile << "Maxwell\n";
myfile << "fardosa\n";

myfile.close();

return 0;
}