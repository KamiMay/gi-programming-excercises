/*
Linear Search:
Hardcode the following integer array: {7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8}
into your program. Display this array to the user. Then ask the user to input an integer to search for.
Program should then search the array for the integer the user entered and ouput its array position
(array index). Output should look similar to the following:

List = 7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8
Enter an integer in the list to search for: 55
Item found at index [4]
Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	int values[] = { 7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8 };
	int userInput = 0;

	//Printing our array
	cout << "List = ";
	for (int i = 0; i < 17; i++) {
		cout << values[i] << ", ";
	}
	cout << endl;

	//Asking for an input
	cout << "Enter an integer in the list to search for: ";
	cin >> userInput;

	//Searching for the input in an array
	for (int i = 0; i < 17; i++) {
		if (values[i] == userInput) {
			cout << "Item found at index [" << i << "]" << endl;
			break;
		}
	}
}
