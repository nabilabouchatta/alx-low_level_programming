#include "main.h"

/**
 * int factorial - returns the factorial of a given number
 * @n: number
 * Return: the factorial of n If n is lower than 0 then it will be -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
