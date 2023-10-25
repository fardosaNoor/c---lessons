#include <iostream>
using namespace std;

int main ()
{
    double number, sum =0, average;
    int count = 0;

    cout << "Enter a non-negative number (Enter a negative number whne you are done?)";
    cin >> number;
    while (number >= 0 )
    {
        count = count + 1;
        sum = sum + number;
        cout << "Enter a non-negative number (Enter a negative number whne you are done?)";
        cin >> number ;
    }

    average = sum / count;
    cout <<"sum of numbers you entered " <<sum << endl;
    cout <<"average numbers "<< average << endl;
    return 0;
}