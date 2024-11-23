//****************************************************************************
//File: a4_IslamovOtabekjon.cpp
//Student: Sam Student
//Assignment: Assignment #4
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday 3rd October (11:59 PM)
// Program to display the Calculator Menu using a switch statement.
//****************************************************************************


#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int user_choice;
    double area;
    double radius, length, width, height, base;

    cout << "Geometry Calculator\n";
    cout << "   1. Calculate the Area of a Circle\n";
    cout << "   2. Calculate the Area of a Rectangle\n";
    cout << "   3. Calculate the Area of a Triangle\n";
    cout << "   4. Quit\n";
    cout << "Enter your choice(1 - 4) :" << endl;
    
    cin >> user_choice;


    switch (user_choice) {
        case 1:
            cout << "Enter the radius of the circule: ";
            cin >> radius;
            area = 3.14159 * pow(radius, 2);
            cout << "The area of the circule is: " << area;
            break;
    
        case 2:
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;

            area = length * width;
            cout << "Rectangle's area is: " << area;
            break;

        case 3: 
            cout << "Enter the length of the triangls base: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = base * height * 0.5;
            cout << "The area of the triangle is: " << area;
            break;

        default: 
            cout << "Program ends...";
    }
    
    return 0;
}
