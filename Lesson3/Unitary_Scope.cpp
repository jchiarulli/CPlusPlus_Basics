// Using the unitary scope resolution operator.
#include <iostream>

using std::cout;
using std::endl;
      
#include <iomanip>
      
using std::setprecision;
    
// define global constant PI       
const double PI = 3.14159265358979;
    
int main()
{
	// define local constant PI
	const float PI = static_cast< float >( ::PI );
 
	// display values of local and global PI constants
	cout << setprecision( 20 )
	     << "  Local float value of PI = " << PI             
	     << "\nGlobal double value of PI = " << ::PI << endl;

	return 0;  // indicates successful termination
} // end main
