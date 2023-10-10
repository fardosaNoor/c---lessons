#include <iostream>
using namespace std;

int main()
{
    /*Part 1 - Use if – else if – else for this lab.
Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle 3. Calculate the Area of a Triangle 4. Quit
Enter your choice (1-4):
If the user enters 1, the program should ask for the radius of the circle and then display its area. Use the following formula:
area = 3.14159 * radius * radius
If the user enters 2, the program should ask for the length and width of the rectangle and then display the rectangle’s area. Use the following formula:
area = length * width
If the user enters 3 the program should ask for the length of the triangle’s base and its height, and then display its area. Use the following formula:
area = base * height * 0.5 If the user enters 4, the program should end.
Input Validation: Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu.
Do not accept negative values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height. Exit the program if a negative number is entered.
*/
    double numberChoice, radius, circleArea, width, length, rectangle, height, triangle;
    cout << "Geometry Calculator!" <<endl;
    cout << "1. Calculate the Area of a Circle \n" "2. Clculate the Area of a rectangle \n" "3. Calculate the area of a Triangle\n" "4.Quit" << endl;
    cout <<"Enter your choice";
    cin >> numberChoice;
    if (numberChoice <1 || numberChoice > 4)
    {
       cout << "Number should be between 1 to 4 \n Enter again";
       return 1;
    }
    else if (numberChoice == 1)
    {
        cout << "Enter the radius of the circle?";
        cin >> radius;
        if (radius <= 0)
        {
            cout << "Enter a positive number ";
            return 1;
        }
        else {
            circleArea = 3.14159 * radius *radius;
            cout << circleArea;
            return 0;
        }
    }
    else if (numberChoice == 2 )
    {
        cout << "What is the length and width of the rectangle \n";
        cin >> length;
        cin >> width;
        if (width <= 0 || length <= 0)
        {
            cout << "Width and length should be positive numbers ";
            return 1;
        }
        else
         {
            rectangle = length * width ;
            cout << rectangle;
            return 0;
        }
    }
    else if (numberChoice == 3 )
    {
        cout << "What is the length and height of the triangel \n";
        cin >> length;
        cin >> height;
        if (height <= 0 || length <= 0)
        {
            cout << "height and length should be positive numbers ";
            return 1;
        }
        else
         {
            triangle = length * height * 0.5 ;
            cout << triangle;
            return 0;
        }
    
    }
    else {
        cout <<"Quit!";
    }
    return 0;
}