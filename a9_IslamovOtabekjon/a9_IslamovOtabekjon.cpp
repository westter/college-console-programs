//****************************************************************************
//File: a9_Islamov_Otabekjon.cpp
//Student: Sam Student
//Assignment: Assignment #9
//Course Name: Computer Programming I
//Course Number: COSC 1550
//Due: Thursday, November 14th (11:59 PM)
//Program to check whether the number is palindrome or not using Functions.
//****************************************************************************

#include <iostream>

using namespace std;
int reverseNum(int); // prototype
bool isPalindrome(int); //too

int main() {
	int num;

	cout << "Enter a number ";
	cin >> num;

	if (isPalindrome(num))
		cout << "The given is a Palindrome" << endl;
	else
		cout << "The given number is not a Palindrome!" << endl;
	
	return 0;
}
int reverseNum(int num) {
	int reverse = 0;
	while (num > 0) {
		int digit = num % 10;
		reverse = reverse * 10 + digit;
		num = num / 10;

	}
	return reverse;
}

bool isPalindrome(int num) {
	int reverse = reverseNum(num);
	return num == reverse;
}