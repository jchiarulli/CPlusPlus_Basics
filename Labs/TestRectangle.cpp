// Programming Methodologies Lab (14:332:254:03)
//
// Lab Instructor: Kazem Cheshmi
//
// Date Performed: 4/02/2018 
// 
// Date Submitted: 4/02/2018
//
// Submitted by: Jason Chiarulli, RUID: 182001459
//

#include <iostream>

using std::cout;
using std::endl;

#include "Rectangle.h"

int main()
{
	Rectangle r1(3, 3, 9, 3, 9, 0, 3, 0);
	r1.printCorners();

	Rectangle r2(4, 4, 10, 4, 10, 0, 4, 0);
	r2.printCorners();
	r2.SetCorners(5, 5, 11, 5, 11, 0, 5, 0);
	r2.printCorners();

	cout << "The width is " << r2.getWidth() << endl;
	cout << "The length is " << r2.getLength() << endl;
	cout << "The perimeter is " << r2.getPerimeter() << endl;
	cout << "The area is " << r2.getArea() << endl;

	
	return 0;
}
