#include <iostream>
using namespace std;

int main ()
{
    //distance = speed *time;
    //ask the user for the speed of the vehicle //no negative number for speed 
    //how many hours it has travelled // no values less than one 
    //hour    distance travelled 

    double speedInMph, hours, total_distance = 0;

    cout << "What is the speed of the vehicle in mph?\n";
    cin >> speedInMph;

    while (speedInMph < 0)
    {
        cout << "The speed should be a positive number \n";
        cout << "What is the speed of the vehicle in mph?\n";
        cin >> speedInMph;
    }

    cout << "How many hours has it travelled? \n";
    cin >> hours;

    while (hours <= 0)
    {
        cout << "Hours should be positive! \n";
        cout << "How many hours has it travelled? \n";
        cin >> hours;
    }

    cout <<"Hours\t Distance Travelled\n";
    cout << "---------------------------\n";

    for (unsigned int i = 1; i <= hours; i++)
    {
        total_distance = total_distance + speedInMph;
        cout << i <<"\t\t" << total_distance <<endl;;
    }
    return 0;
}