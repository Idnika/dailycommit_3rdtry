#include <stdio.h>

int main()
{
	int a;
	int b;
	int count = 0;
	int instant = 0;
	int instant2;

	scanf("%d", &a);
	scanf("%d", &b);

	for (int i = a + 1; i < b; i++)
	{
		instant2 = i;
		
		while (instant2 != 1)
		{
			if (instant2 % 2 == 0)
				{ instant2 = instant2 / 2; }
			else
				{ instant2 = 3 * instant2 + 1; }

			instant++;
		}

		if (instant > count)
			count == instant;
	}

	return 0;
}