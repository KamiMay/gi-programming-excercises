/*
Binary Search:
Write a function that searches, using the binary search algorithm, an integer array and returns 
the array position of the “found” integer that matches the search key. The function should 
be prototyped as follows:

int BinSearch(int data[], int numElements, int searchKey);

Use the following array for test purposes:

{1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95}

Your output should be similar to the following:

{1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95}
Enter search key (or ‘x’ to exit): 21
21 is in position 6.
Enter search key (or ‘x’ to exit): 50
50 is in position 13.
Enter search key (or ‘x’ to exit): 0
0 not found.
Enter search key (or ‘x’ to exit): x
Exiting...
Press any key to continue...
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int BinSearch(int data[], int numElements, int searchKey);

int main(){
	//Initializing variables
	int data[] = { 1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95 };
	string searchKey = "0";
	int res = 0;

	while (true) {
		cout << "Enter search key (or 'x' to exit): ";
		cin >> searchKey;

		if (searchKey == "x") {
			break;
		} else {
			res = BinSearch(data, 23, stoi(searchKey));

			if (res == -1) {
				cout << searchKey << " not found." << endl;
			}
			else {
				cout << searchKey << " is in position " << res << "." << endl;
			}

		}
	}

	cout << "Exiting..." << endl;
}

int BinSearch(int data[], int numElements, int searchKey) {
	//Initializing variables
	int index = -1;
	int currentChecking = numElements;
	int maxChecking = numElements;
	int minChecking = 0;

	//While index is the one that we assigned at the top
	while (index == -1) {
		//Take current index to check and divide it in half
		currentChecking = (int)(currentChecking / 2);

		if (data[currentChecking] == searchKey) {
			index = currentChecking;
		} else if (data[currentChecking] > searchKey) {
			//When current data is larger than search 
			//key, set next variable with offset and store max
			maxChecking = currentChecking;
			currentChecking = currentChecking + minChecking;
		} else if (data[currentChecking] < searchKey) {
			//if less, update our offset and supply next index
			minChecking = currentChecking;
			currentChecking = (int) (currentChecking * 3);
		}

		//When both offsets are equal, there is no result to return
		if (maxChecking == minChecking) {
			break;
		}
	}

	return index;
}
