#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 0;
	long int sum = 0;

	while (num2 <= 4000000)
	{
		if (num2 % 2 == 0)
			sum += num2;
		num3 = num2;
		num2 += num1;
		num1 = num3;
	}
	printf("%ld\n", sum);
	return (0);
}
