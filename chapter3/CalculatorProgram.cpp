/*
Calculator Program:
To get some practice using the standard math functions you will write a simple calculator program. 
The program should display the following menu:

1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5)sqrt(x), 6) x^y, 7) ln(x), 8)e^x, 9) |x|, 
10) floor(x), 11) ceil(x), 12) Exit.

The program should prompt the user to make a selection from the menu.  After the user has made their
selection  the  program  should  ask  for  the  input  values;  note  that  some  functions  only  
need  one  input value,  whilst  others  need  two.    After  the  user  enters  the  input  values,
the  program  should  perform  the calculation and output the result.  The program should then loop 
back and again prompt the user to make a selection.  The program should continue this process until 
the user quits:

1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5)sqrt(x), 6) x^y, 7) ln(x), 8) e^x, 9) |x|, 
10) floor(x), 11) ceil(x), 12) Exit.1
Enter x: 3.14
cos(x) = -0.999999
Press any key to continue...
*/

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14f;

void Calculator(int input);
float InputY();

int main() {
	int userSelection = 0;

	//Looping until user inputs 12 to exit
	while (userSelection != 12) {
		//Printing menu
		cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^y, 7) ln(x), 8)e^x, 9) | x | , 10) floor(x), 11) ceil(x), 12) Exit.";
		cin >> userSelection;

		//Checking if user input is not exit
		if (userSelection != 12) {
			Calculator(userSelection);
		}
	}

	cout << "Exiting..." << endl;
}

/*
	Calculator function
*/
void Calculator(int input) {
	//Initializing variables
	float x = 0.f;
	float y = 0.f;
	float ret = 0.f;

	//Every input will always have an 
	//x so as for it once at the top
	cout << "Enter x: ";
	cin >> x;

	switch (input){
	case 1:
		cout << "cos(x) = " << cosf(x) << endl;
		break;
	case 2:
		cout << "sin(x) = " << sinf(x) << endl;
		break;
	case 3:
		cout << "tan(x) = " << tanf(x) << endl;
		break;
	case 4:
		cout << "atan2(y, x) = " << atan2(InputY(), x) << endl;
		break;
	case 5:
		cout << "sqrt(x) = " << sqrtf(x) << endl;
		break;
	case 6:
		cout << "x^y = " << powf(x, InputY()) << endl;
		break;
	case 7:
		cout << "ln(x) = " << logf(x) << endl;
		break;
	case 8:
		cout << "e^x = " << expf(x) << endl;
		break;
	case 9:
		cout << "|x| = " << fabsf(x) << endl;
		break;
	case 10:
		cout << "floor(x) = " << floorf(x) << endl;
		break;
	case 11:
		cout << "ceil(x) = " << ceilf(x) << endl;
		break;
	default:
		break;
	}
}

/*	
	An optional y input function
*/
float InputY() {
	float y = 0.f;
	cout << "Enter y: ";
	cin >> y;

	return y;
}
