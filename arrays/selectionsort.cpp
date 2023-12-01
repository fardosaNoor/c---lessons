#include <iostream>
#include <algorithm>


void selectionSortDesc(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}

bool binarySearch(const string arr[], int n, const string& target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    // Define an array of 6 names
    string names[6];

    // Ask the user to enter 6 names and store them in the array
    for (int i = 0; i < 6; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    int arraySize = sizeof(names) / sizeof(names[0]);

    // Display names before sorting
    cout << "Names before sorting: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Use selection sort to sort the array in descending order
    selectionSortDesc(names, arraySize);

    // Display names after sorting
    cout << "Names after sorting: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Ask the user to enter their own name
    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    // Use binary search to check if the user's name is in the array
    if (binarySearch(names, arraySize, userName)) {
        cout << userName << " is in the array." << endl;
    } else {
        cout << userName << " is not in the array." << endl;
    }

    return 0;
}
