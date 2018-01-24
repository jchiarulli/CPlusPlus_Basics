#include <iostream>
using namespace std;
double areaOfTriangle(double base, double height);
//returns the areaOfTriangle

double areaOfCube (double length, double heightOfCube, double width);
//returns the areaOfCube

int main ()
{

cout << "enter the base in inches\n";
cin >> base;
cout << "enter the height in inches\n";
cin >> height;
areaOfTriangle = areaOfTriangle(base, height);
cout << "enter the length in inches\n";
cin >> length;
cout << "enter the width in inches\n";
cin >> width;
cout <<"enter the heightOfCube in inches\n";
cin >> heightOfCube;
areaOfCube= areaOfCube(length, width , heightOfCube)

return 0;


}
double areaOfTriangle(double base, double height)
{
return (.5 * base(*height));

}
double areaOfCube (double length, double heightOfCube, double width)
{
return (length * heightOfCube * width);

}
