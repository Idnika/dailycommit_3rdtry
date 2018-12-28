#include <stdio.h>

int main()
{

	double principal;
	double rate;
	int year;
	double total = 1;
	double ratesum;


	printf("Insert principle: ");
	scanf("%lf", &principal);
	printf("Insert rate: ");
	scanf("%lf", &rate);
	printf("Insert year: ");
	scanf("%d", &year);

	printf("===============\n");
	printf("Year      total\n");
	printf("===============\n");

	for (int i = 1; i <= year; i++)
	{

		ratesum = 1 + (rate / 100);

		for (int j = 1; j <= i; j++)
		{
			total *= ratesum;
		}

		total *= principal;

		printf("%d     %f\n", i, total);

		total = 1;
	}

	return 0;
}