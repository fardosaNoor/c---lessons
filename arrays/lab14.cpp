#include <iostream>
#include <string>
using namespace std;

bool binarySearch(string arr[], string user_naame, int n);

int main ()
{
    //Define an array of 6 names
    int num = 6;
    string names[num];
    string user_name;

    //sk the user to enter 6 names,
    cout << "Enter 6 names \n";
    for (int i = 0; i < num; i++)
    {
        cout << "Name " << (i +1) << " ";
        cin >> names[i];
    }

    //selction sort
     for (int i = 0; i < (num - 1); ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < num; ++j) {
            if (names[j] > names[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(names[i], names[maxIndex]);
    }

    // Display names after sorting
    cout << "Names after sorting: " << endl;
    for (int i = 0; i < num; ++i) {
        cout << names[i] << " " << endl;
    }
    cout << endl;

    //ask the user to enter their own name
    cout << "Enter your name ";
    cin >> user_name;

    //binary search to tell if user name is there
     if (binarySearch(names, user_name, num)) {
        cout << user_name << " is in the array." << endl;
    } else {
        cout << user_name << " is not in the array." << endl;
    }

    //terminate the program
    return 0;
}

bool binarySearch(string arr[], string user_name, int n) 
{
    int first = 0, last = n - 1;
    while (first <= last) {
        int mid = (first + last) / 2;
        if (arr[mid] == user_name) {
            return true;
        } else if (arr[mid] < user_name) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    return false;
}
/*Define an array of 6 names, ask the user to enter 6 names, and store the names in the array.
Display the names before sorting;
Then use selection sort to sort the array in descending order, display names after sorting,
then ask the user to enter their own name. 
Use binary search to tell if the user’s name is in the array.
*/