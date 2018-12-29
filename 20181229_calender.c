#include <stdio.h>

int main()
{
	int month;
	int day;
	int dates;
	int count = 0;
	int year;

	printf("Input year: ");
	scanf("%d", &year);

	printf("Input month: ");
	scanf("%d", &month);

	printf("Input first day of this month(1~7): ");
	scanf("%d", &day);

	switch (month)
	{
		case 2:
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
				dates = 29;
			else
				dates = 28;
		break;

		case 4:
		case 6:
		case 9:
		case 11:
			dates = 30;
		break;

		default:
			dates = 31;
		break;
	}

	printf("-------------------------------\n");
	printf("  sun mon tue wed thu fri sat  \n");
	printf("-------------------------------\n");

	for (int i = 1; i < day; i++) {
		printf("    ");
		count++;
	}

	for (int j = 1; j <= dates; j++) {

		if (j <= 10) {
			printf("   %d", j);
		}

		if (j > 10) {
			printf("  %d", j);
		}

		count++;

		if (count % 7 == 0)
		{
			printf("\n");
			if (j > 10) { printf(" "); }
			count = 0;
		}
	}

	printf("\n");

	return 0;
}