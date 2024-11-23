//****************************************************************************
//File: a10_LastName.cpp
//Student: Sam Student
//Assignment: Assignment #10
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday, November 21st (11:59 PM)
//Program to Swap TWO Numbers using Call by Reference in Functions
//****************************************************************************


#include <iostream>

using namespace std;

void swap(int& x, int& y); //prototype

int main() {
	int a = 50,
		b = 60;

	cout << "Before swapping the value of: \n";
	cout << "a = " << a << " b = " << b << endl;
	
	swap(a, b);

	cout << "After Swapping the value of(with Call by reference) :\n";
	cout << "a = " << a << " b = " << b;
	
	return 0;
}

void swap(int& x, int& y) {

	int temp;
	temp = x;
	x = y;
	y = temp;
	 
}






