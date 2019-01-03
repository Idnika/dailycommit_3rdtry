#include <stdio.h>

int get_integer(void);
int power(int x, int y);

int main(void)
{

	int a, b;

	a = get_integer();
	b = get_integer();

	printf("%d의 %d제곱은 %d입니다. \n", a, b, power(a, b));

	return 0;

}

int get_integer(void)
{
	int n;

	printf("Input integer: ");
	scanf("%d", &n);

	return n;
}

 int power(int x, int y)

 {
 	int i;
 	long result = 1;

 	for (i = 0; i < y; i++)
 		result *= x;

 	return result;
 }