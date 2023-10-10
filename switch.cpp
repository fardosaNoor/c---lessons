#include <iostream>
using namespace std;

int main ()
{
    int numberChoice;
    double radius, circleArea, width, length, rectangle, height, triangle;
    cout << "Geometry Calculator!" <<endl;
    cout << "1. Calculate the Area of a Circle \n" "2. Clculate the Area of a rectangle \n" "3. Calculate the area of a Triangle\n" "4.Quit" << endl;
    cout <<"Enter your choice";
    cin >> numberChoice;
    switch (numberChoice)
    {
    case 1:
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
        break;
    case 2:
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
        break;
    case 3:
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
        break;
    case 4:
        cout << "Quit!";
        break;
    default:
        cout <<"Enter a number between 1 and 4";
        break;
    }
    return 0;
}