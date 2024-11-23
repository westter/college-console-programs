//****************************************************************************
//File: a6_IslamovOtabekjon.cpp
//Student: Sam Student
//Assignment: Assignment #6
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday October 24th (11:59 PM)
// Program to display a Celsius to Fahrenheit table using For loop.
//****************************************************************************


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double fahrenheit;
	
	cout << "-------------------------\n";
	cout << "Celsius" << "\t\t" << "Fahrenheit" << endl;
	cout << "============================\n";
	
	for (int celsius = 0; celsius <= 20; ++celsius) {

		fahrenheit = (9.0 / 5.0) * celsius + 32;
		cout << celsius << "\t\t" << fixed << setprecision(1) << fahrenheit << endl;
		
	}
	cout << "-------------------------\n";



	return 0;


}