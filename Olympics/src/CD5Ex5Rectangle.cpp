//============================================================================
// Name        : CD5Ex5Rectangle.cpp
// Author      : DVV
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using std::cout;
using std::endl;
using namespace std;
#include "Rectangle.h"

int main() {

	/*5.Create class Rectangle that stores only the Cartesian
	 coordinates of the four corners of the rectangle. The
	 constructor calls a set function that accepts four sets
	 of coordinates and verifies that each of these is in the
	 first quadrant with no single x- or y-coordinate larger
	 than 20.0. The set function also verifies that the
	 supplied coordinates do, in fact, specify a rectangle.
	 Provide member functions that calculate the length,
	 width, perimeter and area. The length is the larger of
	 the two dimensions. Include a predicate function
	 square that determines whether the rectangle is a
	 square.
	 */

	Rectangle rect1(2, 12, 2, 12, 2, 2, 16, 16);
	cout << rect1.area() << endl;
	Rectangle &rectRef = rect1;
	cout << rectRef.pearimeter() << endl;
	Rectangle *rectPtr = &rect1;
	cout << rectPtr->calculateLenght() << endl;

	Rectangle r2(2, 12, 2, 12, 2, 2, 18, 18);
	Rectangle r3(2, 14, 2, 14, 2, 2, 18, 18);

	Rectangle arrRect[3] = { rect1, r2, r3 };
	Rectangle *arrRectPtr[3];  // 0x345677 0x3gegg 0x425253

	arrRectPtr[0] = &rect1;
	arrRectPtr[1] = &r2;
	arrRectPtr[2] = &r3;
	for (int i = 0; i < 3; i++) {
		cout << arrRectPtr[i]->area() << endl;
	}

	return 0;
}
