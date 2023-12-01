#include <iostream>

//a program that uses linear search to find the greatest number  in an array of 6

// Function prototype for linear search
int findLargest(const int array[], int size);

int main() {
    const int SIZE = 6;
    int numbers[SIZE];

    // Get user input for the array of numbers
    std::cout << "Enter 6 numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Find the largest number using linear search
    int largestIndex = findLargest(numbers, SIZE);
    int largestNumber = numbers[largestIndex];

    // Display the result
    std::cout << "The largest number in the array is: " << largestNumber << " (at index " << largestIndex << ")\n";

    return 0;
}

// Function to perform linear search and find the index of the largest number
int findLargest(const int array[], int size) {
    int largestIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] > array[largestIndex]) {
            largestIndex = i;
        }
    }

    return largestIndex;
}
