/*
Area/Circumberence:
Write a program that asks the user to input the radius r of a circle.
Compute the area A and circumference C of the circle using formulas 
A = pi*r^2 and C = 2*pi*r respectively, and output the results. Note
that for this excercise you can make the approximation pi ~ 3.14.
Program output should be formatted as follows:

Enter the radius of a circle: 10
The area A of a circle with radius 10 = 314
The circumference C of a circle with radius 10 = 62.8
Press any key to continue...
*/

#include <iostream>

using namespace std;

int main() {

	//Initializing and declairing variables
	int r = 0;
	double pi = 3.14;

	//Accepting user input
	cout << "Enter the radius of a circle: ";
	cin >> r;

	//Carrying out calculation and printing them.
	double A = pi * pow(r, 2);
	double C = 2 * pi * r;

	cout << "The area A of a circle with radius " << r << " = " << A << endl;
	cout << "The circumference C of a circle with radius " << r << " = " << C << endl;
}
