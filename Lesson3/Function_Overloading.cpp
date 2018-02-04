// Using overloaded functions.
#include <iostream>
     
using std::cout;
using std::endl;
      
// function square for int values                           
int square( int x )                                         
{                                                           
	cout << "Called square with int argument: " << x << endl;
	return x * x;                                                                                                         
} // end int version of function square                     

// function square for double values                           
double square( double y )                                      
{                                                              
	cout << "Called square with double argument: " << y << endl;
	return y * y;                                               
                                                                
} // end double version of function square  

int main()
{
	int intResult = square( 7 );         // calls int version
	double doubleResult = square( 7.5 ); // calls double version
	    
	cout << "\nThe square of integer 7 is " << intResult
	     << "\nThe square of double 7.5 is " << doubleResult 
	     << endl;    
	    
	return 0;  // indicates successful termination
	    
} // end main

