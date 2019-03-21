#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
}

int main(void)
{
	struct student s;

	s.number = 20070001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("Student Number: %d\n", s.number);
	printf("Student Name: %d\n", s.name);
	printf("Studnet Grade: %d\n", s.grade);

	return 0;
}