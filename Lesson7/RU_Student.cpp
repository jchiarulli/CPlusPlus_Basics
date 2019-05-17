#include <iostream>

using std::cout;
using std::endl;

#include "RU_Student.h"

/*RU_Student::RU_Student(char *RUID, float GPA)
{
	RUID = "0000";
	GPA = 0.0;

	cout << "RUID: " << RUID << " GPA: " << GPA << endl;
}*/

RU_Student::RU_Student(char *RUIDPtr = "0000", float GPANumber = 0.0)
{
	RUID = RUIDPtr;
	GPA = GPANumber;

	cout << "RUID: " << RUID << " GPA: " << GPA << endl;
}



RU_Student::~RU_Student()
{
	cout << "RUID: " << RUID << " GPA: " << GPA << endl;	
}
