/*
3D Distance:
Implement a function that inputs two points and returns the distance between them,
the function is to have the following prototype:

float dist3(float ux, float uy, float uz,
			float vx, float vy, float vz);

Test this function by using it to compute the distance between these points:
	a. (1, 2, 3) and (0, 0, 0).
	b. (1, 2, 3) and (1, 2, 3).
	c. (1, 2, 3) and (7, -4, 5).

The output should look like this: 

Distance between (1, 2, 3) and (0, 0, 0) = 3.74166
Distance between (1, 2, 3) and (1, 2, 3) = 0
Distance between (1, 2, 3) and (7, -4, 5) = 8.7178
Press any key to continue...
*/

#include <iostream>

using namespace std;

float dist3(float ux, float uy, float uz,
			float vx, float vy, float vz);

int main() {

	//Printing the results
	cout << "Distance between (1, 2, 3) and (0, 0, 0) = " << dist3(1, 2, 3, 0, 0, 0) << endl;
	cout << "Distance between (1, 2, 3) and (1, 2, 3) = " << dist3(1, 2, 3, 1, 2, 3) << endl;
	cout << "Distance between (1, 2, 3) and (7, -4, 5) = " << dist3(1, 2, 3, 7, -4, 5) << endl;
}

float dist3(float ux, float uy, float uz,
			float vx, float vy, float vz) {
	//Putting variables into the formula and returning result
	return sqrtf(powf((vx - ux), 2) + powf((vy - uy), 2) + powf((vz - uz), 2));
}
