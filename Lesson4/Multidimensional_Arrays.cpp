// Initializing multidimensional arrays.
#include <iostream>
      
using std::cout;
using std::endl;
      
void printArray( int [][ 3 ] );
      
int main()
{
	int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };           
	int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };         
   
	cout << "Values in array1 by row are:" << endl;
	printArray( array1 );
 
	cout << "Values in array2 by row are:" << endl;
	printArray( array2 );
  
	cout << "Values in array3 by row are:" << endl;
	printArray( array3 );
	 
	return 0;  // indicates successful termination
 
} // end main

// function to output array with two rows and three columns  
void printArray( int a[][ 3 ] )                              
{                                                            
	for ( int i = 0; i < 2; i++ ) {    // for each row        
                                                                 
		for ( int j = 0; j < 3; j++ )   // output column values
             		cout << a[ i ][ j ] << ' ';                         
                                                                 
		cout << endl;  // start new line of output             
                                                                 
       } // end outer for structure                              
                                                                 
} // end function printArray 
