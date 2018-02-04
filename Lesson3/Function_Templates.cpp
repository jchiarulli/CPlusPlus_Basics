// Using a function template.
#include <iostream>
      
using std::cout;
using std::cin;
using std::endl;
      
// definition of function template maximum         
template < class T >  // or template < typename T >
T maximum( T value1, T value2, T value3 )          
{                                                  
	T max = value1;                                 

	if ( value2 > max )                             
		max = value2;                                
                                            
	if ( value3 > max )                             
		max = value3;                                
                                            
	return max;                                     
                                                    
} // end function template maximum       

int main()
{
	// demonstrate maximum with int values
	int int1, int2, int3;
 
	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;
 
	// invoke int version of maximum
	cout << "The maximum integer value is: "
	     << maximum( int1, int2, int3 );        

	// demonstrate maximum with double values
	double double1, double2, double3;
 
	cout << "\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;
 
	// invoke double version of maximum
	cout << "The maximum double value is: "
	     << maximum( double1, double2, double3 );

	// demonstrate maximum with char values
	char char1, char2, char3;
   
	cout << "\n\nInput three characters: ";
	cin >> char1 >> char2 >> char3;
    
	// invoke char version of maximum
	cout << "The maximum character value is: "
     	     << maximum( char1, char2, char3 )      
             << endl;
    
	return 0;  // indicates successful termination
  
} // end main
