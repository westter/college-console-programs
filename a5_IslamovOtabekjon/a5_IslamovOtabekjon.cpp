//****************************************************************************
//File: a5_LastName.cpp
//Student: Sam Student
//Assignment: Assignment #5
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday October 10th (11:59 PM)
//	
//****************************************************************************


#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {

        reverse = reverse * 10;          
        reverse = reverse + number % 10; 
        number = number / 10;           

    }


    cout << "Reversed number: " << reverse << endl;

    return 0;
}
