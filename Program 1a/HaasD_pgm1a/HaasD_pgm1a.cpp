//Assignment: Program 1a
//File name: HaasD_pgm1a.cpp
//Author: Deanna Haas
//Date: September 2, 2019
//Purpose: Write a C++ program to display text.
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//Declare needed variables
	string firstName;
	string lastName;
	string fullName;
	string major;
	//Ask the user for his/her first and last name and major
	cout << "What is your first name?" << endl;
	cin >> firstName;
	cout << "What is your last name?" << endl;
	cin >> lastName;
	cout << "What is your major?" << endl;
	cin >> major;
	//Combine the first and last name as it will appear in the text
	fullName = firstName + " " + lastName;
	// Make the first line for the asteriks
	cout << "*******************************************" << endl;
	// Make the second line with the asteriks and HELLO centered
	cout << "**" <<"               " <<"H E L L O" <<"               " <<"**" << endl;
	// Make the third line be with the name centered and asteriks
	cout << "**" <<"              " <<fullName <<"              " <<"**" << endl;
	//Make the fourth line be with the major centered and asteriks
	cout << "**" << "          " << major << "         " << "**" << endl;
	// Make the last line of asteriks
	cout << "*******************************************" << endl;
	system("pause");
	return 0;
}