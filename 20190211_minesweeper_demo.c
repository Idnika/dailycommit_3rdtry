#include <stdio.h>

int main()
{
	int p, q;

	scanf("%d", &p);
	scanf("%d", &q);

	int arr1[p][q];

	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
		{
			arr1[i][j] = 0;
		}
	}

	char arrmine[p][q];
	char arrm_instant[p];

	for (int a = 0; a < q; a++)
	{
		scanf("%s\n", arrm_instant);

		for (int b = 0; b < p; b++)
		{
			arrmine[b][a] = arrm_instant[b];
			printf("%s", arrmine);
		}

		printf("\n");
	}

	return 0;
}