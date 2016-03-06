/*
Aritmetic Operations:
Write a program that asks the user to input two real numbers, n1 and n2.
Compute the sum n1+n2, the difference n1-n2, the product n1*n2, and the
quotient n1/n2 (assume n2 != 0), and output the results, program output
should be formatted as follows: 

Enter a real number n1: 64.67
Enter a real number n2: -14.2
64.67 + -14.2 = 50.47
64.67 - -14.2 = 78.87
64.67 * -14.2 = -918.314
64.67 / -14.2 = -4.55423
Press any key to continue...
*/

#include <iostream>

using namespace std;

int main() {

	//Initializing and declairing variables
	double n1 = 0;
	double n2 = 0;

	//Accepting user input
	cout << "Enter a real number n1: ";
	cin >> n1;
	cout << "Enter a real number n2: ";
	cin >> n2;
	
	//Carrying out calculation and printing them.
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
	cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
	cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
}
