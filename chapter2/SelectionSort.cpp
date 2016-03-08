/*
Selection Sort:
Ask the user to input ten random (non-sorted) integers and sort them in an array.
Sort these integers in ascending order using the selection sort and output the 
serted array to the user. Output should look similar to the following:

Insert ten unsorted integers...
[0] = 5
[1] = -3
[2] = 2
[3] = 1
[4] = 7
[5] = -9
[6] = 4
[7] = -5
[8] = 6
[9] = -12

Unsorted List = 5, -3, 2, 1, 7, -9, 4, -5, 6, -12,
Sorting...
Sorted List = -12, -9, -5, -3, 1, 2, 4, 5, 6, 7,
Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	int values[10];
	int userInput = 0;

	//Inserting values from the user
	cout << "Insert ten unsorted integers..." << endl;
	for (int i = 0; i < 10; i++) {
		cout << "[" << i << "] = ";
		cin >> values[i];
	}
	cout << endl << endl;

	//Printing unsorted array
	cout << "Unsorted List = ";
	for (int i = 0; i < 10; i++) {
		cout << values[i] << ", ";
	}
	cout << endl;

	//Sorting the input
	cout << "Sorting..." << endl;

	for (int i = 0; i < 10; i++) {
		//Assigning default values
		int index = i;
		int min = values[i];

		//Finding new minimum and saving its value as well as index
		for (int j = i; j < 10; j++) {
			if (min > values[j]) {
				min = values[j];
				index = j;
			}
		}

		//Swapping the values
		values[index] = values[i];
		values[i] = min;
	}

	//Printing sortted array
	cout << "Sorted List = ";
	for (int i = 0; i < 10; i++) {
		cout << values[i] << ", ";
	}
	cout << endl;
}
