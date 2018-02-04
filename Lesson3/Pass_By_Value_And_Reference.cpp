// Comparing pass-by-value and pass-by-reference
// with references.
#include <iostream>
      
using std::cout;
using std::endl;
     
int squareByValue(int);         // function prototype
void squareByReference(int &);  // function prototype
                                                       
int main()
{
	int x = 2;
	int z = 4;
 
	// demonstrate squareByValue
	cout << "x = " << x << " before squareByValue\n";
	cout << "Value returned by squareByValue: "
	<< squareByValue(x) << endl;  
	cout << "x = " << x << " after squareByValue\n" << endl;

	// demonstrate squareByReference
	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference(z);
	cout << "z = " << z << " after squareByReference" << endl;
	    
	return 0;  // indicates successful termination
} // end main

// squareByValue multiplies number by itself, stores the      
// result in number and returns the new value of number       
int squareByValue(int number)                               
{                                                             
	return number *= number;  // caller's argument not modified
	                                                                  
} // end function squareByValue                               
	     
// squareByReference multiplies numberRef by itself and   
// stores the result in the variable to which numberRef   
// refers in function main                                
void squareByReference(int &numberRef)                  
{                                                         
	numberRef *= numberRef;   // caller's argument modified
	                                                               
} // end function squareByReference           
