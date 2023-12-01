#include <iostream>
#include <algorithm> // for std::sort

// Function prototypes
void bubbleSort(double array[], int size);
bool binarySearch(const double array[], int size, double target);

int main() {
    const int SIZE = 6;
    double numbers[SIZE];

    // Get user input for the array of numbers
    std::cout << "Enter 6 numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Sort the array using bubble sort
    bubbleSort(numbers, SIZE);

    // Display the sorted array
    std::cout << "\nSorted Array:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Ask the user to enter an individual number
    double individualNumber;
    std::cout << "\nEnter an individual number to search for: ";
    std::cin >> individualNumber;

    // Use binary search to check if the individual number is in the array
    bool found = binarySearch(numbers, SIZE, individualNumber);

    if (found) {
        std::cout << "The number " << individualNumber << " is in the array.\n";
    } else {
        std::cout << "The number " << individualNumber << " is not in the array.\n";
    }

    return 0;
}

// Function to perform bubble sort on an array of doubles
void bubbleSort(double array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // Swap the elements if they are in the wrong order
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

// Function to perform binary search on a sorted array of doubles
bool binarySearch(const double array[], int size, double target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return true; // Element found
        } else if (array[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return false; // Element not found
}
