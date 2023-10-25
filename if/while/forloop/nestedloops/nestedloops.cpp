#include <iostream>
using namespace std;
//A nested loop is a loop inside the body of another loop
//Inner (inside), outer (outside) loops:

// determine each students average score
int main ()
{
    /*int total = 0, average, numStudents = 5, numTests = 5;
    for (int student = 1; student <= numStudents;student++)
    {
        total = 0; //accumulator
        for (int test = 1; test <= numTests; test++)
        {
        double score;
        cout << "Enter the score " << test <<"for " << "student " << student << ": ";
        cin >> score;
        total = score + total;
        }

        average = total /numStudents;
        cout << "The average score for student " << student <<"is " << average <<endl;
    }*/

    /*for (int minutes = 1; minutes < 3; minutes++)
    {
        for (int seconds = 0; seconds < 60; seconds++)
        {
            cout << minutes << ":" << seconds <<endl;
        }
    }*/

    //break in loops terminates the loop
    /*for (int x = 0; x < 5; x++)
    {
        cout <<"Hello \n";
        if (x == 3)
            break;
        cout << "Hola \n";

    }*/

    //continue ends the last itiration and repeats the first

    /*for (int x = 0; x < 5; x++)
    {
        cout <<"Hello \n";
        if (x == 3)
            continue;
        cout << "Hola \n";

    }*/

    /*for (int x = 0; x < 5; x++)
    {
        cout <<"Hello \n";
        if (x < 3) // x = 0 so its less than 3
            break;
        cout << "Hola \n";

    }*/

    /*for (int x = 0; x < 5; x++)
    {
        cout <<"Hello \n";
        if (x = 3)
            break; //one hello is executed
        cout << "Hola \n";

    }*/

    for (int x = 0; x < 5; x++)
    {
        cout <<"Hello \n";
        if (x == 3) //executes three times and hello once then terminates
            break;
        cout << "Hola \n";

    }

    return 0;
}




