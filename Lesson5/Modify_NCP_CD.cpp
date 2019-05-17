// Attempting to modify data through a 
// non-constant pointer to constant data.

void f(const int *);	// prototype

int main()
{
	int y;

	f(&y);	// f attempts illegal modification

	return 0;	// indicates successful termination

} // end main

// xPtr cannot modify th value of the variable
// to which it points
void f(const int *xPtr)
{
	*xPtr = 100;	// error: cannot modify a const object

} // end function f
