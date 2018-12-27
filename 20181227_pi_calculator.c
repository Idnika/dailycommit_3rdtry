#include <stdio.h>

int main()
{
	int loop_count;
	double pi_value;
	double pi_divider;

	printf("Input loop times for getting pi: ");
	scanf("%d", &loop_count);

	for (int i = 1; loop_count > 0; i++)
	{
		pi_divider = 2 * i - 1;

		if ((i % 2) == 1){
			pi_value += 1 / pi_divider;
		}
		else {
			pi_value -= 1 / pi_divider;
		}

		loop_count--;
	}

	pi_value *= 4;

	printf("Value of pi = %f\n", pi_value);

	return 0;
}