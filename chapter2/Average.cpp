/*
Average:
Write an averaging program. The program must prompt the user to enter
a positive integer that specifies the number of values n the user
wishes to average. The program must then ask the user to input these n
values. The program should then compute the average of the values inputted
and the output it to the user. Program should look like the following:

Enter the number of values to average: 5
[0] = 1
[1] = 2
[2] = 3
[3] = 4
[4] = 5
Average = 3
Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	int numVal = 0;
	double sum = 0;
	double temp = 0;

	cout << "Enter the number of values to average: ";
	cin >> numVal;

	//Loop through to accept all values and allocate them to an array
	for (int i = 0; i < numVal; i++) {
		cout << "[" << i << "] = ";
		cin >> temp;
		sum += temp;
	}

	cout << "Average = " << sum / numVal << endl;
}
