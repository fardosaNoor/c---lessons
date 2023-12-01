#include <iostream>

const int NUM_STUDENTS = 4;
const int NUM_COURSES = 3;

int main() {
    // Define a 2D array to store grades
    int grades[NUM_STUDENTS][NUM_COURSES];

    // Ask the user to enter grades
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        std::cout << "Enter grades for Student " << i + 1 << ":\n";
        for (int j = 0; j < NUM_COURSES; ++j) {
            std::cout << "Course " << j + 1 << ": ";
            std::cin >> grades[i][j];
        }
    }

    // Calculate and display the average grade for each student
    std::cout << "\nAverage Grades:\n";
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        int sum = 0;
        for (int j = 0; j < NUM_COURSES; ++j) {
            sum += grades[i][j];
        }

        double average = static_cast<double>(sum) / NUM_COURSES;
        std::cout << "Student " << i + 1 << ": " << average << std::endl;
    }

    return 0;
}