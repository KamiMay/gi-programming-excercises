/*
Arc Tangent 2:
Using atanf, write a function with the following prototype:

float MyArcTangent(float y, float x);

This function should examine the signs of the coordinates of the point (y, y)
and return the correct angle based on what quadrant the point lies in. Test
function with the following points: (2, 4), (-1, 5), (-6, -4), (4, -6). Follwoing
should be the results:

MyArcTangent( 4,  2) = 63.4671
MyArcTangent( 5, -1) = 101.27
MyArcTangent(-4, -6) = 213.707
MyArcTangent(-6,  4) = -56.3385
Press any key to continue...
*/

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14f;

float MyArcTangent(float y, float x);

int main() {

	cout << "MyArcTangent( 4, 2) = " << MyArcTangent(4, 2) << endl;
	cout << "MyArcTangent( 5, -1) = " << MyArcTangent(5, -1) << endl;
	cout << "MyArcTangent(-4, -6) = " << MyArcTangent(-4, -6) << endl;
	cout << "MyArcTangent(-6, 4) = " << MyArcTangent(-6, 4) << endl;
}

float MyArcTangent(float y, float x) {
	//Initializing variables
	float degrees = (atanf(y/x) * 180.f) / PI;
	
	if (x < 0) {
		degrees += 180;
	}

	return degrees;
}
