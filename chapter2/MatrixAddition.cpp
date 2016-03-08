/*
Matrix Addition:
Write a program that creates three matrix variables of dimensions 2x3, two of which
are to be initialized in such a way that they are identical to A and B; the third 
will be used to store the sum of A and B. Using double for-loop to iterate over the
matrix elements, compute the sum of each component and store results in the third 
matrix. Finally, output the matrix sum. Program's output should look like the following:

A =
-5 2 8
1 0 0 

B = 
1 0 2 
0 3 -6 

A + B =
-4 2 10
1 3 -6
Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	int A[2][3] = {
		{-5, 2, 8},
		{1, 0, 0}
	};

	int B[2][3] = {
		{ 1, 0, 2 },
		{ 0, 3, -6 }
	};

	int sum[2][3];

	//Loop through and adding all values
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = A[i][j] + B[i][j];
		}
	}

	//Print A 
	cout << "A = " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Print B 
	cout << "B = " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Print sum 
	cout << "A + B = " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
}
