#include "variadic_fucntions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: pmount of parameters
 *
 * Return: sum of its parmetters in n = 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list bye;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(bye, n);

	for (i = 0; i < n; i++)
		sum += va_arg(bye, int);
	va_end(bye);
	return (sum);
}
