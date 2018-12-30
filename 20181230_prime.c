#include <stdio.h>

void Primenumbers(int n) {

	int count;
	printf("Primenumbers smaller than %d: ", n);

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}

		if (count == 2)
		{
			printf("%d ", i);
		}

		count = 0;
	}

	printf("\n");
}

int main()
{
	int number;

	printf("Insert 1 integer: ");
	scanf("%d", &number);

	Primenumbers(number);

	return 0;
}