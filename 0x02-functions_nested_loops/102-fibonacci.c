#include <stdio.h>

/**
 *main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int num1, num2, final_num;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 48; c++)
	{
		final-num = num1 + num2;
		printf(", %ld", final_num);
		num1 = num2;
		num2 = final_num;
	}
	printf("\n");
	return (0);
}
