/*
Bubble Sort:
Ask the user to input ten random (non-sorted) integers and store them in an array. Sort these 
integers in ascending order using a bubble sort function and output the sorted array to the user.
Your function should have the following prototype:

void BubbleSort(int data[], int n);

where data is the array parameter, and n is the number of elements in the array (i.e., the size
of the array).
Your output should look similar to the following:

Enter ten unsorted integers...
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
#include <cmath>
#include <string>

using namespace std;

void BubbleSort(int data[], int n);

int main(){
	//Initializing variables
	int data[10] = { };
	int n = 10;

	//Taking input from the user
	cout << "Enter ten unsorted integers." << endl;
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "] = ";
		cin >> data[i];
	}

	//Printing unsorted array
	cout << "Unsorted list = ";
	for (int i = 0; i < n; i++) {
		cout << data[i] << ", ";
	}

	cout << endl << "Sorting..." << endl;

	BubbleSort(data, n);
}

void BubbleSort(int data[], int n) {
	int subArrayEnd = n;

	//Sorthing with bubble sort
	while (subArrayEnd > 0) {
		for (int i = 0; i < subArrayEnd - 1; i++) {
			int temp = 0;
			if (data[i] > data[i + 1]) {
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
		subArrayEnd = subArrayEnd - 1;
	}

	//Printing sorted array
	cout << "Sorted list = ";
	for (int i = 0; i < n; i++) {
		cout << data[i] << ", ";
	}
	cout << endl;
}
