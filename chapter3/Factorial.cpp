/*
Factorial:
Rewrite the factorial program using funtions. That is, implement function called
Factorial that inputs a positive integer n. The function should then compute the
factorial of n, and return the result. The function is to have following
prototype:

int Factorial(int n);

After you have implemented this function, test your function by calculating 5!,
0!, 9! and 3!, and output the results to the console window. Output should be 
formatted like so:

5! = 120 
0! = 1
9! = 362880
3! = 6
Press any key to continue...
*/

#include <iostream>

using namespace std;

int Factorial(int n);

int main() {

	//Testing my fucntion
	cout << "5! = " << Factorial(5) << endl;
	cout << "0! = " << Factorial(0) << endl;
	cout << "9! = " << Factorial(9) << endl;
	cout << "3! = " << Factorial(3) << endl;
}

/*
	Factorial function
*/
int Factorial(int n) {
	int factorial = 1;

	//Loop through and multiply all values
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}

	return factorial;
}
