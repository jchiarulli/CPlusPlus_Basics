#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		Rectangle(int = 0, int = 1, int = 1, int = 1, int = 1, int = 0, int = 0, 
				int = 0);
		void SetCorners(int, int, int, int, int, int, int, int);
		int getPerimeter();
		int getArea();
		int getWidth();
		int getLength();
		void printCorners();
		
	private:
		int x1;
		int y1;
		int x2;
		int y2;
		int x3;
		int y3;
		int x4;
		int y4;
		int width;
		int length;
		int area;
		int perimeter;
};

#endif
