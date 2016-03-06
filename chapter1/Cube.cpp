/*
Cube:
Write a program that asks the user to input a real number n.
Compute n^3 and output the result. Program output should be 
formatted as follows:

Enter a real number 7.12
7.12^3 = 360.944
Press any key to continue...
*/

#include <iostream>

using namespace std;

int main() {

	//Initializing and declairing variables
	double n1 = 0;

	//Accepting user input
	cout << "Enter a real number n1: ";
	cin >> n1;

	//Carrying out calculation and printing them.
	cout << n1 << "^3" << " = " << pow(n1, 3) << endl;
}
