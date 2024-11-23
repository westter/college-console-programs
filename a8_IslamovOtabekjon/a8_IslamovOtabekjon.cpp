//****************************************************************************
//File: a8_IslamovOtabekjon.cpp
//Student: Sam Student
//Assignment: Assignment #8
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday, November 7th (11:59 PM)
//Program using Files for Numeric Data Processing.
//****************************************************************************

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int number;
	int count = 0;
	int sum = 0;
	double average;

	ifstream file("random.txt");
	if (file.is_open()) {

		while (file >> number)
		{
			sum += number;
			count++;
		}
		file.close();

	}
	if (count > 0) {
		average = static_cast<double>(sum) / count;

	}

	cout << "Sum: " << sum << endl;
	cout << "Total: " << count << endl;
	cout << "Average: " << average << endl;
	cout << "File closed. Program ended.";

	return 0;

}