// Converting lowercase letters to uppercase letters
// using a non-constant pointer to non-constant data.
#include <iostream>

using std::cout;
using std::endl;

#include <cctype>	// protoypes for islower and toupper

void convertToUppercase(char *);

int main()
{
	char phrase[] = "characters and $32.98";

	cout << "The phrase before conversion is: " << phrase;
	convertToUppercase(phrase);
	cout << "\nThe phrase after conversion is: "
	     << phrase << endl;
	
	return 0;	// indicates successful termination

} // end main

// convert string to uppercase letters
void convertToUppercase(char *sPtr)
{
	while(*sPtr != '\0')	// current character is not '\0'
	{
		if(islower(*sPtr))	// if character is lowercase,
			*sPtr = toupper(*sPtr);		// convert to uppercase

		++sPtr;		//move sPtr to next character in string


	} // end while

} // end function convertToUppercase
