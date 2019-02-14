#include <stdio.h>

int main()
{
	char name[100];
	char address[100];

	printf("Input Your name: ");
	gets(name);

	printf("Input Your Address: ");
	gets(address);

	puts(name);
	puts(address);

	return 0;
}