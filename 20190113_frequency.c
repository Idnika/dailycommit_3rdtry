#include <stdio.h>

#define SIZE 11

int main(void)
{
	int freq[SIZE] = {0};
	int i, candidate;

	while (1)
	{
		printf("Select number of the candidate(end -1): ");
		scanf("%d", &candidate);
		if (candidate < 0) break;
		freq[candidate]++;
	}

	printf("Result\n");

	for (i = 1; i < SIZE; i++)
		printf("%3d    %3d \n", i, freq[i]);

	return 0;
}