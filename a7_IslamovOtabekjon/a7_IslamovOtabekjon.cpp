//****************************************************************************
//File: a7_IslamovOtabekjon.cpp
//Student: Sam Student
//Assignment: Assignment #7
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday, October 31st (11:59 PM)
//program to print an inverted half-star pyramid pattern using nested for loop
//****************************************************************************

#include <iostream>
using namespace std;

int main() {
	int rows;
	
	cout << "Enter number of rows: ";
	cin >> rows;
	
	
	for (int i = 0; i <= rows; ++i)
	{
		
		for (int j = rows - i; j > 0; --j)
		{
			cout << "* ";
		}
		
		cout << endl;
	
	
	}

	return 0;
}
