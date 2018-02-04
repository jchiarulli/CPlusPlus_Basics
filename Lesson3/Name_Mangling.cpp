// Name mangling.

// function square for int values
int square( int x ) 
{ 
	return x * x; 
}
     
// function square for double values
double square( double y ) 
{ 
	return y * y; 
}
    
// function that receives arguments of types 
// int, float, char and int *
void nothing1( int a, float b, char c, int *d ) 
{
	// empty function body
}

// function that receives arguments of types 
// char, int, float * and double *
char *nothing2( char a, int b, float *c, double *d ) 
{ 
	return 0; 
}
    
int main()
{
	return 0;  // indicates successful termination
 
} // end main
