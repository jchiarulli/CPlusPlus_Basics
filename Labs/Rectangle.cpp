#include <iostream>

using std::cout;
using std::endl;

#include <cmath>

#include "Rectangle.h"

Rectangle::Rectangle(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3, int x_4, int y_4)
{
	SetCorners(x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4);
}

void Rectangle::SetCorners(int x_one, int y_one, int x_two, int y_two, int x_three, 
			   int y_three, int x_four, int y_four)
{
	x1 = x_one;
	y1 = y_one;
	x2 = x_two;
	y2 = y_two;
	x3 = x_three;
	y3 = y_three;
	x4 = x_four;
	y4 = y_four;
}

int Rectangle::getPerimeter()
{	
	perimeter = length*2 + width*2;
	return perimeter;
}

int Rectangle::getArea()
{
	area = length*width;
	return area;
}

int Rectangle::getWidth()
{ 
	//width = sqrt((x3-x4)^2 + (y3-y4)^2);
	width = x3 - x4;
	return width; 
}

int Rectangle::getLength()
{
	//length = sqrt((x2-x3)^2 + (y2-y3)^2);
	length = y2 - y3;
	return length;
}

void Rectangle::printCorners()
{
	cout << "The rectangle corners are: (" << x1 << ", " << y1 << "), "
	     << "(" << x2 << ", " << y2 << "), "
	     << "(" << x3 << ", " << y3 << "), "
             << "(" << x4 << ", " << y4 << ")" << endl;
}
