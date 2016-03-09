/*
ToUpper; ToLower:
Using ASCII table implement functions called ToUpperCase and ToLowerCase, which 
inputs a single character variable and returns the upper or lower case form of 
that character. If an upper case character is supplised to ToUpperCase function
return character unchanged and same for ToLowerCase. Otherwise return null character
'/0'. Prototypes:

char ToUpperCase(char input);
char ToLowerCase(char input);

After implementation create a loop that itterates over every lower and upper case 
character and transforms it to the opposite case. 
Press any key to continue...
*/

#include <iostream>

using namespace std;

char ToUpperCase(char input);
char ToLowerCase(char input);

int main() {

	//Lower case to upper
	for (int i = 97; i < 123; i++) {
		cout << (char)i << " : " << ToUpperCase((char)i) << endl;
	}

	//Lower case to upper
	for (int i = 65; i < 91; i++) {
		cout << (char)i << " : " << ToLowerCase((char)i) << endl;
	}
}

/*
	Function that takes lower case letter 
	and makes it upper case
*/
char ToUpperCase(char input) {
	//Initializing variables
	char ret = ' ';
	int toInt = input;
	int start = 65;

	//If it is lower case, return upper
	if (input > 96 && input < 123) {
		ret = start + (toInt - 97);
	} else if (input > 64 && input < 91) {
		//If it is upper, return original letter
		ret = input;
	} else {
		ret = '/0';
	}

	return ret;
}

/*
	Function that takes upper case letter 
	and makes it lower case
*/
char ToLowerCase(char input) {
	//Initializing variables
	char ret = ' ';
	int toInt = input;
	int start = 97;

	//If it is upper case, return lower
	if (input > 64 && input < 91) {
		ret = start + (toInt - 65);
	} else if (input > 96 && input < 123) {
		//If it is lower, return original letter
		ret = input;
	}
	else {
		ret = '/0';
	}

	return ret;
}
