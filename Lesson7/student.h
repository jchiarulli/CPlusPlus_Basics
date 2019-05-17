#ifndef STUDENT_H
#define STUDENT_H
#include<string>

class Student
{
	public:
		Student(string = "Name", int = 0, float = 0.0);

		void setName(string);
		void setAge(int);
		void setGPA(float);

		string getName();
		int age();
		float GPA();


	private:
		char * name;
		int age;
		float GPA;
};

#endif
