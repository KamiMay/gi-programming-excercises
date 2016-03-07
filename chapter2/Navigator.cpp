/*
Navigator:
Write a program that displays a menu which allows user to move one unit north,
east, south or west. Each time the player enters a selection, update the coordinates
of the user and output the current position. Start the player at the origin of the
coordiante system. Program's output should look like the following:

Current Position = (0, 0)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? n
Current Position = (0, 1)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? e
Current Position = (1, 1)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? s
Current Position = (1, 0)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? w
Current Position = (0, 0)
Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? q
Exiting...
Press any key to continue...
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	//Initializing and declairing variables
	char userInput = 'a';
	int vertPos = 0;
	int horizPos = 0;

	//While user does not input q, proceed.
	while (userInput != 'q') {

		//Print information and ask for input
		cout << "Current Position = (" << horizPos << ", " << vertPos << ")" << endl;
		cout << "Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? ";
		cin >> userInput;

		//Only handling valid input, could write code to handle invalid input,
		//but it wasn't required so I skipped
		switch (userInput) {
			case 'n':
				vertPos += 1;
				break;
			case 's':
				vertPos -= 1;
				break;
			case 'e':
				horizPos += 1;
				break;
			case 'w':
				horizPos -= 1;
				break;
			default:
				break;
		}
	}

	cout << "Exiting..." << endl;
}
