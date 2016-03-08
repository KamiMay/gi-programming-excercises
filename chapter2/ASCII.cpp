/*
ASCII:
Write a program that outputs every character in the extended ASCII character set 
in the range [33, 255]. (Hint: Recall that characters are represented by chat and
unsigned char types, so simply loop threough each possible value - 33-255 - and 
output it.)

Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	int count = 0;

	for (int i = 33; i < 256; i++) {
		count++;
		cout << i <<": " << (unsigned char) i << " ";

		//If we reached 10 printed values, breakline
		//as instructed in the excercise
		if (count == 10) {
			cout << endl;
			count = 0;
		}
	}
}
