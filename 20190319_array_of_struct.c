#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("Input Student number: ");
		scanf("%d", &list[i].number);
		printf("Input Student name: ");
		scnaf("%s", list[i].name);
		printf("Input Grade(real number): ");
		scanf("%1f", &list[i].grade);
	}

	for(i = 0; i < SIZE; i++)
		printf("Name: %s, Grade: %f\n", list[i].name, list[i].grade);

	return 0;
}