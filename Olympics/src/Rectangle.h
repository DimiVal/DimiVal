/*
 * Rectangle.h
 *
 *  Created on: 18.04.2017 ã.
 *      Author: Dimitrinka Valkova
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {
public:
	Rectangle(int, int, int, int, int, int, int, int);
	void setRectangle(int, int, int, int, int, int, int, int);
	int calculateLenght();
	int calculateWidht();
	int pearimeter();
	int area();

	int square();

	virtual ~Rectangle();

private:
	int x1;
	int x2;
	int x3;
	int x4;
	int y1;
	int y2;
	int y3;
	int y4;
};

#endif /* RECTANGLE_H_ */
