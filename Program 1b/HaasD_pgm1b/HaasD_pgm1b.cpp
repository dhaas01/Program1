//Assignment: Program 1b
//File name: HaasD_pgm1b.cpp
//Author: Deanna Haas
//Date: September 2, 2019
//Purpose: Debug a C++ program.
#include <iomanip>
#include <iostream> 
using namespace std; 

int main() {
	double janGlasses, febGlasses;
	double months = 0;
	double avgGlasses;

	// Introduction
	cout << "Welcome hot chocolate fans!This program calculates";
	cout << " the average number of glasses of hot chocolate sold";
	cout << " in January and February." << endl << endl;

	// Get number of glasses of hot chocolate sold for each month
	cout << "Enter the number of glasses of hot chocolate sold in January: ";
	cin >> janGlasses;
	months = months + 1;

	cout << "Enter the number of glasses of hot chocolate sold in February: ";
	cin >> febGlasses;
	months = months + 1;

	// Calculate average number of glasses sold     
	avgGlasses = (janGlasses + febGlasses) / months;

	// Display average number of glasses sold
	cout << fixed << setprecision(2) << endl << "The average number of glasses sold was:  "
		<< avgGlasses << endl << endl;

	system("pause");
	return 0;
}