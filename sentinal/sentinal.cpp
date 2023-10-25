#include <iostream>
using namespace std;

//sentinal: value in a list of values that incicate the end of data
//special value that cannot be confused with a valid value eg -999 for a test score 

int main ()
{
    //this program calculates the number of points a soccer team has earned over a series of games. the user enters a series of points values then -1 when finished 

    int game = 1;// game counter
    int points ;//to hold the number of points
    int total = 0;//accumulator 

    cout << "Enter the number of points your team has earned\n";
    cout << "so far in this season, then enter -1 when finished\n\n";
    cout <<"Enter the points for the game  \t" << game << ":" "\t";
    cin >> points;

    while (points != -1)
    {
        total = points + total;
        game++;
        cout <<"Enter the points for the game \t" << game << ":" "\t";
        cin >> points;
    }
    cout << "\nThe total points are " << total <<endl;

    return 0;
}