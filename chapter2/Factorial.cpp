/*
Factorial: 
Write a program that asks the user to enter in a positive integer n.
Compute the factorial of n and output the result to the user.
Program's output should look like the following:

Enter a positive integer to compute the factorial of: 5
5! = 120
Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	int numVal = 0;
	double factorial = 1;

	cout << "Enter a positive integer to compute the factorial of: ";
	cin >> numVal;

	//Loop through and multiply all values
	for (int i = 1; i <= numVal; i++) {
		factorial *= i;
	}

	cout << numVal << "! = " << factorial << endl;
}
