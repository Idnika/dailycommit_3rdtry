#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person *p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "John");
	p1->age = 30;
	strcpy(p1->address, "Seoul Yongsan");

	printf("name: %s\n", p1->name);
	printf("age: %d\n", p1->age);
	printf("address: %s\n", p1->address);

	free(p1);

	return 0;
}