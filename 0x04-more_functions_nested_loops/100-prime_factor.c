#include <stdio.h>

/**
 * main - entry line
 * @void: no argument
 * Return: alway 0
 */
int main(void)
{
	long int n, factor;

	n = 612852475143;
	factor = 2;
	while (factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
			factor--;
		}
		factor++;
	}
	printf("%lu\n", factor);
	return (0);
}
