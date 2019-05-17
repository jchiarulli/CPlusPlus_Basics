#ifndef RU_STUDENT_H
#define RU_STUDENT_H

class RU_Student
{
	public:
		RU_Student(char *, float);
		~RU_Student();
	
	private:
		char *RUID;
		float GPA;
};

#endif
