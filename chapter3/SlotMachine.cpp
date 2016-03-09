/*
Slot Machine:
Implement a function that returns a random integer in the range [low, high], where
low and high are input parameters. The function prototype should look like this:

int Random(int low, int	high);

Using your Random function, write a virtual slot machine program. The program should 
start the player off with $1000.00, and should display a menu like this:

Player’s chips: $1000
1) Play slot. 2) Exit.

If the player enters “1”, the program should ask the user to enter in his or her bet. 
The program needs to verify that a legal bet was placed; that is, a bet greater than 
zero and less than or equal to the amount of money the player has.  After the player 
has input his or her bet, the program must calculate three random numbers in the range 
[2, 7] and output them neatlyto the screen. If all three numbers are sevens, then the 
player wins ten times their betting money; else if, the three numbers are all the same,
but not sevens, then the player wins five times their betting money; else if, two out 
of the three numbers are the  same then the player wins three times their betting money; 
else, the player loses his or her bet.  At this point, calculate the player’s new chip 
amount and redisplay the menu. If at any point the player loses all of hisor her chips, 
a message should be displayed to the player and the program should exit. Also, if the
player enters “2” from the menu then the program should exit.  Here is an example of what 
the output should look like:

Player’s chips: $1000
1) Play slot. 2) Exit. 1
Enter your bet: 1500
You did not enter a valid bet.
Enter your bet: 1000
3 3 7
You win!
Player’s chips: $3000
1) Play slot. 2) Exit. 2
Exiting...
Press any key to continue...
*/

#include <iostream>
#include <cmath>

using namespace std;

int Random(int low, int	high);

int main() {
	float userChips = 1000.00;
	int userSelection = 0;
	float bet = 0;

	//Looping until user inputs 12 to exit
	while (userSelection != 2) {
		//Printing menu
		cout << "Player’s chips: $" << userChips << endl;
		cout << "1) Play slot. 2) Exit. ";
		cin >> userSelection;

		//Checking if user input is not exit
		if (userSelection != 2) {
			cout << "Enter your bet: ";
			cin >> bet;
			if (bet > 0 && bet <= userChips) {
				userChips -= bet;

				//Getting 3 random numbers between [2, 7]
				int rand[3] = {};
				for (int i = 0; i < 3; i++) {
					rand[i] = Random(2, 7);
					cout << rand[i] << " ";
				}
				cout << endl;

				//Checking if we have winning or losing situation
				if ((rand[0] == rand[1] == rand[2]) == 7) {
					userChips += (bet * 10);
					cout << "You win!" << endl;
				} else if (rand[0] == rand[1] == rand[2]) {
					userChips += (bet * 5);
					cout << "You win!" << endl;
				} else if ((rand[0] == rand[1]) || (rand[1] == rand[2]) || (rand[0] == rand[2])) {
					userChips += (bet * 3);
					cout << "You win!" << endl;
				} else {
					cout << "You lose!" << endl;
				}

			} else {
				cout << "You did not enter a valid bet." << endl;
			}
		}
	}

	cout << "Exiting..." << endl;
}

int Random(int low, int	high) {
	return low + rand() % ((high + 1) - low);
}
