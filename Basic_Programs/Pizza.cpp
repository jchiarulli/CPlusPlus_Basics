//DISPLAY 4.10 Buying Pizza 
//Determines which of two pizza sizes is the best buy.
#include <iostream>
using namespace std;

double unitprice(int diameter, double price);
//Returns the price per square inch of a pizza. The formal
//parameter named diameter is the diameter of the pizza in inches.
//The formal parameter named price is the price of the pizza.

int main( )
{
    int diameter_small, diameter_large;
    double price_small, unitprice_small,
           price_large, unitprice_large;

    cout << "Welcome to the Pizza Consumers Union.\n";
    cout << "Enter diameter of a small pizza (in inches): ";
    cin >> diameter_small;
    cout << "Enter the price of a small pizza: $";
    cin >> price_small;
    cout << "Enter diameter of a large pizza (in inches): ";
    cin >> diameter_large;
    cout << "Enter the price of a large pizza: $";
    cin >> price_large;

    unitprice_small = unitprice(diameter_small, price_small);
    unitprice_large = unitprice(diameter_large, price_large);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Small pizza:\n";
    cout << "Diameter = " << diameter_small << " inches\n";
    cout << "Price = $" << price_small;
    cout << " Per square inch = $" << unitprice_small << endl;
    cout << "Large pizza:\n";
    cout << "Diameter = " << diameter_large << " inches\n";
    cout << "Price = $" << price_large;
    cout << " Per square inch = $" << unitprice_large << endl;
    if (unitprice_large < unitprice_small)
    {    
	cout << "The large one is the better buy.\n";
    }
    else
    {
        cout << "The small one is the better buy.\n";
        cout << "Buon Appetito!\n";
    }
    return 0;
}

double unitprice(int diameter, double price)
{
    const double PI = 3.14159;
    double radius, area;

    radius = diameter/static_cast<double>(2);
    area = PI * radius * radius;
    return (price/area);
}
