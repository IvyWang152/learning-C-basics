#include <stdio.h>

typedef struct student{
	int id;
	int age;
}student_t;


void printStudent(student_t* p_aStudent){
	printf("Student ID: %d, Age %d\n", (*p_aStudent).id, (*p_aStudent).age);
}

int main(){
	student_t s1;
	student_t s2;

	s1.id = 1001;
	s1.age = 23;

	s2.id = 1002;
	s2.age = 24;

	printStudent(&s1);
	printStudent(&s2);

	s2.id = 1003;
	printStudent(&s2);
	
	return 0;
}
