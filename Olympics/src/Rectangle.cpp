/*
 * Rectangle.cpp
 *
 *  Created on: 18.04.2017 ã.
 *      Author: Dimitrinka Valkova
 */
#include <cmath>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int x1, int x2, int x3, int x4,
		int y1, int y2, int y3, int y4) {
setRectangle(x1, x2, x3, x4, y1, y2, y3, y4);
}
void Rectangle::setRectangle(int x1, int x2, int x3, int x4,
		int y1, int y2, int y3, int y4) {
	this->x1 = (x1 > 0 && x1 < 20) ? x1 : 0;
	this->x2 = (x2 > 0 && x2 < 20) ? x2 : 0;
	this->x3 = (x3 > 0 && x3 < 20) ? x3 : 0;
	this->x4 = (x4 > 0 && x4 < 20) ? x4 : 0;
	this->y1 = (y1 > 0 && y1 < 20) ? y1 : 0;
	this->y2 = (y1 > 0 && y2 < 20) ? y2 : 0;
	this->y3 = (y1 > 0 && y3 < 20) ? y3 : 0;
	this->y4 = (y1 > 0 && y4 < 20) ? y4 : 0;
}
int Rectangle::calculateLenght() {
	return abs(x2 - x1);
}
int Rectangle::calculateWidht() {
	return abs(y3 - y1);
}
int Rectangle::pearimeter() {
	return 2 * (calculateLenght() + calculateWidht());
}
int Rectangle::area() {
	return calculateLenght() * calculateWidht();
}


Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}


