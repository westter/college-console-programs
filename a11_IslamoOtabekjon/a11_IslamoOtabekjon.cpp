//****************************************************************************
//File: a11_IslamovOtabekjon.cpp
//Student: Sam Student
//Assignment: Assignment #11
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday, November 28th (11:59 PM)
//Program to Find the Largest Element of an Array
//****************************************************************************



#include <iostream>
using namespace std;

int main() {
	const int MAX_SIZE = 99;
	int arr[MAX_SIZE];
	int size;

	cout << "Enter total number of elements (1 to 99): ";
	cin >> size;
	
	for (int i = 0; i < size; i++) {	
		cout << "Enter the number " << (i+1) << ": ";
		cin >> arr[i];

	}
	int largest = arr[0];
	for (int j = 0; j < size; j++) {
		if (arr[j] > largest)
			largest = arr[j];
	}

	cout << "Largest element of array is: " << largest;
	return 0;
}